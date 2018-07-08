SRC = ./src
BIN = ./bin
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

$(BUILD)/%.o: $(SRC)/%.cpp $(INCLUDE)/%.h
	$(CC) -c $< -I $(INCLUDE) $(FLAGS) -o $@ 

$(BIN)/%: $(SRC)/%.cpp
	$(CC) $< $(FLAGS) -o $@

config: 
	mkdir $(BIN)

run:
	$(BIN)/main

gdb:
	gdb $(BIN)/main

clean:
	rm $(BIN)/*
