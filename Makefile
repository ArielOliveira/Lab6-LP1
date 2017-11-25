arielLib = ./bin/arielLib

INC_DIR = ./include
SRC_DIR = ./src
OBJ_DIR = ./build
BIN_DIR = ./bin
DOC_DIR = ./doc

CC = g++

RM = rm -rf

OBJS_P = ./build/main.o ./build/triangulo.o ./build/retangulo.o ./build/quadrado.o ./build/circulo.o
OBJS_E = ./build/piramide.o ./build/cubo.o ./build/paralelepipedo.o ./build/esfera.o


CPPFLAGS = -Wall -pedantic -ansi -std=c++11

.PHONY: clean debug dir doxy arielLib

arielLib: $(arielLib)

$(arielLib): CPPFLAGS += -I. -I$(INC_DIR)/
$(arielLib): $(OBJS_P) $(OBJS_E)
	$(CC) $^ $(CPPFLAGS) -o $@

$(OBJ_DIR)/main.o: $(SRC_DIR)/main.cpp 
	$(CC) -c $(CPPFLAGS) $< -o $@

###################################################################################################################

$(OBJ_DIR)/triangulo.o: $(SRC_DIR)/triangulo.cpp $(INC_DIR)/triangulo.h $(INC_DIR)/plana.h $(INC_DIR)/figura.h
	$(CC) -c $(CPPFLAGS) $< -o $@

$(OBJ_DIR)/retangulo.o: $(SRC_DIR)/retangulo.cpp $(INC_DIR)/retangulo.h $(INC_DIR)/plana.h $(INC_DIR)/figura.h
	$(CC) -c $(CPPFLAGS) $< -o $@

$(OBJ_DIR)/quadrado.o: $(SRC_DIR)/quadrado.cpp $(INC_DIR)/quadrado.h $(INC_DIR)/plana.h $(INC_DIR)/figura.h
	$(CC) -c $(CPPFLAGS) $< -o $@

$(OBJ_DIR)/circulo.o: $(SRC_DIR)/circulo.cpp $(INC_DIR)/circulo.h $(INC_DIR)/plana.h $(INC_DIR)/figura.h
	$(CC) -c $(CPPFLAGS) $< -o $@

###################################################################################################################

$(OBJ_DIR)/piramide.o: $(SRC_DIR)/piramide.cpp $(INC_DIR)/piramide.h $(INC_DIR)/espacial.h $(INC_DIR)/figura.h
	$(CC) -c $(CPPFLAGS) $< -o $@

$(OBJ_DIR)/cubo.o: $(SRC_DIR)/cubo.cpp $(INC_DIR)/cubo.h $(INC_DIR)/espacial.h $(INC_DIR)/figura.h
	$(CC) -c $(CPPFLAGS) $< -o $@

$(OBJ_DIR)/paralelepipedo.o: $(SRC_DIR)/paralelepipedo.cpp $(INC_DIR)/paralelepipedo.h $(INC_DIR)/espacial.h $(INC_DIR)/figura.h
	$(CC) -c $(CPPFLAGS) $< -o $@

$(OBJ_DIR)/esfera.o: $(SRC_DIR)/esfera.cpp $(INC_DIR)/esfera.h $(INC_DIR)/espacial.h $(INC_DIR)/figura.h
	$(CC) -c $(CPPFLAGS) $< -o $@

debug: CPPFLAGS += -g -O0
debug: arielLib

doxy:
	$(RM) $(DOC_DIR)/*
	doxygen Doxyfile

clean:
	$(RM) $(BIN_DIR)/*
	$(RM) $(OBJ_DIR)/*

dir:
	mkdir -p bin
	mkdir -p build
	mkdir -p include
	mkdir -p src
	mkdir -p doc
	mkdir -p lib
	mkdir -p test

