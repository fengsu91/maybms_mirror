.\\" auto-generated by docbook2man-spec $Revision: 1.1.1.1 $
.TH "CLUSTER" "" "2008-06-08" "SQL - Language Statements" "SQL Commands"
.SH NAME
CLUSTER \- cluster a table according to an index

.SH SYNOPSIS
.sp
.nf
CLUSTER \fItablename\fR [ USING \fIindexname\fR ]
CLUSTER
.sp
.fi
.SH "DESCRIPTION"
.PP
\fBCLUSTER\fR instructs PostgreSQL 
to cluster the table specified
by \fItablename\fR
based on the index specified by
\fIindexname\fR. The index must
already have been defined on 
\fItablename\fR.
.PP
When a table is clustered, it is physically reordered
based on the index information. Clustering is a one-time operation:
when the table is subsequently updated, the changes are
not clustered. That is, no attempt is made to store new or
updated rows according to their index order. (If one wishes, one can
periodically recluster by issuing the command again. Also, setting
the table's FILLFACTOR storage parameter to less than 100% can aid
in preserving cluster ordering during updates, since updated rows
are preferentially kept on the same page.)
.PP
When a table is clustered, PostgreSQL
remembers which index it was clustered by. The form
\fBCLUSTER \fItablename\fB\fR
reclusters the table using the same index as before.
.PP
\fBCLUSTER\fR without any parameter reclusters all the
previously-clustered tables in the current database that the calling user
owns, or all such tables if called by a superuser. This
form of \fBCLUSTER\fR cannot be executed inside a transaction
block.
.PP
When a table is being clustered, an ACCESS
EXCLUSIVE lock is acquired on it. This prevents any other
database operations (both reads and writes) from operating on the
table until the \fBCLUSTER\fR is finished.
.SH "PARAMETERS"
.TP
\fB\fItablename\fB\fR
The name (possibly schema-qualified) of a table.
.TP
\fB\fIindexname\fB\fR
The name of an index.
.SH "NOTES"
.PP
In cases where you are accessing single rows randomly
within a table, the actual order of the data in the
table is unimportant. However, if you tend to access some
data more than others, and there is an index that groups
them together, you will benefit from using \fBCLUSTER\fR.
If you are requesting a range of indexed values from a table, or a
single indexed value that has multiple rows that match,
\fBCLUSTER\fR will help because once the index identifies the
table page for the first row that matches, all other rows
that match are probably already on the same table page,
and so you save disk accesses and speed up the query.
.PP
During the cluster operation, a temporary copy of the table is created
that contains the table data in the index order. Temporary copies of
each index on the table are created as well. Therefore, you need free
space on disk at least equal to the sum of the table size and the index
sizes.
.PP
Because \fBCLUSTER\fR remembers the clustering information,
one can cluster the tables one wants clustered manually the first time, and
setup a timed event similar to \fBVACUUM\fR so that the tables
are periodically reclustered.
.PP
Because the planner records statistics about the ordering of
tables, it is advisable to run ANALYZE [\fBanalyze\fR(l)] on the newly clustered table.
Otherwise, the planner might make poor choices of query plans.
.PP
There is another way to cluster data. The
\fBCLUSTER\fR command reorders the original table by
scanning it using the index you specify. This can be slow
on large tables because the rows are fetched from the table
in index order, and if the table is disordered, the
entries are on random pages, so there is one disk page
retrieved for every row moved. (PostgreSQL has
a cache, but the majority of a big table will not fit in the cache.)
The other way to cluster a table is to use:
.sp
.nf
CREATE TABLE \fInewtable\fR AS
    SELECT * FROM \fItable\fR ORDER BY \fIcolumnlist\fR;
.sp
.fi
which uses the PostgreSQL sorting code
to produce the desired order;
this is usually much faster than an index scan for disordered data.
Then you drop the old table, use
\fBALTER TABLE ... RENAME\fR
to rename \fInewtable\fR to the
old name, and recreate the table's indexes.
The big disadvantage of this approach is that it does not preserve
OIDs, constraints, foreign key relationships, granted privileges, and
other ancillary properties of the table \(em all such items must be
manually recreated. Another disadvantage is that this way requires a sort
temporary file about the same size as the table itself, so peak disk usage
is about three times the table size instead of twice the table size.
.SH "EXAMPLES"
.PP
Cluster the table employees on the basis of
its index employees_ind:
.sp
.nf
CLUSTER employees USING employees_ind;
.sp
.fi
.PP
Cluster the employees table using the same
index that was used before:
.sp
.nf
CLUSTER employees;
.sp
.fi
.PP
Cluster all tables in the database that have previously been clustered:
.sp
.nf
CLUSTER;
.sp
.fi
.SH "COMPATIBILITY"
.PP
There is no \fBCLUSTER\fR statement in the SQL standard.
.PP
The syntax
.sp
.nf
CLUSTER \fIindexname\fR ON \fItablename\fR
.sp
.fi
is also supported for compatibility with pre-8.3 PostgreSQL
versions.
.SH "SEE ALSO"
clusterdb [\fBclusterdb\fR(1)]