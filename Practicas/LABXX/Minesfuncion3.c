#include "Minesfuncion3.h"

void revisar_alrededor(uint8 au8Tablero[RENGLON][COLUMNA],uint8 u8Fila, uint8 u8Columna)
{
  uint8 u8Conteo = 0, u8FilaInicio, u8FilaFin, u8ColumnaInicio, u8ColumnaFin;
  if (u8Fila <= 0)
  {
  u8FilaInicio = 0;
  }
  else 
  {
  u8FilaInicio = u8Fila - 1;
  }
  if 
  (u8Fila + 1 >= RENGLON)
  {
    u8FilaFin = RENGLON - 1;
  } 
  else 
  {
    u8FilaFin = u8Fila + 1;
  }

  if (u8Columna <= 0) 
  {
    u8ColumnaInicio = 0;
  } 
  else 
  {
    u8ColumnaInicio = u8Columna - 1;
  }
  if (u8Columna + 1 >= COLUMNA) 
  {
    u8ColumnaFin = COLUMNA - 1;
  } 
  else 
  {
    u8ColumnaFin = u8Columna + 1;
  }
  uint8 m;
  for (m = u8FilaInicio; m <= u8FilaFin; m++)
  {
    uint8 l;
    for (l = u8ColumnaInicio; l <= u8ColumnaFin; l++)
    {
      if (au8Tablero[m][l] == 3) 
      {
        u8Conteo++;
      }
    }
  }
  printf("%d  ",u8Conteo);
}