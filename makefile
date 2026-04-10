LIB = lib
BUILD = build
TEST = test

default : comp

comp : $(TEST)/test01.c
	gcc -Wall $(TEST)/test01.c $(LIB)/liste-c.o -o $(TEST)/test01 && $(TEST)/test01