#include "Minesfuncion1.h"

void colocar_bombas(uint8 au8buscaminas[RENGLON][COLUMNA], uint8 u8bum)
{
    uint8 i, u8renglon, u8columna;
    for(i = 1; i <= u8bum; i++)
    {
    	u8renglon = 0 + rand() % 14;
        u8columna = 0 + rand() % 14;
        au8buscaminas[u8renglon][u8columna]= 3 ;
    }
}