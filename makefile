LIB = lib
BUILD = build
TEST = test

default : help

help : 
	@echo "Ce makefile peut compiler et lancer les fichiers test01 a test03"

test01 : $(TEST)/test01.c
	gcc -Wall $(TEST)/test01.c $(LIB)/liste-c.o -o $(TEST)/test01 && $(TEST)/test01

test02 : $(TEST)/test02.c
	gcc -Wall $(TEST)/test02.c $(LIB)/liste-c.o -o $(TEST)/test02 && $(TEST)/test02

test03 : $(TEST)/test03.c
	gcc -Wall $(TEST)/test03.c $(LIB)/liste-c.o -o $(TEST)/test03 && $(TEST)/test03