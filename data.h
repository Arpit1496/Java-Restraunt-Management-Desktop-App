 �EXPORT:V10.02.01
UARPIT
RUSERS
2048
0
20
0
 �i�          '                                         Sun Mar 10 0:59:13 2019D:\export database FoodPlanetApp\data.h                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         d    `$	
#G###A�# �i�                                     d    `$	
#G###A�# � � �                                      +00:00   BYTE UNUSED 2 INTERPRETED DISABLE:ALL  
METRICSU
METRICSUpre-schema procedural objects and actions
PROCACTION
�� BEGIN  
� sys.dbms_logrep_imp.instantiate_schema(schema_name=>SYS_CONTEXT('USERENV','CURRENT_SCHEMA'), export_db_name=>'XE', inst_scn=>'3682853');
 COMMIT; END;
  
METRICEU 11
METRICSUforeign function library names for user    
METRICEU 11
METRICSUPUBLIC type synonyms
METRICEU 11
METRICSUprivate type synonyms
METRICEU 11
METRICSUobject type definitions for user    
METRICEU 11
METRICSUpre-schema procedural objects and actions
METRICEU 11
METRICSUdatabase links
METRICEU 11
METRICSUsequence numbers
METRICEU 11
METRICSUcluster definitions
METRICEU 11
METRICSUXDB Schemas by user 
METRICEU 11
TABLE "CATEGORIES"
CREATE TABLE "CATEGORIES" ("CAT_ID" VARCHAR2(10) NOT NULL ENABLE, "CAT_NAME" VARCHAR2(15) NOT NULL ENABLE)  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 STORAGE(INITIAL 65536 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT) TABLESPACE "SYSTEM" LOGGING NOCOMPRESS
INSERT INTO "CATEGORIES" ("CAT_ID", "CAT_NAME") VALUES (:1, :2)
  
 i   i      C100 Starters   C101 South Indian   C102 Chinese   C103 Meals   C104 Rice   C105 Soups   C106 Desserts  ��
CREATE UNIQUE INDEX "PK_CATEGORIES" ON "CATEGORIES" ("CAT_ID" )  PCTFREE 10 INITRANS 2 MAXTRANS 255 STORAGE(INITIAL 65536 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT) TABLESPACE "SYSTEM" LOGGING
ANALSTATS IR "CATEGORIES"
^ BEGIN  DBMS_STATS.SET_INDEX_STATS(NULL,'"PK_CATEGORIES"',NULL,NULL,NULL,7,1,7,1,1,1,0,6); END;
ALTER TABLE "CATEGORIES" ADD  CONSTRAINT "PK_CATEGORIES" PRIMARY KEY ("CAT_ID") USING INDEX PCTFREE 10 INITRANS 2 MAXTRANS 255 STORAGE(INITIAL 65536 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT) TABLESPACE "SYSTEM" LOGGING ENABLE 
ANALSTATS TR "CATEGORIES"
T BEGIN  DBMS_STATS.SET_TABLE_STATS(NULL,'"CATEGORIES"',NULL,NULL,NULL,7,1,13,6); END;
ANALSTATS TR "CATEGORIES"
��� DECLARE  SREC DBMS_STATS.STATREC; BEGIN SREC.MINVAL := '43313030'; SREC.MAXVAL := '43313036'; SREC.EAVS := 0; SREC.CHVALS := NULL; # SREC.NOVALS := DBMS_STATS.NUMARRAY(I 348881545399494000000000000000000000,348881547256404000000000000000000000& ); SREC.BKVALS := DBMS_STATS.NUMARRAY( 0,1� ); SREC.EPC := 2; DBMS_STATS.SET_COLUMN_STATS(NULL,'"CATEGORIES"','"CAT_ID"', NULL ,NULL,NULL,7,.142857142857143,0,srec,5,6); END;  
ANALSTATS TR "CATEGORIES"
��� DECLARE  SREC DBMS_STATS.STATREC; BEGIN SREC.MINVAL := '4368696E657365'; SREC.MAXVAL := '5374617274657273'; SREC.EAVS := 0; SREC.CHVALS := NULL; # SREC.NOVALS := DBMS_STATS.NUMARRAY(I 350001613243675000000000000000000000,433321119326184000000000000000000000& ); SREC.BKVALS := DBMS_STATS.NUMARRAY( 0,1� ); SREC.EPC := 2; DBMS_STATS.SET_COLUMN_STATS(NULL,'"CATEGORIES"','"CAT_NAME"', NULL ,NULL,NULL,7,.142857142857143,0,srec,8,6); END;  
TABLE "EMP"
CREATE TABLE "EMP" ("EMP_ID" NUMBER NOT NULL ENABLE, "EMP_NAME" VARCHAR2(12) NOT NULL ENABLE, "EMP_SAL" NUMBER NOT NULL ENABLE)  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 STORAGE(INITIAL 65536 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT) TABLESPACE "SYSTEM" LOGGING NOCOMPRESS
INSERT INTO "EMP" ("EMP_ID", "EMP_NAME", "EMP_SAL") VALUES (:1, :2, :3)
     i        � Arpit �=   � nancy �=   �	 Suddhatem �Q   � Prakhar �[   � Deepali �3   � Ankit �=   �
 aastha �   � Diksha �	   � Abhay �   � Abhay �3  ��
CREATE UNIQUE INDEX "PK_EMP" ON "EMP" ("EMP_ID" )  PCTFREE 10 INITRANS 2 MAXTRANS 255 STORAGE(INITIAL 65536 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT) TABLESPACE "SYSTEM" LOGGING
ANALSTATS IR "EMP"
Y BEGIN  DBMS_STATS.SET_INDEX_STATS(NULL,'"PK_EMP"',NULL,NULL,NULL,10,1,10,1,1,1,0,6); END;
ALTER TABLE "EMP" ADD  CONSTRAINT "PK_EMP" PRIMARY KEY ("EMP_ID") USING INDEX PCTFREE 10 INITRANS 2 MAXTRANS 255 STORAGE(INITIAL 65536 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT) TABLESPACE "SYSTEM" LOGGING ENABLE 
ANALSTATS TR "EMP"
N BEGIN  DBMS_STATS.SET_TABLE_STATS(NULL,'"EMP"',NULL,NULL,NULL,10,1,14,6); END;
ANALSTATS TR "EMP"
�� DECLARE  SREC DBMS_STATS.STATREC; BEGIN SREC.MINVAL := 'C20202'; SREC.MAXVAL := 'C20215'; SREC.EAVS := 0; SREC.CHVALS := NULL; # SREC.NOVALS := DBMS_STATS.NUMARRAY( 101,120& ); SREC.BKVALS := DBMS_STATS.NUMARRAY( 0,1n ); SREC.EPC := 2; DBMS_STATS.SET_COLUMN_STATS(NULL,'"EMP"','"EMP_ID"', NULL ,NULL,NULL,10,.1,0,srec,4,6); END;  
ANALSTATS TR "EMP"
��� DECLARE  SREC DBMS_STATS.STATREC; BEGIN SREC.MINVAL := '4162686179'; SREC.MAXVAL := '6E616E6379'; SREC.EAVS := 0; SREC.CHVALS := NULL; # SREC.NOVALS := DBMS_STATS.NUMARRAY(L339495241841149000000000000000000000,339738870910716000000000000000000000,339820396689943000000000000000000000,355132746574850000000000000000000000,355214352519103000000000000000000000,417703661750451000000000000000000000,433341635072959000000000000000000000,505629336274569000000000000000000000,573128794053558000000000000000000000& ); SREC.BKVALS := DBMS_STATS.NUMARRAY( 2,3,4,5,6,7,8,9,10p ); SREC.EPC := 9; DBMS_STATS.SET_COLUMN_STATS(NULL,'"EMP"','"EMP_NAME"', NULL ,NULL,NULL,9,.05,0,srec,7,6); END;  
ANALSTATS TR "EMP"
��} DECLARE  SREC DBMS_STATS.STATREC; BEGIN SREC.MINVAL := 'C3025B'; SREC.MAXVAL := 'C309'; SREC.EAVS := 0; SREC.CHVALS := NULL; # SREC.NOVALS := DBMS_STATS.NUMARRAY(5 19000,26000,28000,33000,36000,45000,56000,60000,80000& ); SREC.BKVALS := DBMS_STATS.NUMARRAY( 1,2,3,4,5,7,8,9,10o ); SREC.EPC := 9; DBMS_STATS.SET_COLUMN_STATS(NULL,'"EMP"','"EMP_SAL"', NULL ,NULL,NULL,9,.05,0,srec,4,6); END;  
TABLE "EMPLOYEES"
CREATE TABLE "EMPLOYEES" ("EMPID" VARCHAR2(10) NOT NULL ENABLE, "ENAME" VARCHAR2(30) NOT NULL ENABLE, "JOB" VARCHAR2(15) NOT NULL ENABLE, "SAL" NUMBER(4, 0) NOT NULL ENABLE)  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 STORAGE(INITIAL 65536 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT) TABLESPACE "SYSTEM" LOGGING NOCOMPRESS
INSERT INTO "EMPLOYEES" ("EMPID", "ENAME", "JOB", "SAL") VALUES (:1, :2, :3, :4)
  
 i   i   i        E101 Vikram Cashier �   E102 Suresh Manager �.   E103 Ankit Cashier �   E107 Dikky Cashier �   E104 Deepali Manager �.   E105 Naina Chef �   E112 Diksha Shrivastava Cashier �[   E108 Sameer Chef �   E109 Kasak Waiter �   E110 Arpit Cashier �3  ��
ALTER TABLE "EMPLOYEES" ADD  PRIMARY KEY ("EMPID") USING INDEX PCTFREE 10 INITRANS 2 MAXTRANS 255 STORAGE(INITIAL 65536 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT) TABLESPACE "SYSTEM" LOGGING ENABLE
ANALSTATS TR "EMPLOYEES"
T BEGIN  DBMS_STATS.SET_TABLE_STATS(NULL,'"EMPLOYEES"',NULL,NULL,NULL,10,1,23,6); END;
ANALSTATS TR "EMPLOYEES"
��� DECLARE  SREC DBMS_STATS.STATREC; BEGIN SREC.MINVAL := '45313031'; SREC.MAXVAL := '45313132'; SREC.EAVS := 0; SREC.CHVALS := NULL; # SREC.NOVALS := DBMS_STATS.NUMARRAY(I 359266139426048000000000000000000000,359266218963696000000000000000000000& ); SREC.BKVALS := DBMS_STATS.NUMARRAY( 0,1s ); SREC.EPC := 2; DBMS_STATS.SET_COLUMN_STATS(NULL,'"EMPLOYEES"','"EMPID"', NULL ,NULL,NULL,10,.1,0,srec,5,6); END;  
ANALSTATS TR "EMPLOYEES"
��� DECLARE  SREC DBMS_STATS.STATREC; BEGIN SREC.MINVAL := '416E6B6974'; SREC.MAXVAL := '56696B72616D'; SREC.EAVS := 0; SREC.CHVALS := NULL; # SREC.NOVALS := DBMS_STATS.NUMARRAY(I 339738870910716000000000000000000000,448675695654839000000000000000000000& ); SREC.BKVALS := DBMS_STATS.NUMARRAY( 0,1s ); SREC.EPC := 2; DBMS_STATS.SET_COLUMN_STATS(NULL,'"EMPLOYEES"','"ENAME"', NULL ,NULL,NULL,10,.1,0,srec,8,6); END;  
ANALSTATS TR "EMPLOYEES"
��� DECLARE  SREC DBMS_STATS.STATREC; BEGIN SREC.MINVAL := '43617368696572'; SREC.MAXVAL := '576169746572'; SREC.EAVS := 0; SREC.CHVALS := NULL; # SREC.NOVALS := DBMS_STATS.NUMARRAY(� 349860426805934000000000000000000000,350001293732498000000000000000000000,401782997081657000000000000000000000,453705575404049000000000000000000000& ); SREC.BKVALS := DBMS_STATS.NUMARRAY( 5,7,9,10q ); SREC.EPC := 4; DBMS_STATS.SET_COLUMN_STATS(NULL,'"EMPLOYEES"','"JOB"', NULL ,NULL,NULL,4,.05,0,srec,8,6); END;  
ANALSTATS TR "EMPLOYEES"
��{ DECLARE  SREC DBMS_STATS.STATREC; BEGIN SREC.MINVAL := 'C20D'; SREC.MAXVAL := 'C25B'; SREC.EAVS := 0; SREC.CHVALS := NULL; # SREC.NOVALS := DBMS_STATS.NUMARRAY(	 1200,9000& ); SREC.BKVALS := DBMS_STATS.NUMARRAY( 0,1r ); SREC.EPC := 2; DBMS_STATS.SET_COLUMN_STATS(NULL,'"EMPLOYEES"','"SAL"', NULL ,NULL,NULL,8,.125,0,srec,4,6); END;  
TABLE "ORDERS"
CREATE TABLE "ORDERS" ("ORDER_ID" VARCHAR2(10) NOT NULL ENABLE, "ORDER_DATE" DATE NOT NULL ENABLE, "GST" NUMBER(4, 0) NOT NULL ENABLE, "GST_AMOUNT" NUMBER(10, 0) NOT NULL ENABLE, "DISCOUNT" NUMBER(10, 0) NOT NULL ENABLE, "GRAND_TOTAL" NUMBER(15, 0) NOT NULL ENABLE, "USERID" VARCHAR2(30) NOT NULL ENABLE)  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 STORAGE(INITIAL 65536 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT) TABLESPACE "SYSTEM" LOGGING NOCOMPRESS
INSERT INTO "ORDERS" ("ORDER_ID", "ORDER_DATE", "GST", "GST_AMOUNT", "DISCOUNT", "GRAND_TOTAL", "USERID") VALUES (:1, :2, :3, :4, :5, :6, :7)
  
 i             i      Ord103 xv � � � � aks1496@gmail.com   Ord101 xv � � �G �_ aks1496@gmail.com   Ord102 xv
 � � �= �5 mikasa26   Ord104 xv
 � � �( �! aks1496@gmail.com  ��
CREATE UNIQUE INDEX "PK_ORDERS" ON "ORDERS" ("ORDER_ID" )  PCTFREE 10 INITRANS 2 MAXTRANS 255 STORAGE(INITIAL 65536 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT) TABLESPACE "SYSTEM" LOGGING
ANALSTATS IR "ORDERS"
Z BEGIN  DBMS_STATS.SET_INDEX_STATS(NULL,'"PK_ORDERS"',NULL,NULL,NULL,4,1,4,1,1,1,0,6); END;
ALTER TABLE "ORDERS" ADD  CONSTRAINT "PK_ORDERS" PRIMARY KEY ("ORDER_ID") USING INDEX PCTFREE 10 INITRANS 2 MAXTRANS 255 STORAGE(INITIAL 65536 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT) TABLESPACE "SYSTEM" LOGGING ENABLE 
ANALSTATS TR "ORDERS"
P BEGIN  DBMS_STATS.SET_TABLE_STATS(NULL,'"ORDERS"',NULL,NULL,NULL,4,1,44,6); END;
ANALSTATS TR "ORDERS"
��� DECLARE  SREC DBMS_STATS.STATREC; BEGIN SREC.MINVAL := '4F7264313031'; SREC.MAXVAL := '4F7264313034'; SREC.EAVS := 0; SREC.CHVALS := NULL; # SREC.NOVALS := DBMS_STATS.NUMARRAY(I 412511584558344000000000000000000000,412511584558359000000000000000000000& ); SREC.BKVALS := DBMS_STATS.NUMARRAY( 0,1s ); SREC.EPC := 2; DBMS_STATS.SET_COLUMN_STATS(NULL,'"ORDERS"','"ORDER_ID"', NULL ,NULL,NULL,4,.25,0,srec,7,6); END;  
ANALSTATS TR "ORDERS"
��� DECLARE  SREC DBMS_STATS.STATREC; BEGIN SREC.MINVAL := '78760801010101'; SREC.MAXVAL := '78760A1F010101'; SREC.EAVS := 0; SREC.CHVALS := NULL; # SREC.NOVALS := DBMS_STATS.NUMARRAY( 2458332,2458423& ); SREC.BKVALS := DBMS_STATS.NUMARRAY( 0,1u ); SREC.EPC := 2; DBMS_STATS.SET_COLUMN_STATS(NULL,'"ORDERS"','"ORDER_DATE"', NULL ,NULL,NULL,4,.25,0,srec,8,6); END;  
ANALSTATS TR "ORDERS"
��{ DECLARE  SREC DBMS_STATS.STATREC; BEGIN SREC.MINVAL := 'C106'; SREC.MAXVAL := 'C106'; SREC.EAVS := 0; SREC.CHVALS := NULL; # SREC.NOVALS := DBMS_STATS.NUMARRAY( 5,5& ); SREC.BKVALS := DBMS_STATS.NUMARRAY( 0,1l ); SREC.EPC := 2; DBMS_STATS.SET_COLUMN_STATS(NULL,'"ORDERS"','"GST"', NULL ,NULL,NULL,1,1,0,srec,3,6); END;  
ANALSTATS TR "ORDERS"
��{ DECLARE  SREC DBMS_STATS.STATREC; BEGIN SREC.MINVAL := 'C10C'; SREC.MAXVAL := 'C11A'; SREC.EAVS := 0; SREC.CHVALS := NULL; # SREC.NOVALS := DBMS_STATS.NUMARRAY( 11,25& ); SREC.BKVALS := DBMS_STATS.NUMARRAY( 0,1u ); SREC.EPC := 2; DBMS_STATS.SET_COLUMN_STATS(NULL,'"ORDERS"','"GST_AMOUNT"', NULL ,NULL,NULL,4,.25,0,srec,3,6); END;  
ANALSTATS TR "ORDERS"
��} DECLARE  SREC DBMS_STATS.STATREC; BEGIN SREC.MINVAL := 'C128'; SREC.MAXVAL := 'C2043D'; SREC.EAVS := 0; SREC.CHVALS := NULL; # SREC.NOVALS := DBMS_STATS.NUMARRAY( 39,360& ); SREC.BKVALS := DBMS_STATS.NUMARRAY( 0,1s ); SREC.EPC := 2; DBMS_STATS.SET_COLUMN_STATS(NULL,'"ORDERS"','"DISCOUNT"', NULL ,NULL,NULL,4,.25,0,srec,4,6); END;  
ANALSTATS TR "ORDERS"
�� DECLARE  SREC DBMS_STATS.STATREC; BEGIN SREC.MINVAL := 'C20321'; SREC.MAXVAL := 'C2061E'; SREC.EAVS := 0; SREC.CHVALS := NULL; # SREC.NOVALS := DBMS_STATS.NUMARRAY( 232,529& ); SREC.BKVALS := DBMS_STATS.NUMARRAY( 0,1v ); SREC.EPC := 2; DBMS_STATS.SET_COLUMN_STATS(NULL,'"ORDERS"','"GRAND_TOTAL"', NULL ,NULL,NULL,4,.25,0,srec,4,6); END;  
ANALSTATS TR "ORDERS"
��� DECLARE  SREC DBMS_STATS.STATREC; BEGIN SREC.MINVAL := '616B733134393640676D61696C2E636F6D'; SREC.MAXVAL := '6D696B6173613236'; SREC.EAVS := 0; SREC.CHVALS := NULL; # SREC.NOVALS := DBMS_STATS.NUMARRAY(I 505832139572058000000000000000000000,568098518161600000000000000000000000& ); SREC.BKVALS := DBMS_STATS.NUMARRAY( 0,1q ); SREC.EPC := 2; DBMS_STATS.SET_COLUMN_STATS(NULL,'"ORDERS"','"USERID"', NULL ,NULL,NULL,2,.5,0,srec,16,6); END;  
TABLE "ORDERS_DETAILS"
CREATE TABLE "ORDERS_DETAILS" ("ORDERID" VARCHAR2(10) NOT NULL ENABLE, "PRODUCTID" VARCHAR2(10) NOT NULL ENABLE, "QUANTITY" NUMBER(4, 0) NOT NULL ENABLE, "COST" NUMBER(5, 0) NOT NULL ENABLE)  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 STORAGE(INITIAL 65536 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT) TABLESPACE "SYSTEM" LOGGING NOCOMPRESS
INSERT INTO "ORDERS_DETAILS" ("ORDERID", "PRODUCTID", "QUANTITY", "COST") VALUES (:1, :2, :3, :4)
  
 i  
 i          Ord101 P100 � �   Ord102 P104 � �Q   Ord102 P107 � �Q   Ord102 P124 � �)   Ord101 P111 � �Q   Ord101 P122 � �)   Ord103 P125 � �G   Ord103 P115 � �=   Ord104 P105 � �   Ord104 P124 � �)   Ord104 P126 � �  ��
ANALSTATS TR "ORDERS_DETAILS"
Y BEGIN  DBMS_STATS.SET_TABLE_STATS(NULL,'"ORDERS_DETAILS"',NULL,NULL,NULL,11,1,18,6); END;
ANALSTATS TR "ORDERS_DETAILS"
��� DECLARE  SREC DBMS_STATS.STATREC; BEGIN SREC.MINVAL := '4F7264313031'; SREC.MAXVAL := '4F7264313034'; SREC.EAVS := 0; SREC.CHVALS := NULL; # SREC.NOVALS := DBMS_STATS.NUMARRAY(� 412511584558344000000000000000000000,412511584558349000000000000000000000,412511584558354000000000000000000000,412511584558359000000000000000000000& ); SREC.BKVALS := DBMS_STATS.NUMARRAY( 3,6,8,11� ); SREC.EPC := 4; DBMS_STATS.SET_COLUMN_STATS(NULL,'"ORDERS_DETAILS"','"ORDERID"', NULL ,NULL,NULL,4,.0454545454545455,0,srec,7,6); END;  
ANALSTATS TR "ORDERS_DETAILS"
��� DECLARE  SREC DBMS_STATS.STATREC; BEGIN SREC.MINVAL := '50313030'; SREC.MAXVAL := '50313236'; SREC.EAVS := 0; SREC.CHVALS := NULL; # SREC.NOVALS := DBMS_STATS.NUMARRAY(I 416381404560446000000000000000000000,416381564873681000000000000000000000& ); SREC.BKVALS := DBMS_STATS.NUMARRAY( 0,1| ); SREC.EPC := 2; DBMS_STATS.SET_COLUMN_STATS(NULL,'"ORDERS_DETAILS"','"PRODUCTID"', NULL ,NULL,NULL,10,.1,0,srec,5,6); END;  
ANALSTATS TR "ORDERS_DETAILS"
��{ DECLARE  SREC DBMS_STATS.STATREC; BEGIN SREC.MINVAL := 'C102'; SREC.MAXVAL := 'C105'; SREC.EAVS := 0; SREC.CHVALS := NULL; # SREC.NOVALS := DBMS_STATS.NUMARRAY( 1,4& ); SREC.BKVALS := DBMS_STATS.NUMARRAY( 0,1� ); SREC.EPC := 2; DBMS_STATS.SET_COLUMN_STATS(NULL,'"ORDERS_DETAILS"','"QUANTITY"', NULL ,NULL,NULL,3,.333333333333333,0,srec,3,6); END;  
ANALSTATS TR "ORDERS_DETAILS"
��} DECLARE  SREC DBMS_STATS.STATREC; BEGIN SREC.MINVAL := 'C102'; SREC.MAXVAL := 'C2063D'; SREC.EAVS := 0; SREC.CHVALS := NULL; # SREC.NOVALS := DBMS_STATS.NUMARRAY( 1,560& ); SREC.BKVALS := DBMS_STATS.NUMARRAY( 0,1� ); SREC.EPC := 2; DBMS_STATS.SET_COLUMN_STATS(NULL,'"ORDERS_DETAILS"','"COST"', NULL ,NULL,NULL,9,.111111111111111,0,srec,4,6); END;  
TABLE "PRODUCTS"
CREATE TABLE "PRODUCTS" ("PRODUCT_ID" VARCHAR2(10) NOT NULL ENABLE, "CAT_ID" VARCHAR2(10) NOT NULL ENABLE, "PROD_NAME" VARCHAR2(20) NOT NULL ENABLE, "PROD_PRICE" NUMBER(5, 0) NOT NULL ENABLE, "ACTIVE" CHAR(1) NOT NULL ENABLE)  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 STORAGE(INITIAL 65536 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT) TABLESPACE "SYSTEM" LOGGING NOCOMPRESS
INSERT INTO "PRODUCTS" ("PRODUCT_ID", "CAT_ID", "PROD_NAME", "PROD_PRICE", "ACTIVE") VALUES (:1, :2, :3, :4, :5)
  
 i  
 i   i   `  i      P100 C101 Masala Dosa �B y   P101 C102 Garlic Noodles �3 y   P102 C100 Cheese Cutlet �. y   P103 C105 Mix Veg Soup �B y   P104 C104 Kashmiri Pulao �Q y   P105 C103 North Indian Thali �) y   P106 C103 Paneer Veg Roll �` y   P107 C102 Veg Hakka Noodles �Q Y   P108 C101 Idli Sambhar � y   P109 C106	 Ras Malai �$ Y   P110 C105 Tomatto Soup �G y   P111 C105 Mushroom Soup �Q y   P112 C106 Gulab Jamun �3 y   P113 C104 Ginger Veg Rice � y   P114 C103	 Veg Thali � y   P115 C103 Chicken Thali �Q y   P116 C106 Rasgulla �+ y   P117 C100 Cheese Roll �) Y   P118 C102 Veg Manchow � y   P119 C101 Uttapam � y   P120 C105
 Hot N Sour �$ y   P121 C105 Mix Veg Soup �) y   P122 C102	 Veg Kothe �G y   P123 C100
 Dahi Kebab �Q y   P124 C103 Chole Bhature �= y   P125 C105	 Meso Soup �$ y   P126 C106 ChocolateCakes � y   P127 C104 Ghar Ka Rice �3 N  ��
CREATE UNIQUE INDEX "PK_PRODUCTS" ON "PRODUCTS" ("PRODUCT_ID" )  PCTFREE 10 INITRANS 2 MAXTRANS 255 STORAGE(INITIAL 65536 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT) TABLESPACE "SYSTEM" LOGGING
ANALSTATS IR "PRODUCTS"
^ BEGIN  DBMS_STATS.SET_INDEX_STATS(NULL,'"PK_PRODUCTS"',NULL,NULL,NULL,28,1,28,1,1,1,0,6); END;
ALTER TABLE "PRODUCTS" ADD  CONSTRAINT "PK_PRODUCTS" PRIMARY KEY ("PRODUCT_ID") USING INDEX PCTFREE 10 INITRANS 2 MAXTRANS 255 STORAGE(INITIAL 65536 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT) TABLESPACE "SYSTEM" LOGGING ENABLE 
ANALSTATS TR "PRODUCTS"
S BEGIN  DBMS_STATS.SET_TABLE_STATS(NULL,'"PRODUCTS"',NULL,NULL,NULL,28,1,28,6); END;
ANALSTATS TR "PRODUCTS"
��� DECLARE  SREC DBMS_STATS.STATREC; BEGIN SREC.MINVAL := '50313030'; SREC.MAXVAL := '50313237'; SREC.EAVS := 0; SREC.CHVALS := NULL; # SREC.NOVALS := DBMS_STATS.NUMARRAY(416381404560446000000000000000000000,416381404869931000000000000000000000,416381405179416000000000000000000000,416381405488901000000000000000000000,416381405798386000000000000000000000,416381406107871000000000000000000000,416381406417356000000000000000000000,416381406726841000000000000000000000,416381407036326000000000000000000000,416381407345811000000000000000000000,416381483788609000000000000000000000,416381484098094000000000000000000000,416381484407579000000000000000000000,416381484717064000000000000000000000,416381485026549000000000000000000000,416381485336034000000000000000000000,416381485645519000000000000000000000,416381485955004000000000000000000000,416381486264489000000000000000000000,416381486573974000000000000000000000,416381563016771000000000000000000000,416381563326256000000000000000000000,416381563635741000000000000000000000,416381563945226000000000000000000000,416381564254711000000000000000000000,416381564564196000000000000000000000,416381564873681000000000000000000000,416381565183166000000000000000000000& ); SREC.BKVALS := DBMS_STATS.NUMARRAY(J 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28� ); SREC.EPC := 28; DBMS_STATS.SET_COLUMN_STATS(NULL,'"PRODUCTS"','"PRODUCT_ID"', NULL ,NULL,NULL,28,.0178571428571429,0,srec,5,6); END;  
ANALSTATS TR "PRODUCTS"
��� DECLARE  SREC DBMS_STATS.STATREC; BEGIN SREC.MINVAL := '43313030'; SREC.MAXVAL := '43313036'; SREC.EAVS := 0; SREC.CHVALS := NULL; # SREC.NOVALS := DBMS_STATS.NUMARRAY(348881545399494000000000000000000000,348881545708979000000000000000000000,348881546018464000000000000000000000,348881546327949000000000000000000000,348881546637434000000000000000000000,348881546946919000000000000000000000,348881547256404000000000000000000000& ); SREC.BKVALS := DBMS_STATS.NUMARRAY( 3,6,10,15,18,24,28� ); SREC.EPC := 7; DBMS_STATS.SET_COLUMN_STATS(NULL,'"PRODUCTS"','"CAT_ID"', NULL ,NULL,NULL,7,.0178571428571429,0,srec,5,6); END;  
ANALSTATS TR "PRODUCTS"
��� DECLARE  SREC DBMS_STATS.STATREC; BEGIN SREC.MINVAL := '436865657365204375746C6574'; SREC.MAXVAL := '566567205468616C69'; SREC.EAVS := 4; SREC.CHVALS := DBMS_STATS.CHARARRAY(�'Cheese Cutlet','Cheese Roll','Chicken Thali','ChocolateCakes','Chole Bhature','Dahi Kebab','Garlic Noodles','Ghar Ka Rice','Ginger Veg Rice','Gulab Jamun','Hot N Sour','Idli Sambhar','Kashmiri Pulao','Masala Dosa','Meso Soup','Mix Veg Soup','Mushroom Soup','North Indian Thali','Paneer Veg Roll','Ras Malai','Rasgulla','Tomatto Soup','Uttapam','Veg Hakka Noodles','Veg Kothe','Veg Manchow','Veg Thali'); # SREC.NOVALS := DBMS_STATS.NUMARRAY(�350001293562517000000000000000000000,350001293562517000000000000000000000,350001609846527000000000000000000000,350002085220371000000000000000000000,350002087993287000000000000000000000,355051852375792000000000000000000000,370629536249840000000000000000000000,370770168006849000000000000000000000,370791477061829000000000000000000000,371034705659825000000000000000000000,376105921745334000000000000000000000,381074500809965000000000000000000000,391398801679067000000000000000000000,401783393228494000000000000000000000,401864527107755000000000000000000000,401946028503034000000000000000000000,402189043594283000000000000000000000,407259570468390000000000000000000000,417359888892843000000000000000000000,427744857367167000000000000000000000,427744879389012000000000000000000000,438412949613476000000000000000000000,443707213112241000000000000000000000,448594223695726000000000000000000000,448594223699419000000000000000000000,448594223701771000000000000000000000,448594223710266000000000000000000000& ); SREC.BKVALS := DBMS_STATS.NUMARRAY(G 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,17,18,19,20,21,22,23,24,25,26,27,28� ); SREC.EPC := 27; DBMS_STATS.SET_COLUMN_STATS(NULL,'"PRODUCTS"','"PROD_NAME"', NULL ,NULL,NULL,27,.0178571428571429,0,srec,13,6); END;  
ANALSTATS TR "PRODUCTS"
��} DECLARE  SREC DBMS_STATS.STATREC; BEGIN SREC.MINVAL := 'C115'; SREC.MAXVAL := 'C20351'; SREC.EAVS := 0; SREC.CHVALS := NULL; # SREC.NOVALS := DBMS_STATS.NUMARRAY(C 20,30,35,40,42,45,50,60,65,70,80,95,100,105,120,140,150,180,200,280& ); SREC.BKVALS := DBMS_STATS.NUMARRAY(5 1,2,5,6,7,8,10,11,13,15,17,18,19,20,21,23,24,26,27,28� ); SREC.EPC := 20; DBMS_STATS.SET_COLUMN_STATS(NULL,'"PRODUCTS"','"PROD_PRICE"', NULL ,NULL,NULL,20,.0178571428571429,0,srec,4,6); END;  
ANALSTATS TR "PRODUCTS"
��w DECLARE  SREC DBMS_STATS.STATREC; BEGIN SREC.MINVAL := '4E'; SREC.MAXVAL := '79'; SREC.EAVS := 0; SREC.CHVALS := NULL; # SREC.NOVALS := DBMS_STATS.NUMARRAY(I 405650737316592000000000000000000000,628919502233589000000000000000000000& ); SREC.BKVALS := DBMS_STATS.NUMARRAY( 0,2� ); SREC.EPC := 2; DBMS_STATS.SET_COLUMN_STATS(NULL,'"PRODUCTS"','"ACTIVE"', NULL ,NULL,NULL,3,.0892857142857143,0,srec,2,6); END;  
TABLE "USERS"
CREATE TABLE "USERS" ("USERID" VARCHAR2(30) NOT NULL ENABLE, "USERNAME" VARCHAR2(10) NOT NULL ENABLE, "PASSWORD" VARCHAR2(10) NOT NULL ENABLE, "EMPID" VARCHAR2(15) NOT NULL ENABLE, "USERTYPE" VARCHAR2(20) NOT NULL ENABLE)  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 STORAGE(INITIAL 65536 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT) TABLESPACE "SYSTEM" LOGGING NOCOMPRESS
INSERT INTO "USERS" ("USERID", "USERNAME", "PASSWORD", "EMPID", "USERTYPE") VALUES (:1, :2, :3, :4, :5)
   i  
 i  
 i   i   i      vk66@gmail.com Vikram demo E101 Cashier   deep@gmail.com Deepak super E102 Admin   aks1496@gmail.com Arpit arpit E100 Admin  	 Ankit@123 Ankit 123456 E103 Cashier   aks1496@gmail.com Arpit arpit E110 Cashier   mikasa26 Dikky levi E107 Cashier  ��
ANALSTATS TR "USERS"
O BEGIN  DBMS_STATS.SET_TABLE_STATS(NULL,'"USERS"',NULL,NULL,NULL,6,1,38,6); END;
ANALSTATS TR "USERS"
��� DECLARE  SREC DBMS_STATS.STATREC; BEGIN SREC.MINVAL := '416E6B697440313233'; SREC.MAXVAL := '766B363640676D61696C2E636F6D'; SREC.EAVS := 0; SREC.CHVALS := NULL; # SREC.NOVALS := DBMS_STATS.NUMARRAY(� 339738870911019000000000000000000000,505832139572058000000000000000000000,521286246008046000000000000000000000,568098518161600000000000000000000000,614865542245526000000000000000000000& ); SREC.BKVALS := DBMS_STATS.NUMARRAY(	 1,3,4,5,6 ); SREC.EPC := 5; DBMS_STATS.SET_COLUMN_STATS(NULL,'"USERS"','"USERID"', NULL ,NULL,NULL,5,.0833333333333333,0,srec,15,6); END;  
ANALSTATS TR "USERS"
��� DECLARE  SREC DBMS_STATS.STATREC; BEGIN SREC.MINVAL := '416E6B6974'; SREC.MAXVAL := '56696B72616D'; SREC.EAVS := 0; SREC.CHVALS := NULL; # SREC.NOVALS := DBMS_STATS.NUMARRAY(� 339738870910716000000000000000000000,339820396689943000000000000000000000,355132746574843000000000000000000000,355214350063317000000000000000000000,448675695654839000000000000000000000& ); SREC.BKVALS := DBMS_STATS.NUMARRAY(	 1,3,4,5,6� ); SREC.EPC := 5; DBMS_STATS.SET_COLUMN_STATS(NULL,'"USERS"','"USERNAME"', NULL ,NULL,NULL,5,.0833333333333333,0,srec,7,6); END;  
ANALSTATS TR "USERS"
��� DECLARE  SREC DBMS_STATS.STATREC; BEGIN SREC.MINVAL := '313233343536'; SREC.MAXVAL := '7375706572'; SREC.EAVS := 0; SREC.CHVALS := NULL; # SREC.NOVALS := DBMS_STATS.NUMARRAY(� 255440723342226000000000000000000000,505973896163058000000000000000000000,521286879446002000000000000000000000,562825965510833000000000000000000000,599496085605138000000000000000000000& ); SREC.BKVALS := DBMS_STATS.NUMARRAY(	 1,3,4,5,6� ); SREC.EPC := 5; DBMS_STATS.SET_COLUMN_STATS(NULL,'"USERS"','"PASSWORD"', NULL ,NULL,NULL,5,.0833333333333333,0,srec,6,6); END;  
ANALSTATS TR "USERS"
��� DECLARE  SREC DBMS_STATS.STATREC; BEGIN SREC.MINVAL := '45313030'; SREC.MAXVAL := '45313130'; SREC.EAVS := 0; SREC.CHVALS := NULL; # SREC.NOVALS := DBMS_STATS.NUMARRAY(I 359266139116563000000000000000000000,359266218344726000000000000000000000& ); SREC.BKVALS := DBMS_STATS.NUMARRAY( 0,1| ); SREC.EPC := 2; DBMS_STATS.SET_COLUMN_STATS(NULL,'"USERS"','"EMPID"', NULL ,NULL,NULL,6,.166666666666667,0,srec,5,6); END;  
ANALSTATS TR "USERS"
��� DECLARE  SREC DBMS_STATS.STATREC; BEGIN SREC.MINVAL := '41646D696E'; SREC.MAXVAL := '43617368696572'; SREC.EAVS := 0; SREC.CHVALS := NULL; # SREC.NOVALS := DBMS_STATS.NUMARRAY(I 339536205263751000000000000000000000,349860426805934000000000000000000000& ); SREC.BKVALS := DBMS_STATS.NUMARRAY( 2,6� ); SREC.EPC := 2; DBMS_STATS.SET_COLUMN_STATS(NULL,'"USERS"','"USERTYPE"', NULL ,NULL,NULL,2,.0833333333333333,0,srec,8,6); END;  
ENDTABLE
METRICSUsynonyms
METRICEU 6
METRICSUviews
METRICEU 6
METRICSUstored procedures
METRICEU 6
METRICSUoperators
METRICEU 6
METRICSUAnalyze cluster statements 
METRICEU 6
METRICSUreferential integrity constraints
METRICEU 6
METRICSUtriggers
METRICEU 6
METRICSUindextypes
METRICEU 6
METRICSUbitmap, functional and extensible indexes
METRICEU 6
METRICSUposttables actions
METRICEU 6
METRICSUmaterialized views
METRICEU 6
METRICSUsnapshot logs
METRICEU 6
METRICSUjob queues
METRICEU 6
METRICSUrefresh groups and children
METRICEU 6
METRICSUdimensions
METRICEU 6
METRICSUPost-inst procedural actions 
METRICEU 6
METRICSUpost-schema procedural objects and actions
METRICEU 17
METRICSUstatistics
TABLE "CATEGORIES"
ANALCOMPUTE TR "CATEGORIES" ANALYZE  TABLE "CATEGORIES"  ESTIMATE STATISTICS 
TABLE "EMP"
ANALCOMPUTE TR "EMP" ANALYZE  TABLE "EMP"  ESTIMATE STATISTICS 
TABLE "EMPLOYEES"
ANALCOMPUTE TR "EMPLOYEES" ANALYZE  TABLE "EMPLOYEES"  ESTIMATE STATISTICS 
TABLE "ORDERS"
ANALCOMPUTE TR "ORDERS" ANALYZE  TABLE "ORDERS"  ESTIMATE STATISTICS 
TABLE "ORDERS_DETAILS"
ANALCOMPUTE TR "ORDERS_DETAILS" ANALYZE  TABLE "ORDERS_DETAILS"  ESTIMATE STATISTICS 
TABLE "PRODUCTS"
ANALCOMPUTE TR "PRODUCTS" ANALYZE  TABLE "PRODUCTS"  ESTIMATE STATISTICS 
TABLE "USERS"
ANALCOMPUTE TR "USERS" ANALYZE  TABLE "USERS"  ESTIMATE STATISTICS 
ENDTABLE
METRICEU 24
METRICEUG0
EXIT
EXIT
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           