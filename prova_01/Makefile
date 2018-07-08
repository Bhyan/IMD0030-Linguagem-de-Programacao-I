INCLUDE = ./include
SRC = ./src
BIN = ./bin
BUILD = ./build
CC = g++
FLAGS = -Wall -pedantic -std=c++11
DEBUG = -O0 -g -pg

all: \
		lib \
		app

lib: \
		$(BUILD)/dado.o \
		$(BUILD)/jogador.o \
		$(BUILD)/jogo.o

app: \
		$(BIN)/main

debug: FLAGS += $(DEBUG)

debug: all

$(BUILD)/%.o: $(SRC)/%.cpp $(INCLUDE)/%.h
	$(CC) -c $< -I $(INCLUDE) $(FLAGS) -o $@ 

$(BIN)/%: $(SRC)/%.cpp
	$(CC) $< $(BUILD)/*.o -I $(INCLUDE) $(FLAGS) -o $@

config: 
	mkdir $(BIN)
	mkdir $(BUILD)

run:
	$(BIN)/main

clean:
	rm $(BIN)/*
	rm $(BUILD)/*

remove:
	rm -rf $(BIN)
	rm -rf $(BUILD)
