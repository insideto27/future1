#include<stdio.h>
# Project: Puzzle Game
# Makefile created by Dev - C++ 5.11

int g
CPP = g++.exe
CC = gcc.exe
WINDRES = windres.exe
OBJ = main.o print.o run.o auto3x3.o read.o playgame.o autoMxN.o picture.o
LINKOBJ = main.o print.o run.o auto3x3.o read.o playgame.o autoMxN.o picture.o
LIBS = -L"C:/Program Files (x86)/Dev-Cpp/MinGW64/lib" - L"C:/Program Files (x86)/Dev-Cpp/MinGW64/x86_64-w64-mingw32/lib" - static - libgcc
INCS = -I"C:/Program Files (x86)/Dev-Cpp/MinGW64/include" - I"C:/Program Files (x86)/Dev-Cpp/MinGW64/x86_64-w64-mingw32/include" - I"C:/Program Files (x86)/Dev-Cpp/MinGW64/lib/gcc/x86_64-w64-mingw32/4.9.2/include"
CXXINCS = -I"C:/Program Files (x86)/Dev-Cpp/MinGW64/include" - I"C:/Program Files (x86)/Dev-Cpp/MinGW64/x86_64-w64-mingw32/include" - I"C:/Program Files (x86)/Dev-Cpp/MinGW64/lib/gcc/x86_64-w64-mingw32/4.9.2/include" - I"C:/Program Files (x86)/Dev-Cpp/MinGW64/lib/gcc/x86_64-w64-mingw32/4.9.2/include/c++"
BIN = "Puzzle Game.exe"
CXXFLAGS = $(CXXINCS) - std = c++11
CFLAGS = $(INCS) - std = c++11
RM = rm.exe - f

.PHONY: all all - before all - after clean clean - custom

all : all - before $(BIN) all - after

clean : clean - custom
${ RM } $(OBJ) $(BIN)

$(BIN) : $(OBJ)
$(CPP) $(LINKOBJ) - o $(BIN) $(LIBS)

main.o : main.cpp
$(CPP) - c main.cpp - o main.o $(CXXFLAGS)

print.o : print.cpp
$(CPP) - c print.cpp - o print.o $(CXXFLAGS)

run.o : run.cpp
$(CPP) - c run.cpp - o run.o $(CXXFLAGS)

auto3x3.o : auto3x3.cpp
$(CPP) - c auto3x3.cpp - o auto3x3.o $(CXXFLAGS)

read.o : read.cpp
$(CPP) - c read.cpp - o read.o $(CXXFLAGS)

playgame.o : playgame.cpp
$(CPP) - c playgame.cpp - o playgame.o $(CXXFLAGS)

autoMxN.o : autoMxN.cpp
$(CPP) - c autoMxN.cpp - o autoMxN.o $(CXXFLAGS)

picture.o : picture.cpp
$(CPP) - c picture.cpp - o picture.o $(CXXFLAGS)