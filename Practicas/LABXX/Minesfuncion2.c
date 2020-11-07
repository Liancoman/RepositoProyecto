#include "Minesfuncion2.h"
#include "Minesfuncion3.h"

void imprimir_tablero(uint8 au8tablero[RENGLON][COLUMNA], uint8 u8perder)
{
  uint8 i, j;
  for(i = 0; i <= RENGLON -6; i++)      printf("%d  ", i);
  for(i = 10; i <=14; i++)              printf("%d ", i);
  printf("\n");
  for(i = 0; i <= COLUMNA + 7; i++)     printf("--");
  printf("\n");
  for(i = 0; i <= RENGLON -1; i++)
  {
    for(j = 0; j <= COLUMNA - 1; j++)
    {
      if(au8tablero[i][j] == 1)         revisar_alrededor (au8tablero,i,j);
      else if(  au8tablero[i][j] == 3 & u8perder == -1)    printf("%c  ", '@');
      else                              printf("%c  ", '#');        
    }
    printf("| %d", i);   
    printf("\n");     
  }
}