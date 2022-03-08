.\\" auto-generated by docbook2man-spec $Revision: 1.1.1.1 $
.TH "DROP TEXT SEARCH DICTIONARY" "" "2008-06-08" "SQL - Language Statements" "SQL Commands"
.SH NAME
DROP TEXT SEARCH DICTIONARY \- remove a text search dictionary

.SH SYNOPSIS
.sp
.nf
DROP TEXT SEARCH DICTIONARY [ IF EXISTS ] \fIname\fR [ CASCADE | RESTRICT ]
.sp
.fi
.SH "DESCRIPTION"
.PP
\fBDROP TEXT SEARCH DICTIONARY\fR drops an existing text
search dictionary. To execute this command you must be the owner of the
dictionary.
.SH "PARAMETERS"
.TP
\fBIF EXISTS\fR
Do not throw an error if the text search dictionary does not exist.
A notice is issued in this case.
.TP
\fB\fIname\fB\fR
The name (optionally schema-qualified) of an existing text search
dictionary.
.TP
\fBCASCADE\fR
Automatically drop objects that depend on the text search dictionary.
.TP
\fBRESTRICT\fR
Refuse to drop the text search dictionary if any objects depend on it.
This is the default.
.SH "EXAMPLES"
.PP
Remove the text search dictionary english:
.sp
.nf
DROP TEXT SEARCH DICTIONARY english;
.sp
.fi
This command will not succeed if there are any existing text search
configurations that use the dictionary. Add CASCADE to
drop such configurations along with the dictionary.
.SH "COMPATIBILITY"
.PP
There is no \fBDROP TEXT SEARCH DICTIONARY\fR statement in the
SQL standard.
.SH "SEE ALSO"
ALTER TEXT SEARCH DICTIONARY [\fBalter_text_search_dictionary\fR(l)], CREATE TEXT SEARCH DICTIONARY [\fBcreate_text_search_dictionary\fR(l)]