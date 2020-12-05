echo Bomb

gcc -c Main.c 	-o 		Main.o
gcc -c BML.c 	-o 		BML.o
gcc -c SM.c 	-o 		SM.o

gcc -o Bomb.exe Main.o BML.o SM.o 

Bomb.exe

pause