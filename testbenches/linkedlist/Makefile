CC = gcc
INCLUDES = incl
SOURCES = src/*.c
BINARY = ./main
PROG = main.c

DCC = gcc

DFLAGS = -g3 -Og -fsanitize=address -fstack-protector-all -fopenmp\
 -fstack-clash-protection -fasynchronous-unwind-tables -D_FORTIFY_SOURCE=2

CFLAGS = -g -lm -fomit-frame-pointer -O2\
 -ftree-vectorize -std=c++20 -fopenmp\
 -Wall -Wextra -Wpedantic -pedantic

VFLAGS = --show-leak-kinds=all --track-origins=yes --leak-check=full -s

all: deps
	@$(CC) -o $(BINARY) $(PROG) $(SOURCES) -I$(INCLUDES) $(CFLAGS) -L./eigen3
deps:
	@$(DCC) -o $(DEPATH)/$(DEPBIN) $(DEPROGRAM)
run: 
	@$(BINARY) 
valgrind: all clear 
	@valgrind $(VFLAGS) $(BINARY) 
zip:
	zip -r TI.zip main.c include source makefile
clean:
	rm $(BINARY); rm *.zip
clear:
	clear
debcompile: 
	@$(CC) -o $(BINARY) $(PROG) $(SOURCES) -I$(INCLUDES) $(DFLAGS)
debug: debcompile clear
	$(BINARY)