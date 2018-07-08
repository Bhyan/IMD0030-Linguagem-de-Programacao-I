SRC = ./src
BIN = ./bin
DOC = ./doc
GDB = gdb
CC = g++
FLAGS = -Wall -pedantic -std=c++11
DEBUG = -O0 -g

.PHONY: all clean debug doxy doc

all: app

app: $(BIN)/main

debug: FLAGS += $(DEBUG)

debug: all

$(BIN)/%: $(SRC)/%.cpp
	$(CC) $< $(FLAGS) -o $@

config: 
	mkdir $(BIN)
	mkdir $(DOC)

run:
	$(GDB) $(BIN)/main

doxy:
	doxygen -g

doc:
	rm -rf $(DOC)/*
	doxygen

clean:
	rm $(BIN)/*
