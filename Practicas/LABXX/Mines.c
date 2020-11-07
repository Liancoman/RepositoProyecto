#include "Minesfuncion1.h"
#include "Minesfuncion2.h"
void main(void)
{
  uint8 au8buscaminas[RENGLON][COLUMNA]={0};
  uint8 u8posicioni, u8posicionj,u8nivel=0,u8bombas,i,j,u8jugar=1;                                    
  uint8 u8gameStatus=0, u8ictoria=0, u8gameCounter=0;            
  srand(time(NULL)); 
  while(u8jugar==1)
  {
    //system("clear");
    printf("\n   >>>>Buscaminas<<<<\n\n");
    printf("Niveles:\n1)Facil\n2)Normal\n3)Dificil\n");
    printf("Ingrese el nivel que desea :");
    scanf("%d", &u8nivel);  
    switch(u8nivel)
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
    while(u8gameStatus != -1 || u8ictoria == 1)
    { 
      //system("clear"); 
      printf("\n-Buscaminas-\n\n");
      imprimir_tablero(au8buscaminas, u8gameStatus);
      printf("\n"); 
      printf("Ingrese la tirada para posicion i: ");
      scanf("%d",&u8posicionj);
      printf("Ingrese la tirada para posicion j: ");
      scanf("%d",&u8posicioni);
      if(au8buscaminas[u8posicioni][u8posicionj] == 3)
      {                              
        u8gameStatus = -1;
        imprimir_tablero(au8buscaminas, u8gameStatus);
        printf("  ----- Perdiste, el juego ha terminado  ----- \n");

      }
      else
      {
        au8buscaminas[u8posicioni][u8posicionj] = 1;
      }
      if( u8gameCounter == (255 - u8bombas) )
      {
        uint8 u8victoria = 1;
        imprimir_tablero(au8buscaminas, u8gameStatus);
        printf("  ----- Has ganado, felicidades----\n");
      }
      u8gameCounter++;
    }
    //system("pause");
    //system("clear");
    printf("\nDesea continuar jugando.\n1)Si\n2)No\n");
    scanf("%d",&u8jugar);
    for(i = 0; i <= RENGLON - 1; i++)
    for(j = 0; j <= COLUMNA - 1; j++)
    au8buscaminas[i][j] = 0;
    u8nivel=0;
    u8bombas=0; 
    u8gameCounter=0;
    u8gameStatus=0;   
    u8ictoria=0;
    
  }
}     