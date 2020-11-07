echo buscaminas


gcc -c Mines.c -o 	Mines.o
gcc -c Minesfuncion1.c -o 	Minesfuncion1.o
gcc -c Minesfuncion2.c -o 	Minesfuncion2.o
gcc -c Minesfuncion3.c -o 	Minesfuncion3.o
gcc -o Mines.exe Mines.o Minesfuncion1.o Minesfuncion2.o Minesfuncion3.o 

Mines.exe

pause