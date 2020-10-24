#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include "Mines.h"

int main()
{
  int buscaminas[RENGLON][COLUMNA] = {0}, i, j;
  int nivel, bombas;                                    
  int gameStatus=0, victoria=0;            
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
      break;
      case 2:
        bombas = 15;
      break;
      case 3:
        bombas = 20;
      break;
      default: 
        printf("Seleccion invalida, intente de nuevo.\n\n");
      break;                 
    }

  colocar_bombas(buscaminas[][], bombas);

  //Esto se repite hasta que se acabe el juego 
  while(gameStatus != -1 || victoria == 1)
  {      
    printf("\n-Buscaminas-\n\n");
    imprimir_tablero(buscaminas[][], gameStatus);
    printf("\n"); 
    printf("*Ingrese la tirada[i, j]: ");
    scanf("%d%d",&i, &j);
    
    if(buscaminas[i][j] == 9)
    {                              
      gameStatus = -1;
      imprimir_tablero(buscaminas[][], gameStatus);
      printf("\t ¡¡¡Perdiste, el juego ha terminado!!");
      getchar();              
    }
    else
    {
      buscaminas[i][j] = 1;
    }
    if(gameCounter == (255 - bombas) )
    {
      victoria = 1;
      imprimir_tablero(buscaminas[][], gameStatus);
      printf("\t  ¡¡¡Has ganado, felicidades!!!");
      getchar();
    }
  }
  for(i = 0; i <= RENGLON - 1; i++)
  for(j = 0; j <= COLUMNA - 1; j++)
    buscaminas[i][j] = 0;   
}     
    

void colocar_bombas(int minas[][], int bum)
{
  int i, renglon, columna;   
  for(i = 0; i < bum; i++)
  {
    renglon = 0 + rand() % 15;
    columna = 0 + rand() % 15;
    minas[renglon][columna] = 9;
  }
} 

void imprimir_tablero(int tablero[][], int perder)
{
    int i, j;
    //Se imprime los numeros de arriba
    for(i = 0; i <= RENGLON -1; i++)  printf("%d ", i);
    printf("\n");
    //Se imprime la separación de numeros con el juego
    for(i = 0; i <= COLUMNA - 1; i++)
    printf("--");
    printf("\n");
    
    //Se imprime el juego     
    for(i = 0; i <= RENGLON -1; i++)
    {
      for(j = 0; j <= COLUMNA - 1; j++)
      {
        if(tablero[i][j] == 1)  printf("%d ", tablero[i][j]);
        
        else if((tablero[i][j] == 9) && (perder == -1))   printf("%c ", '@');
        
        else    printf("%c ", '#');        
      }
      printf("| %d", i);   
      printf("\n"); 
    }
    
}