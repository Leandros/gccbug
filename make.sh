#!/bin/bash

CFLAGS=-DUSE_DL_PREFIX=1

rm *.o
gcc -o dlmalloc.o $CFLAGS -c dlmalloc.c
g++ -o malloc.o $CFLAGS -c malloc.cpp
g++ -o main.o $CFLAGS -c main.cpp
g++ -o test dlmalloc.o malloc.o main.o
rm *.o

