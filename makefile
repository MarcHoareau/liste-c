LIB = lib
BUILD = build
TEST = test
SRC = src

default : help

help : 
	@echo "Ce makefile peut compiler et lancer les fichiers test01 a test03 ainsi que de compiler la librairie dans src"

src : $(SRC)/liste-c.c
	gcc -c -Wall $(SRC)/liste-c.c -o $(SRC)/liste-c.o

test01 : $(TEST)/test01.c src
	gcc -Wall $(TEST)/test01.c $(SRC)/liste-c.o -o $(TEST)/test01 && $(TEST)/test01

test02 : $(TEST)/test02.c src
	gcc -Wall $(TEST)/test02.c $(SRC)/liste-c.o -o $(TEST)/test02 && $(TEST)/test02

test03 : $(TEST)/test03.c src
	gcc -Wall $(TEST)/test03.c $(SRC)/liste-c.o -o $(TEST)/test03 && $(TEST)/test03

bench_test02 : $(TEST)/test02.c src
	gcc -g -fsanitize=address -Wall $(TEST)/test02.c $(SRC)/liste-c.o -o $(TEST)/test02 && $(TEST)/test02