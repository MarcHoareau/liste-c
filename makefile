LIB = lib
BUILD = build
TEST = test

default : test01

test01 : $(TEST)/test01.c
	gcc -Wall $(TEST)/test01.c $(LIB)/liste-c.o -o $(TEST)/test01 && $(TEST)/test01

test02 : $(TEST)/test02.c
	gcc -Wall $(TEST)/test02.c $(LIB)/liste-c.o -o $(TEST)/test02 && $(TEST)/test02