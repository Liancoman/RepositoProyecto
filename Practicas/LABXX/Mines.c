#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <time.h>
#include "Mines.h"

void main(void)
{
  int buscaminas[RENGLON][COLUMNA];
  int posicioni,posicionj,nivel,bombas,i,j;                                    
  int gameStatus=0, victoria=0,gameCounter=0;            
  srand(time(NULL)); 

  //Hacer bucle
    printf("\n   >>>>Buscaminas<<<<\n\n");
    printf("Niveles:\n1)Facil\n2)Normal\n3)Dificil\n");
    printf("Ingrese el nivel que desea :");
    scanf("%d", &nivel);
      
    switch(nivel)
    {
      case 1:
        bombas = 10;
        colocar_bombas(buscaminas, bombas);
      break;
      case 2:
        bombas = 20;
        colocar_bombas(buscaminas, bombas);
      break;
      case 3:
        bombas = 30;
        colocar_bombas(buscaminas, bombas);
      break;
      default: 
        printf("Seleccion invalida, intente de nuevo.\n\n");
      break;                 
    }

 //Esto se repite hasta que se acabe el juego 
  while(gameStatus != -1 || victoria == 1)
  { 
    system("cls"); 
    //Empieza el juego     
    printf("\n-Buscaminas-\n\n");
    //Imprimimos tablero 1ra vez puro #
    imprimir_tablero(buscaminas, gameStatus);  //ojo
    
    printf("\n"); 
    printf("*Ingrese la tirada[i, j]: ");
    scanf("%d",&posicionj);
    scanf("%d",&posicioni);
    
    
    if(buscaminas[posicioni][posicionj] == 3)
    {                              
      gameStatus = -1;
      imprimir_tablero(buscaminas, gameStatus);
      printf("\t ¡¡¡Perdiste, el juego ha terminado!!");
                  
    }
    else
    {
      buscaminas[posicioni][posicionj] = 1;
    }

    if( gameCounter == (255 - bombas) )
    {
      victoria = 1;
      imprimir_tablero(buscaminas, gameStatus);
      printf("  ¡¡¡Has ganado, felicidades!!!");
      
    }
    gameCounter++;
  }
  for(i = 0; i <= RENGLON - 1; i++)
    for(j = 0; j <= COLUMNA - 1; j++)
      buscaminas[i][j] = 0;   
}     
    
void colocar_bombas(int buscaminas[RENGLON][COLUMNA], int bum)
{
     int i, renglon, columna;
    
     for(i = 1; i <= bum; i++)
     {
           renglon = 0 + rand() % 14;
           columna = 0 + rand() % 14;
          
           buscaminas[renglon][columna]= 3 ;
     }
}

void imprimir_tablero(int tablero[RENGLON][COLUMNA], int perder)
{
    int i, j;
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
        if(tablero[i][j] == 1)
        {
          revisar_alrededor (tablero,i,j);
        }
        else if((tablero[i][j] ==3) && (perder == -1))
          printf("%c  ", '@');
        else
          printf("%c  ", '#');        
      }
      printf("| %d", i);   
      printf("\n");     
    }
}

void revisar_alrededor(int Tablero[RENGLON][COLUMNA],int Fila, int Columna)
{
  int Conteo = 0, FilaInicio, FilaFin, ColumnaInicio, ColumnaFin;
  if (Fila <= 0)
  {
  FilaInicio = 0;
  }
  else 
  {
  FilaInicio = Fila - 1;
  }
  if 
  (Fila + 1 >= RENGLON)
  {
    FilaFin = RENGLON - 1;
  } 
  else 
  {
    FilaFin = Fila + 1;
  }

  if (Columna <= 0) 
  {
    ColumnaInicio = 0;
  } 
  else 
  {
    ColumnaInicio = Columna - 1;
  }
  if (Columna + 1 >= COLUMNA) 
  {
    ColumnaFin = COLUMNA - 1;
  } 
  else 
  {
    ColumnaFin = Columna + 1;
  }
  int m;
  for (m = FilaInicio; m <= FilaFin; m++)
  {
    int l;
    for (l = ColumnaInicio; l <= ColumnaFin; l++)
    {
      if (Tablero[m][l] == 3) 
      {
        Conteo++;
      }
    }
  }
  printf("%d  ",Conteo);
}