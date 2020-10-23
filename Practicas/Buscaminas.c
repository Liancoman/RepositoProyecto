#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#define RENGLON 10
#define COLUMNA 10

void imprimir_tablero(int tablero[][10], int perder);
void colocar_bombas(int minas[][10], int bum);
int main()
{
    
    int buscaminas[RENGLON][COLUMNA] = {0}, i, j;
    int nivel, bombas;                                    
    int gameStatus, gameCounter = 0, victoria;            
    float rating;
    char salida;

  do{
       printf("\n\t>>>>Buscaminas<<<<\n\n");
       printf("hay 20 bombas en este nivel \n\n");
       printf("precione cualquier numero para iniciar: \n\n");
       printf("mini tutroial: poner la coordenadas que deseas ejemplo:1i,2j \n\n");
       scanf("%d", &nivel);
      
       switch(nivel)
        {
           case 1: bombas = 20;
                   break;
                  
           default: 
           printf("Seleccion invalida, intente de nuevo.\n\n");
                    break;                 
        }
       
       srand(time(NULL));  
       colocar_bombas(buscaminas, bombas);
       
       do{
           printf("\n-Buscaminas-\n\n");
           imprimir_tablero(buscaminas, gameStatus);
           printf("\n"); 
           printf("*Ingrese la tirada[i, j]: ");
           scanf("%d%d",&i, &j);
          
           if(buscaminas[i][j] == 3)
            {                              
               gameStatus = -1;
               printf("\nBuscaminas1\n");
               imprimir_tablero(buscaminas, gameStatus);
               printf("\t ¡¡¡Perdiste, el juego ha terminado!!");
               getchar();              
            }
           else
           {
               buscaminas[i][j] = 1;
               gameCounter++;
           }
           if(gameCounter == (120 - bombas) )
           {
               victoria = 1;
               printf("\nBuscaminas-\n\n");
               imprimir_tablero(buscaminas, gameStatus);
               printf("\t  ¡¡¡Has ganado, felicidades!!!");
               getchar();
           }       
           
       }while(gameStatus != -1 || victoria == 1);
      
        rating = ((float)gameCounter * 100) / 120;
        printf("\n-Buscaminas- Estadisticas del juego.\n");
        printf("Tu rating  de juego es %.2f", rating);
        printf("\n\n");
        salida = getchar();
        salida = tolower(salida);
      
       for(i = 0; i <= RENGLON - 1; i++)
         for(j = 0; j <= COLUMNA - 1; j++)
           buscaminas[i][j] = 0;
          
       gameCounter = 0;
  }while(salida == 's');
    printf("\nGracias por jugar");
    printf("\nVuelve pronto..");
    getchar();
    system("clear");
  return 0;
}
void colocar_bombas(int minas[][10], int bum)
{
     int i, renglon, columna;
     for(i = 1; i <= bum; i++)
     {
           renglon = 0 + rand() % 10;
           columna = 0 + rand() % 10;
          
           minas[renglon][columna] = 3;
     }
}
void imprimir_tablero(int tablero[][10], int perder)
{
     int i, j;
    for(i = 0; i <= RENGLON -1; i++)
        printf("%d ", i);
      
        printf("\n");
    for(i = 0; i <= COLUMNA - 1; i++)
        printf("--");
      
        printf("\n");
        
    for(i = 0; i <= RENGLON -1; i++)
    {
           for(j = 0; j <= COLUMNA - 1; j++)
            {
             if(tablero[i][j] == 1)
               printf("%d ", tablero[i][j]);
             else if((tablero[i][j] == 3) && (perder == -1))
               printf("%c ", '*');
             else
               printf("%c ", '#');        
            }
            printf("| %d", i);   
            printf("\n"); 
    }
    
}