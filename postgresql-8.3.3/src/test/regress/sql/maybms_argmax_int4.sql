--test for argmax(int, float4) 
create table r( a int, b int, c real );

insert into r values( 1, 1, 0.03 );
insert into r values( 1, 2, 0.04 );
insert into r values( 1, 1, 0.01 );
insert into r values( 1, 3, 0.09 );
insert into r values( 1, 4, 0.02 );
insert into r values( 2, 1, 0.04 );
insert into r values( 2, 2, 0.02 );
insert into r values( 2, 3, 0.01 );
insert into r values( 2, 5, 0.02 );

select a, argmax( b, c ) from r group by a;
select argmax( b, c ) from r;

select a, argmax( b, c / 0.2 ) from r group by a;
select argmax( b, c / 0.2 ) from r;

--test for argmax(int, smallint) 
drop table r;
create table r( a int, b int, c smallint );

insert into r values( 1, 1, 3 );
insert into r values( 1, 2, 4 );
insert into r values( 1, 1, 1 );
insert into r values( 1, 3, 9 );
insert into r values( 1, 4, 2 );
insert into r values( 2, 1, 4 );
insert into r values( 2, 2, 2 );
insert into r values( 2, 3, 1 );
insert into r values( 2, 5, 2 );

select a, argmax( b, c ) from r group by a;
select argmax( b, c ) from r;

--test for argmax(int, int) 
drop table r;
create table r( a int, b int, c integer );

insert into r values( 1, 1, 3 );
insert into r values( 1, 2, 4 );
insert into r values( 1, 1, 1 );
insert into r values( 1, 3, 9 );
insert into r values( 1, 4, 2 );
insert into r values( 2, 1, 4 );
insert into r values( 2, 2, 2 );
insert into r values( 2, 3, 1 );
insert into r values( 2, 5, 2 );

select a, argmax( b, c ) from r group by a;
select argmax( b, c ) from r;

--test for argmax(int, bigint) 
drop table r;
create table r( a int, b int, c bigint );

insert into r values( 1, 1, 3 );
insert into r values( 1, 2, 4 );
insert into r values( 1, 1, 1 );
insert into r values( 1, 3, 9 );
insert into r values( 1, 4, 2 );
insert into r values( 2, 1, 4 );
insert into r values( 2, 2, 2 );
insert into r values( 2, 3, 1 );
insert into r values( 2, 5, 2 );

select a, argmax( b, c ) from r group by a;
select argmax( b, c ) from r;

drop table r;
