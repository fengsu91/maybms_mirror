/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_BASE_YY_Y_TAB_H_INCLUDED
# define YY_BASE_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int base_yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ABORT_P = 258,
    ABSOLUTE_P = 259,
    ACCESS = 260,
    ACTION = 261,
    ADD_P = 262,
    ADMIN = 263,
    AFTER = 264,
    AGGREGATE = 265,
    ALL = 266,
    ALSO = 267,
    ALTER = 268,
    ALWAYS = 269,
    ANALYSE = 270,
    ANALYZE = 271,
    AND = 272,
    ANY = 273,
    ARRAY = 274,
    AS = 275,
    ASC = 276,
    ASSERTION = 277,
    ASSIGNMENT = 278,
    ASYMMETRIC = 279,
    AT = 280,
    AUTHORIZATION = 281,
    BACKWARD = 282,
    BEFORE = 283,
    BEGIN_P = 284,
    BETWEEN = 285,
    BIGINT = 286,
    BINARY = 287,
    BIT = 288,
    BOOLEAN_P = 289,
    BOTH = 290,
    BY = 291,
    CACHE = 292,
    CALLED = 293,
    CASCADE = 294,
    CASCADED = 295,
    CASE = 296,
    CAST = 297,
    CHAIN = 298,
    CHAR_P = 299,
    CHARACTER = 300,
    CHARACTERISTICS = 301,
    CHECK = 302,
    CHECKPOINT = 303,
    CLASS = 304,
    CLOSE = 305,
    CLUSTER = 306,
    COALESCE = 307,
    COLLATE = 308,
    COLUMN = 309,
    COMMENT = 310,
    COMMIT = 311,
    COMMITTED = 312,
    CONCURRENTLY = 313,
    CONFIGURATION = 314,
    CONNECTION = 315,
    CONSTRAINT = 316,
    CONSTRAINTS = 317,
    CONTENT_P = 318,
    CONVERSION_P = 319,
    COPY = 320,
    COST = 321,
    CREATE = 322,
    CREATEDB = 323,
    CREATEROLE = 324,
    CREATEUSER = 325,
    CROSS = 326,
    CSV = 327,
    CURRENT_P = 328,
    CURRENT_DATE = 329,
    CURRENT_ROLE = 330,
    CURRENT_TIME = 331,
    CURRENT_TIMESTAMP = 332,
    CURRENT_USER = 333,
    CURSOR = 334,
    CYCLE = 335,
    DATABASE = 336,
    DAY_P = 337,
    DEALLOCATE = 338,
    DEC = 339,
    DECIMAL_P = 340,
    DECLARE = 341,
    DEFAULT = 342,
    DEFAULTS = 343,
    DEFERRABLE = 344,
    DEFERRED = 345,
    DEFINER = 346,
    DELETE_P = 347,
    DELIMITER = 348,
    DELIMITERS = 349,
    DESC = 350,
    DICTIONARY = 351,
    DISABLE_P = 352,
    DISCARD = 353,
    DISTINCT = 354,
    DO = 355,
    DOCUMENT_P = 356,
    DOMAIN_P = 357,
    DOUBLE_P = 358,
    DROP = 359,
    EACH = 360,
    ELSE = 361,
    ENABLE_P = 362,
    ENCODING = 363,
    ENCRYPTED = 364,
    END_P = 365,
    ENUM_P = 366,
    ESCAPE = 367,
    EXCEPT = 368,
    EXCLUDING = 369,
    EXCLUSIVE = 370,
    EXECUTE = 371,
    EXISTS = 372,
    EXPLAIN = 373,
    EXTERNAL = 374,
    EXTRACT = 375,
    FALSE_P = 376,
    FAMILY = 377,
    FETCH = 378,
    FIRST_P = 379,
    FLOAT_P = 380,
    FOR = 381,
    FORCE = 382,
    FOREIGN = 383,
    FORWARD = 384,
    FREEZE = 385,
    FROM = 386,
    FULL = 387,
    FUNCTION = 388,
    GLOBAL = 389,
    GRANT = 390,
    GRANTED = 391,
    GREATEST = 392,
    GROUP_P = 393,
    HANDLER = 394,
    HAVING = 395,
    HEADER_P = 396,
    HOLD = 397,
    HOUR_P = 398,
    IF_P = 399,
    ILIKE = 400,
    IMMEDIATE = 401,
    IMMUTABLE = 402,
    IMPLICIT_P = 403,
    IN_P = 404,
    INCLUDING = 405,
    INCREMENT = 406,
    INDEPENDENTLY = 407,
    INDEX = 408,
    INDEXES = 409,
    INHERIT = 410,
    INHERITS = 411,
    INITIALLY = 412,
    INNER_P = 413,
    INOUT = 414,
    INPUT_P = 415,
    INSENSITIVE = 416,
    INSERT = 417,
    INSTEAD = 418,
    INT_P = 419,
    INTEGER = 420,
    INTERSECT = 421,
    INTERVAL = 422,
    INTO = 423,
    INVOKER = 424,
    IS = 425,
    ISNULL = 426,
    ISOLATION = 427,
    JOIN = 428,
    KEY = 429,
    LANCOMPILER = 430,
    LANGUAGE = 431,
    LARGE_P = 432,
    LAST_P = 433,
    LEADING = 434,
    LEAST = 435,
    LEFT = 436,
    LEVEL = 437,
    LIKE = 438,
    LIMIT = 439,
    LISTEN = 440,
    LOAD = 441,
    LOCAL = 442,
    LOCALTIME = 443,
    LOCALTIMESTAMP = 444,
    LOCATION = 445,
    LOCK_P = 446,
    LOGIN_P = 447,
    MAPPING = 448,
    MATCH = 449,
    MAXVALUE = 450,
    MINUTE_P = 451,
    MINVALUE = 452,
    MODE = 453,
    MONTH_P = 454,
    MOVE = 455,
    NAME_P = 456,
    NAMES = 457,
    NATIONAL = 458,
    NATURAL = 459,
    NCHAR = 460,
    NEW = 461,
    NEXT = 462,
    NO = 463,
    NOCREATEDB = 464,
    NOCREATEROLE = 465,
    NOCREATEUSER = 466,
    NOINHERIT = 467,
    NOLOGIN_P = 468,
    NONE = 469,
    NOSUPERUSER = 470,
    NOT = 471,
    NOTHING = 472,
    NOTIFY = 473,
    NOTNULL = 474,
    NOWAIT = 475,
    NULL_P = 476,
    NULLIF = 477,
    NULLS_P = 478,
    NUMERIC = 479,
    OBJECT_P = 480,
    OF = 481,
    OFF = 482,
    OFFSET = 483,
    OIDS = 484,
    OLD = 485,
    ON = 486,
    ONLY = 487,
    OPERATOR = 488,
    OPTION = 489,
    OR = 490,
    ORDER = 491,
    OUT_P = 492,
    OUTER_P = 493,
    OVERLAPS = 494,
    OVERLAY = 495,
    OWNED = 496,
    OWNER = 497,
    PARSER = 498,
    PARTIAL = 499,
    PASSWORD = 500,
    PLACING = 501,
    PLANS = 502,
    POSITION = 503,
    POSSIBLE = 504,
    PRECISION = 505,
    PRESERVE = 506,
    PREPARE = 507,
    PREPARED = 508,
    PRIMARY = 509,
    PRIOR = 510,
    PRIVILEGES = 511,
    PROBABILITY = 512,
    PROCEDURAL = 513,
    PROCEDURE = 514,
    QUOTE = 515,
    READ = 516,
    REAL = 517,
    REASSIGN = 518,
    RECHECK = 519,
    REFERENCES = 520,
    REINDEX = 521,
    RELATIVE_P = 522,
    RELEASE = 523,
    RENAME = 524,
    REPAIR = 525,
    REPEATABLE = 526,
    REPLACE = 527,
    REPLICA = 528,
    RESET = 529,
    RESTART = 530,
    RESTRICT = 531,
    RETURNING = 532,
    RETURNS = 533,
    REVOKE = 534,
    PICK = 535,
    RIGHT = 536,
    ROLE = 537,
    ROLLBACK = 538,
    ROW = 539,
    ROWS = 540,
    RULE = 541,
    SAVEPOINT = 542,
    SCHEMA = 543,
    SCROLL = 544,
    SEARCH = 545,
    SECOND_P = 546,
    SECURITY = 547,
    SELECT = 548,
    SEQUENCE = 549,
    SERIALIZABLE = 550,
    SESSION = 551,
    SESSION_USER = 552,
    SET = 553,
    SETOF = 554,
    SHARE = 555,
    SHOW = 556,
    SIMILAR = 557,
    SIMPLE = 558,
    SMALLINT = 559,
    SOME = 560,
    STABLE = 561,
    STANDALONE_P = 562,
    START = 563,
    STATEMENT = 564,
    STATISTICS = 565,
    STDIN = 566,
    STDOUT = 567,
    STORAGE = 568,
    STRICT_P = 569,
    STRIP_P = 570,
    SUBSTRING = 571,
    SUPERUSER_P = 572,
    SYMMETRIC = 573,
    SYSID = 574,
    SYSTEM_P = 575,
    TABLE = 576,
    TABLESPACE = 577,
    TEMP = 578,
    TEMPLATE = 579,
    TEMPORARY = 580,
    TEXT_P = 581,
    THEN = 582,
    TIME = 583,
    TIMESTAMP = 584,
    TO = 585,
    TRAILING = 586,
    TRANSACTION = 587,
    TREAT = 588,
    TRIGGER = 589,
    TRIM = 590,
    TRUE_P = 591,
    TRUNCATE = 592,
    TRUSTED = 593,
    TUPLES = 594,
    TYPE_P = 595,
    UNCOMMITTED = 596,
    UNENCRYPTED = 597,
    UNION = 598,
    UNIQUE = 599,
    UNKNOWN = 600,
    UNLISTEN = 601,
    UNTIL = 602,
    UPDATE = 603,
    USER = 604,
    USING = 605,
    VACUUM = 606,
    VALID = 607,
    VALIDATOR = 608,
    VALUE_P = 609,
    VALUES = 610,
    VARCHAR = 611,
    VARYING = 612,
    VERBOSE = 613,
    VERSION_P = 614,
    VIEW = 615,
    VOLATILE = 616,
    WEIGHT = 617,
    WHEN = 618,
    WHERE = 619,
    WHITESPACE_P = 620,
    WITH = 621,
    WITHOUT = 622,
    WORK = 623,
    WRITE = 624,
    XML_P = 625,
    XMLATTRIBUTES = 626,
    XMLCONCAT = 627,
    XMLELEMENT = 628,
    XMLFOREST = 629,
    XMLPARSE = 630,
    XMLPI = 631,
    XMLROOT = 632,
    XMLSERIALIZE = 633,
    YEAR_P = 634,
    YES_P = 635,
    ZONE = 636,
    NULLS_FIRST = 637,
    NULLS_LAST = 638,
    WITH_CASCADED = 639,
    WITH_LOCAL = 640,
    WITH_CHECK = 641,
    IDENT = 642,
    FCONST = 643,
    SCONST = 644,
    BCONST = 645,
    XCONST = 646,
    Op = 647,
    ICONST = 648,
    PARAM = 649,
    POSTFIXOP = 650,
    UMINUS = 651,
    TYPECAST = 652
  };
#endif
/* Tokens.  */
#define ABORT_P 258
#define ABSOLUTE_P 259
#define ACCESS 260
#define ACTION 261
#define ADD_P 262
#define ADMIN 263
#define AFTER 264
#define AGGREGATE 265
#define ALL 266
#define ALSO 267
#define ALTER 268
#define ALWAYS 269
#define ANALYSE 270
#define ANALYZE 271
#define AND 272
#define ANY 273
#define ARRAY 274
#define AS 275
#define ASC 276
#define ASSERTION 277
#define ASSIGNMENT 278
#define ASYMMETRIC 279
#define AT 280
#define AUTHORIZATION 281
#define BACKWARD 282
#define BEFORE 283
#define BEGIN_P 284
#define BETWEEN 285
#define BIGINT 286
#define BINARY 287
#define BIT 288
#define BOOLEAN_P 289
#define BOTH 290
#define BY 291
#define CACHE 292
#define CALLED 293
#define CASCADE 294
#define CASCADED 295
#define CASE 296
#define CAST 297
#define CHAIN 298
#define CHAR_P 299
#define CHARACTER 300
#define CHARACTERISTICS 301
#define CHECK 302
#define CHECKPOINT 303
#define CLASS 304
#define CLOSE 305
#define CLUSTER 306
#define COALESCE 307
#define COLLATE 308
#define COLUMN 309
#define COMMENT 310
#define COMMIT 311
#define COMMITTED 312
#define CONCURRENTLY 313
#define CONFIGURATION 314
#define CONNECTION 315
#define CONSTRAINT 316
#define CONSTRAINTS 317
#define CONTENT_P 318
#define CONVERSION_P 319
#define COPY 320
#define COST 321
#define CREATE 322
#define CREATEDB 323
#define CREATEROLE 324
#define CREATEUSER 325
#define CROSS 326
#define CSV 327
#define CURRENT_P 328
#define CURRENT_DATE 329
#define CURRENT_ROLE 330
#define CURRENT_TIME 331
#define CURRENT_TIMESTAMP 332
#define CURRENT_USER 333
#define CURSOR 334
#define CYCLE 335
#define DATABASE 336
#define DAY_P 337
#define DEALLOCATE 338
#define DEC 339
#define DECIMAL_P 340
#define DECLARE 341
#define DEFAULT 342
#define DEFAULTS 343
#define DEFERRABLE 344
#define DEFERRED 345
#define DEFINER 346
#define DELETE_P 347
#define DELIMITER 348
#define DELIMITERS 349
#define DESC 350
#define DICTIONARY 351
#define DISABLE_P 352
#define DISCARD 353
#define DISTINCT 354
#define DO 355
#define DOCUMENT_P 356
#define DOMAIN_P 357
#define DOUBLE_P 358
#define DROP 359
#define EACH 360
#define ELSE 361
#define ENABLE_P 362
#define ENCODING 363
#define ENCRYPTED 364
#define END_P 365
#define ENUM_P 366
#define ESCAPE 367
#define EXCEPT 368
#define EXCLUDING 369
#define EXCLUSIVE 370
#define EXECUTE 371
#define EXISTS 372
#define EXPLAIN 373
#define EXTERNAL 374
#define EXTRACT 375
#define FALSE_P 376
#define FAMILY 377
#define FETCH 378
#define FIRST_P 379
#define FLOAT_P 380
#define FOR 381
#define FORCE 382
#define FOREIGN 383
#define FORWARD 384
#define FREEZE 385
#define FROM 386
#define FULL 387
#define FUNCTION 388
#define GLOBAL 389
#define GRANT 390
#define GRANTED 391
#define GREATEST 392
#define GROUP_P 393
#define HANDLER 394
#define HAVING 395
#define HEADER_P 396
#define HOLD 397
#define HOUR_P 398
#define IF_P 399
#define ILIKE 400
#define IMMEDIATE 401
#define IMMUTABLE 402
#define IMPLICIT_P 403
#define IN_P 404
#define INCLUDING 405
#define INCREMENT 406
#define INDEPENDENTLY 407
#define INDEX 408
#define INDEXES 409
#define INHERIT 410
#define INHERITS 411
#define INITIALLY 412
#define INNER_P 413
#define INOUT 414
#define INPUT_P 415
#define INSENSITIVE 416
#define INSERT 417
#define INSTEAD 418
#define INT_P 419
#define INTEGER 420
#define INTERSECT 421
#define INTERVAL 422
#define INTO 423
#define INVOKER 424
#define IS 425
#define ISNULL 426
#define ISOLATION 427
#define JOIN 428
#define KEY 429
#define LANCOMPILER 430
#define LANGUAGE 431
#define LARGE_P 432
#define LAST_P 433
#define LEADING 434
#define LEAST 435
#define LEFT 436
#define LEVEL 437
#define LIKE 438
#define LIMIT 439
#define LISTEN 440
#define LOAD 441
#define LOCAL 442
#define LOCALTIME 443
#define LOCALTIMESTAMP 444
#define LOCATION 445
#define LOCK_P 446
#define LOGIN_P 447
#define MAPPING 448
#define MATCH 449
#define MAXVALUE 450
#define MINUTE_P 451
#define MINVALUE 452
#define MODE 453
#define MONTH_P 454
#define MOVE 455
#define NAME_P 456
#define NAMES 457
#define NATIONAL 458
#define NATURAL 459
#define NCHAR 460
#define NEW 461
#define NEXT 462
#define NO 463
#define NOCREATEDB 464
#define NOCREATEROLE 465
#define NOCREATEUSER 466
#define NOINHERIT 467
#define NOLOGIN_P 468
#define NONE 469
#define NOSUPERUSER 470
#define NOT 471
#define NOTHING 472
#define NOTIFY 473
#define NOTNULL 474
#define NOWAIT 475
#define NULL_P 476
#define NULLIF 477
#define NULLS_P 478
#define NUMERIC 479
#define OBJECT_P 480
#define OF 481
#define OFF 482
#define OFFSET 483
#define OIDS 484
#define OLD 485
#define ON 486
#define ONLY 487
#define OPERATOR 488
#define OPTION 489
#define OR 490
#define ORDER 491
#define OUT_P 492
#define OUTER_P 493
#define OVERLAPS 494
#define OVERLAY 495
#define OWNED 496
#define OWNER 497
#define PARSER 498
#define PARTIAL 499
#define PASSWORD 500
#define PLACING 501
#define PLANS 502
#define POSITION 503
#define POSSIBLE 504
#define PRECISION 505
#define PRESERVE 506
#define PREPARE 507
#define PREPARED 508
#define PRIMARY 509
#define PRIOR 510
#define PRIVILEGES 511
#define PROBABILITY 512
#define PROCEDURAL 513
#define PROCEDURE 514
#define QUOTE 515
#define READ 516
#define REAL 517
#define REASSIGN 518
#define RECHECK 519
#define REFERENCES 520
#define REINDEX 521
#define RELATIVE_P 522
#define RELEASE 523
#define RENAME 524
#define REPAIR 525
#define REPEATABLE 526
#define REPLACE 527
#define REPLICA 528
#define RESET 529
#define RESTART 530
#define RESTRICT 531
#define RETURNING 532
#define RETURNS 533
#define REVOKE 534
#define PICK 535
#define RIGHT 536
#define ROLE 537
#define ROLLBACK 538
#define ROW 539
#define ROWS 540
#define RULE 541
#define SAVEPOINT 542
#define SCHEMA 543
#define SCROLL 544
#define SEARCH 545
#define SECOND_P 546
#define SECURITY 547
#define SELECT 548
#define SEQUENCE 549
#define SERIALIZABLE 550
#define SESSION 551
#define SESSION_USER 552
#define SET 553
#define SETOF 554
#define SHARE 555
#define SHOW 556
#define SIMILAR 557
#define SIMPLE 558
#define SMALLINT 559
#define SOME 560
#define STABLE 561
#define STANDALONE_P 562
#define START 563
#define STATEMENT 564
#define STATISTICS 565
#define STDIN 566
#define STDOUT 567
#define STORAGE 568
#define STRICT_P 569
#define STRIP_P 570
#define SUBSTRING 571
#define SUPERUSER_P 572
#define SYMMETRIC 573
#define SYSID 574
#define SYSTEM_P 575
#define TABLE 576
#define TABLESPACE 577
#define TEMP 578
#define TEMPLATE 579
#define TEMPORARY 580
#define TEXT_P 581
#define THEN 582
#define TIME 583
#define TIMESTAMP 584
#define TO 585
#define TRAILING 586
#define TRANSACTION 587
#define TREAT 588
#define TRIGGER 589
#define TRIM 590
#define TRUE_P 591
#define TRUNCATE 592
#define TRUSTED 593
#define TUPLES 594
#define TYPE_P 595
#define UNCOMMITTED 596
#define UNENCRYPTED 597
#define UNION 598
#define UNIQUE 599
#define UNKNOWN 600
#define UNLISTEN 601
#define UNTIL 602
#define UPDATE 603
#define USER 604
#define USING 605
#define VACUUM 606
#define VALID 607
#define VALIDATOR 608
#define VALUE_P 609
#define VALUES 610
#define VARCHAR 611
#define VARYING 612
#define VERBOSE 613
#define VERSION_P 614
#define VIEW 615
#define VOLATILE 616
#define WEIGHT 617
#define WHEN 618
#define WHERE 619
#define WHITESPACE_P 620
#define WITH 621
#define WITHOUT 622
#define WORK 623
#define WRITE 624
#define XML_P 625
#define XMLATTRIBUTES 626
#define XMLCONCAT 627
#define XMLELEMENT 628
#define XMLFOREST 629
#define XMLPARSE 630
#define XMLPI 631
#define XMLROOT 632
#define XMLSERIALIZE 633
#define YEAR_P 634
#define YES_P 635
#define ZONE 636
#define NULLS_FIRST 637
#define NULLS_LAST 638
#define WITH_CASCADED 639
#define WITH_LOCAL 640
#define WITH_CHECK 641
#define IDENT 642
#define FCONST 643
#define SCONST 644
#define BCONST 645
#define XCONST 646
#define Op 647
#define ICONST 648
#define PARAM 649
#define POSTFIXOP 650
#define UMINUS 651
#define TYPECAST 652

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 120 "gram.y" /* yacc.c:1909  */

	int					ival;
	char				chr;
	char				*str;
	const char			*keyword;
	bool				boolean;
	JoinType			jtype;
	DropBehavior		dbehavior;
	OnCommitAction		oncommit;
	List				*list;
	Node				*node;
	Value				*value;
	ObjectType			objtype;

	TypeName			*typnam;
	FunctionParameter   *fun_param;
	FunctionParameterMode fun_param_mode;
	FuncWithArgs		*funwithargs;
	DefElem				*defelt;
	SortBy				*sortby;
	JoinExpr			*jexpr;
	IndexElem			*ielem;
	Alias				*alias;
	RangeVar			*range;
	IntoClause			*into;
	A_Indices			*aind;
	ResTarget			*target;
	PrivTarget			*privtarget;

	InsertStmt			*istmt;
	VariableSetStmt		*vsetstmt;

#line 881 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE base_yylval;
extern YYLTYPE base_yylloc;
int base_yyparse (void);

#endif /* !YY_BASE_YY_Y_TAB_H_INCLUDED  */
