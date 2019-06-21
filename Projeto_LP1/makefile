INCLUDE = ./include
SRC = ./src
BIN = ./bin
BUILD = ./build
LIB = ./lib
DOC = ./doc
CC = g++
ARCHIVE = ar
FLAGS = -Wall -pedantic -std=c++11
DEBUG = -O0 -g -pg

.PHONY: all clean debug doxy doc

# Default e gerar executável para Linux.
all: \
		linux

include: \
		$(BUILD)/anfibio.o \
		$(BUILD)/anfibio_nativo.o \
		$(BUILD)/anfibio_exotico.o \
		$(BUILD)/exotico.o \
		$(BUILD)/animal.o \
		$(BUILD)/funcionario.o \
		$(BUILD)/tratador.o \
		$(BUILD)/veterinario.o \
		$(BUILD)/animal_silvestre.o \
		$(BUILD)/ave.o \
		$(BUILD)/ave_nativa.o \
		$(BUILD)/ave_exotica.o \
		$(BUILD)/mamifero.o \
		$(BUILD)/mamifero_nativo.o \
		$(BUILD)/mamifero_exotico.o \
		$(BUILD)/nativo.o \
		$(BUILD)/reptil.o \
		$(BUILD)/reptil_nativo.o \
		$(BUILD)/reptil_exotico.o \
		$(BUILD)/gerencia.o

# Flag para gerar executável do Windows.
windows: \
		include \
		lib_windows \
		$(BIN)/petfera_windows.exe \
		$(BIN)/exportar

# Flag para gerar executável do Linux.
linux:\
		include \
		lib_linux \
		$(BIN)/petfera_linux \
		$(BIN)/exportar

# Flag para gerar bibliotecas dinâmicas para o Windows.
lib_windows: \
		$(LIB)/petfera.dll 

# Flag para gerar bibliotecas dinâmicas para o Linux.
lib_linux: \
		$(LIB)/petfera.so

debug: FLAGS += $(DEBUG)

debug: all

# Gera os .o.
$(BUILD)/%.o: $(SRC)/%.cpp $(INCLUDE)/%.h
	$(CC) -c $< -I $(INCLUDE) $(FLAGS) -fPIC -o $@ 

# Gera os executável PetFera para Linux.
$(BIN)/petfera_linux: $(SRC)/petfera.cpp
	$(CC) $< $(LIB)/*.so -I $(INCLUDE) $(FLAGS) -o $@

# Gera os executável PetFera para Windows.
$(BIN)/petfera_windows.exe: $(SRC)/petfera.cpp
	$(CC) $< $(LIB)/*.dll -I $(INCLUDE) $(FLAGS) -o $@

# Gera executável genérico.
$(BIN)/%: $(SRC)/%.cpp
	$(CC) $< $(BUILD)/*.o -I $(INCLUDE) $(FLAGS) -o $@

# Gera bibliotecas dinâmicas .so para Linux.
$(LIB)/%.so:
	$(CC) -shared -fPIC $(BUILD)/*.o -o $@

# Gera bibliotecas dinâmicas .dll para Windows.
$(LIB)/%.dll:
	$(CC) -shared $(BUILD)/*.o -o $@

# Cria as pastas necessária para as compilações e documentação.
config: 
	mkdir $(BIN)
	mkdir $(BUILD)
	mkdir $(LIB)
	mkdir $(DOC)

# Executa o programa.
run:
	$(BIN)/petfera_*

# Executa o gdb.
gdb:
	gdb $(BIN)/petfera_*

# Gera documentação automática com o doxygem.
doc:
	rm -rf $(DOC)/*
	doxygen

# Remove arquivos das pastas build, bin e lib.
clean:
	rm $(BUILD)/*
	rm $(LIB)/*
	rm $(BIN)/*
