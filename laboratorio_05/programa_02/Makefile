INCLUDE = ./include
SRC = ./src
BIN = ./bin
DOC = ./doc
CC = g++
FLAGS = -Wall -pedantic -std=c++11
DEBUG = -O0 -g -pg

.PHONY: all clean debug doxy doc

all: \
		app

app: \
		$(BIN)/main

debug: FLAGS += $(DEBUG)

debug: all

$(BIN)/%: $(SRC)/%.cpp
	$(CC) $< -I $(INCLUDE) $(FLAGS) -o $@

config: 
	mkdir $(BIN)
	mkdir $(DOC)

run:
	$(BIN)/main

gdb:
	gdb $(BIN)/main

doxy:
	doxygen -g

doc:
	rm -rf $(DOC)/*
	doxygen

clean:
	rm $(BIN)/*
