#!/bin/bash

echo "Compiling with script"


gcc -c Minesfuncion1.c -o Minesfuncion1.o
gcc -c Minesfuncion2.c -o Minesfuncion2.o
gcc -c Minesfuncion3.c -o Minesfuncion3.o
gcc -c Mines.c -o Mines.o

gcc -o Mines Mines.o Minesfuncion1.o Minesfuncion2.o Minesfuncion3.o

./Mines
