arielLib = ./lib/arielLib.a

INC_DIR = ./include
SRC_DIR = ./src
OBJ_DIR = ./build
BIN_DIR = ./bin
DOC_DIR = ./doc
LIB_DIR = ./lib

CC = g++

RM = rm -rf

ARCHIVE = ar

FILES = ./src/circulo.cpp ./src/cubo.cpp ./src/esfera.cpp ./include/espacial.cpp ./include/figura.cpp ./src/paralelepipedo.cpp ./src/piramide.cpp ./include/plana.cpp ./src/quadrado.cpp ./src/retangulo.cpp ./src/triangulo.cpp

OBJS = ./build/circulo.o ./build/cubo.o ./build/esfera.o ./build/paralelepipedo.o ./build/piramide.o ./build/quadrado.o ./build/retangulo.o ./build/triangulo.o

CPPFLAGS = -Wall -pedantic -ansi -std=c++11 -I. -I$(INC_DIR)/

.PHONY: clean debug dir doxy

arielLib.a: $(CPPFILES)
	$(CC) $(CPPFLAGS) -c $(SRC_DIR)/circulo.cpp -o $(OBJ_DIR)/circulo.o
	$(CC) $(CPPFLAGS) -c $(SRC_DIR)/cubo.cpp -o $(OBJ_DIR)/cubo.o
	$(CC) $(CPPFLAGS) -c $(SRC_DIR)/esfera.cpp -o $(OBJ_DIR)/esfera.o
	$(CC) $(CPPFLAGS) -c $(INC_DIR)/espacial.h -o $(OBJ_DIR)/espacial.o
	$(CC) $(CPPFLAGS) -c $(INC_DIR)/figura.h -o $(OBJ_DIR)/figura.o
	$(CC) $(CPPFLAGS) -c $(SRC_DIR)/paralelepipedo.cpp -o $(OBJ_DIR)/paralelepipedo.o
	$(CC) $(CPPFLAGS) -c $(SRC_DIR)/piramide.cpp -o $(OBJ_DIR)/piramide.o
	$(CC) $(CPPFLAGS) -c $(INC_DIR)/plana.h -o $(OBJ_DIR)/plana.o
	$(CC) $(CPPFLAGS) -c $(SRC_DIR)/quadrado.cpp -o $(OBJ_DIR)/quadrado.o
	$(CC) $(CPPFLAGS) -c $(SRC_DIR)/retangulo.cpp -o $(OBJ_DIR)/retangulo.o
	$(CC) $(CPPFLAGS) -c $(SRC_DIR)/triangulo.cpp -o $(OBJ_DIR)/triangulo.o
	$(AR) rcs $(LIB_DIR)/$@  $(OBJS)


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

