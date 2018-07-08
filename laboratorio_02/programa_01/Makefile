INCLUDE = ./include
SRC = ./src
BIN = ./bin
BUILD = ./build
DOC = ./doc
CC = g++
FLAGS = -Wall -pedantic -std=c++11
DEBUG = -O0 -g -pg

.PHONY: all clean debug doxy doc

all: \
		lib \
		app

lib: \
		$(BUILD)/plana.o \
		$(BUILD)/espacial.o

app: \
		$(BIN)/geometria

debug: FLAGS += $(DEBUG)

debug: all

$(BUILD)/%.o: $(SRC)/%.cpp $(INCLUDE)/%.h
	$(CC) -c $< -I $(INCLUDE) $(FLAGS) -o $@ 

$(BIN)/%: $(SRC)/%.cpp
	$(CC) $< $(BUILD)/*.o -I $(INCLUDE) $(FLAGS) -o $@

config: 
	mkdir $(BIN)
	mkdir $(BUILD)
	mkdir $(DOC)

run:
	$(BIN)/geometria quadrado 4

doxy:
	doxygen -g

doc:
	rm -rf $(DOC)/*
	doxygen

clean:
	rm $(BIN)/*
	rm $(BUILD)/*
