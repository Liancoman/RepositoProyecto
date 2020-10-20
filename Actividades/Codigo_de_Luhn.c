#include "stdio.h"
#include <stdlib.h>

typedef unsigned int uint8;

uint8 u8LuhunCheck(uint8 *pu8Data,uint8 u8SizeOfList);

void main(void)
{
	uint8 au8arraynum[16]={4,1,6,8,8,1,8,8,4,4,4,4,7,1,1,5};
	uint8 u8For,u8Check=0;

	//1ro Mandamos la cadena para la funcion para que realice la lectura
	u8Check=u8LuhunCheck(&au8arraynum[0],16);

	//2do Comparamos si es o no es Valida
	if(u8Check==1)		//0 para correcto, otro para incorrecto
	{
		//Le diremos que es valida la tarjeta entonces le mostramosel número de tarjeta 
		printf("Tarjeta Valida.\nSe le Mostrara los numeros de la tarjeta: ");
		for(u8For=0;u8For<=15;u8For++) {printf("%d ", au8arraynum[u8For]);}
	}
	else
	{
		//Le diremos que es no valida la tarjeta.
		printf("Tarjeta No Valida.\n");
	}


}

uint8 u8LuhunCheck(uint8 *pu8Data,uint8 u8SizeOfList)
{
	uint8 u8SaveNum=0,u8StartOfWhile=0,u8SumTotal=0,u8ModTotal=0,validacion=0; 	
	
	while( u8StartOfWhile <= u8SizeOfList )
	{
		
		if( u8StartOfWhile % 2 == 0 )
		{
			u8SaveNum= (*pu8Data)*2;			//savenum = 4
			if(u8SaveNum<10)
			{
				/*Nothing to do*/
			}
			else
			{
				u8SaveNum=u8SaveNum-9;
			}
		}
		else
		{
			u8SaveNum= *pu8Data;
		}
		u8SumTotal=u8SaveNum+u8SumTotal;
		u8StartOfWhile++;
		pu8Data++;
		
	}
	//printf(" %d ",u8SumTotal );
	u8ModTotal=u8SumTotal%10;
	//printf(" %d ",u8ModTotal );
	if(u8ModTotal==0)
	{
		validacion=1;
	}
	else
	{
		validacion=0;
	}
	return validacion;
}