#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <time.h>
#include "Mines.h"

void main(void)
{
  uint8 au8buscaminas[RENGLON][COLUMNA]={0};
  uint8 u8posicioni, u8posicionj,u8nivel,u8bombas,i,j;                                    
  uint8 u8gameStatus=0, u8ictoria=0, u8gameCounter=0;            
  srand(time(NULL)); 

  //Hacer bucle
    printf("\n   >>>>Buscaminas<<<<\n\n");
    printf("Niveles:\n1)Facil\n2)Normal\n3)Dificil\n");
    printf("Ingrese el nivel que desea :");
    scanf("%d", &u8nivel);
      
    switch(nivel)
    {
      case 1:
        u8bombas = 10;
        colocar_bombas(au8buscaminas, u8bombas);
      break;
      case 2:
        u8bombas = 20;
        colocar_bombas(au8buscaminas, u8bombas);
      break;
      case 3:
        u8bombas = 30;
        colocar_bombas(au8buscaminas, u8bombas);
      break;
      default: 
        printf("Seleccion invalida, intente de nuevo.\n\n");
      break;                 
    }

 //Esto se repite hasta que se acabe el juego 
  while(au8gameStatus != -1 || au8victoria == 1)
  { 
    system("cls"); 
    //Empieza el juego     
    printf("\n-Buscaminas-\n\n");
    //Imprimimos tablero 1ra vez puro #
    imprimir_tablero(au8buscaminas, u8gameStatus);  //ojo
    
    printf("\n"); 
    printf("*Ingrese la tirada[i, j]: ");
    scanf("%d",&u8posicionj);
    scanf("%d",&u8posicioni);
    
    
    if(au8buscaminas[u8posicioni][u8posicionj] == 3)
    {                              
      gameStatus = -1;
      imprimir_tablero(au8buscaminas, u8gameStatus);
      printf("\t ¡¡¡Perdiste, el juego ha terminado!!");
                  
    }
    else
    {
      au8buscaminas[u8posicioni][u8posicionj] = 1;
    }

    if( u8gameCounter == (255 - u8bombas) )
    {
      uint8 u8victoria = 1;
      imprimir_tablero(au8buscaminas, u8gameStatus);
      printf("  ¡¡¡Has ganado, felicidades!!!");
      
    }
    u8gameCounter++;
  }
  for(i = 0; i <= RENGLON - 1; i++)
    for(j = 0; j <= COLUMNA - 1; j++)
      au8buscaminas[i][j] = 0;   
}     
    
void colocar_bombas(uint8 au8buscaminas[RENGLON][COLUMNA], uint8 u8bum)
{
     uint8 i, u8renglon, u8columna;
    
     for(i = 1; i <= bum; i++)
     {
           u8renglon = 0 + rand() % 14;
           u8columna = 0 + rand() % 14;
          
           au8buscaminas[u8renglon][u8columna]= 3 ;
     }
}

void imprimir_tablero(uint8 au8tablero[RENGLON][COLUMNA], uint8 u8perder)
{
    uint8 i, j;
    //Se imprime los numeros de arriba
    for(i = 0; i <= RENGLON -6; i++)  printf("%d  ", i);
    for(i = 10; i <=14; i++)  printf("%d ", i);
    printf("\n");
    //Se imprime la separación de numeros con el juego
    for(i = 0; i <= COLUMNA + 7; i++)  printf("--");
    printf("\n");
       
    for(i = 0; i <= RENGLON -1; i++)
    {
      for(j = 0; j <= COLUMNA - 1; j++)
      {
        if(au8tablero[i][j] == 1)
        {
          revisar_alrededor (au8tablero,i,j);
        }
        else if((au8tablero[i][j] ==3) && (u8perder == -1))
          printf("%c  ", '@');
        else
          printf("%c  ", '#');        
      }
      printf("| %d", i);   
      printf("\n");     
    }
}

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