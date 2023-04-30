# Custom-Query-Engine


This repo contains code for a query engine that accepts statements in a custom query language MQL, to perform CRUD ops on data stored in normal text files.

File 1: EMP.txt: to store employee data. Each employee record will have following fields. eid int, ename string, egae int, eaddress string, salary int, and deptno int.

Query Language MQL specifications:

1) GET <fields list separated by comma> FROM <file> WHERE <cond1> AND/OR <cond2> AND/OR .....; // multiple conditions like in SQL
2) INSERT RECORD (<v1, v2,..>) INTO <filename>;
3) UPDATE RECORD IN <filename> SET <fileld> TO <newvalue> WHERE <cond1> AND/OR <cond2> AND/OR...; // multiple conditions like n SQL
4) DELETE RECORD FROM <filename> WHERE <cond1> AND/OR <cond2> AND/OR...;


NOTE:
1.Field / file names start with letter (upper/lower)/underscore followed by string with combination of letters/digits/underscore/$ in any order.
2.MQL is not case sensitive. But string constants in database are case sensitive.
