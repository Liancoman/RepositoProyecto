#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include "Mines.h"

int main()
{
  int buscaminas[RENGLON][COLUMNA] = {0};
  int i,j,nivel, bombas;                                    
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
      break;
      case 2:
        bombas = 20;
      break;
      case 3:
        bombas = 30;
      break;
      default: 
        printf("Seleccion invalida, intente de nuevo.\n\n");
      break;                 
    }

  colocar_bombas(&buscaminas[0][0], bombas);

 //Esto se repite hasta que se acabe el juego 
  while(gameStatus != -1 || victoria == 1)
  { 
    //system(cls); 
    //Empieza el juego     
    printf("\n-Buscaminas-\n\n");
    //Imprimimos tablero 1ra vez puro #
    imprimir_tablero(&buscaminas[0][0], gameStatus);  //ojo
    
    printf("\n"); 
    printf("*Ingrese la tirada[i, j]: ");
    scanf("%d",&i);
    scanf("%d",&j);
    
    if(buscaminas[i][j] == 9)
    {                              
      gameStatus = -1;
      imprimir_tablero(&buscaminas[0][0], gameStatus);
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
      imprimir_tablero(&buscaminas[0][0], gameStatus);
      printf("\t  ¡¡¡Has ganado, felicidades!!!");
      getchar();
    }
    gameCounter++;
  }
  for(i = 0; i <= RENGLON - 1; i++)
  for(j = 0; j <= COLUMNA - 1; j++)
    buscaminas[i][j] = 1;   
}     
    

void colocar_bombas(int *minas, int bum)  //Revisar las  @
{
  int i,j, renglon, columna;
  int arreglo [15][15];

  for(i = 0; i < bum; i++)
  {
    renglon = 0 + rand() % 14;
    columna = 0 + rand() % 15;
    printf("%d %d\n",renglon,columna );
    for(j=0;j<(renglon*15)+columna;j++)
    {
      minas++;
    }
    *minas=9;
    for(j=0;j<=(renglon*15)+columna;j++)
    {
      minas--;
    }

  }
} 

void imprimir_tablero(int *tablero, int perder)
{
    int i, j,save2;
    int arreglo2[15][15];
    //Se imprime los numeros de arriba
    for(i = 0; i <= RENGLON -6; i++)  printf("%d  ", i);
      for(i = 10; i <=14; i++)  printf("%d ", i);
    printf("\n");
    //Se imprime la separación de numeros con el juego
    for(i = 0; i <= COLUMNA + 7; i++)
    printf("--");
    printf("\n");
    
    //Se imprime el juego     
    for(i = 0; i <= RENGLON -1; i++)
    {
      for(j = 0; j <= COLUMNA - 1; j++)
      {
        arreglo2[i][j]=*tablero;
        if(arreglo2[i][j] == 1)
        {
          //revisar_alrededor(&arreglo2[0][0],i,j);
          printf("f  ");
          
        }  
        
        else if((arreglo2[i][j] == 9) && (perder == -1))
        {   
          printf("%c  ", '@');
          tablero++;
        }
        else    printf("%c  ", '#');   


        tablero++;     
      }
      printf("| %d", i);   
      printf("\n"); 
    }
    
}

/*void revisar_alrededor(int *tablero2, int a, int b)
{
  int arreglo3[15][15];
  int i,j,sum=0;
  
  llegar al cerca 1
  for(j=0;j<=((b-1)*15)+(a-1)  ;j++ )
  {
    tablero2++;
  }
  
  ver los 3 valores de arriba si son 9
  for(j=0;j<=2 ;j++ )
  {
    if(*tablero2 == 9) sum++
    tablero2++;
  }
  Se elimino algo importante
  llegar al cerca 1
  for(j=0;j<=((b-1)*15)+(a-1)  ;j++ )
  {
    tablero2++;
  }
  
  ver los 3 valores de arriba si son 9
  for(j=0;j<=2 ;j++ )
  {
    if(*tablero2 == 9) sum++
    tablero2++;
  }

  llegar al cerca 1
  for(j=0;j<=((b-1)*15)+(a-1)  ;j++ )
  {
    tablero2++;
  }
  
  ver los 3 valores de arriba si son 9
  for(j=0;j<=2 ;j++ )
  {
    if(*tablero2 == 9) sum++
    tablero2++;
  } 
  printf("%d ",sum);
}*/