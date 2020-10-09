#include "stdio.h"
#include "GENFUN.h"
#include <stdlib.h>
#include <time.h> 

void main(void)
{
	uint8 au8array[18]= "equipochavezgarcia";
	uint8 u8Char2Set;
	uint8 saveocurrence;
	uint8 u8Target;
	uint8 au8arraynum[7]={2,4,2,4,8,7,4};
	uint8 au8arraynum2[7]={0,0,0,0,0,0,0};
	uint32 au32arraynum[255];
	uint32 au32arraynum2[254];
	uint32 saveoaverage;
	uint8 i;

	printf("\n		Funcion CapsOn \n");
		printf("Before CapsOn: %s\n", au8array);
		GENFUN_vCapsOn (&au8array[0], 18);
		printf("After CapsOn: %s\n", au8array);
	
	printf("\n		Funcion CapsOff \n");
		printf("Before CapsOff: %s\n", au8array);
		GENFUN_vCapsOff (&au8array[0], 18);
		printf("After CapsOff: %s\n", au8array);

	printf("\n		Funcion GetOccurence \n");
		printf("¿Que letra desea busscar?\n");
		scanf ("%c",&u8Target );
		saveocurrence= GENFUN_u8GetOccurence(&au8array[0], u8Target, 18);
		printf("La letra %c se repite %d\n", u8Target,saveocurrence);

	printf("Funcion MemSet\n");
		u8Target= 'w' ;
		printf("Before MemSet: %s\n", au8array);
		printf("¿Que caracter desea en la nueva lista?\n");
		//scanf ("%c\n",  &u8Char2Set);
		GENFUN_u8MemSet (&au8array[0], u8Target, 18);
		printf("La nueva cadena es %s\n", au8array);

	printf("\n		Funcion GetAverage \n");
		printf("La funcion Average dara el promedio obtenido de la cadena siguiente:");
		for(i=0;i<7;i++){printf(" %d ",au8arraynum[i]);	}
		printf("\n");
		saveoaverage=GENFUN_u8GetAverage(&au8arraynum[0],7);
		printf("\nEl promedio obtenido es : %d",saveoaverage);

	printf("\n		Funcion MemCopy \n");
		printf("La funcion MemCopy copiara los valores de la cadena siguiente y estos seran asignados a una cadena diferente:");
		for(i=0;i<7;i++){printf(" %d ",au8arraynum[i]);	}
		printf("\nLa cadena vacia es la siguinete: ");
		for(i=0;i<7;i++){printf(" %d ",au8arraynum2[i]);}
		printf("\n");
		GENFUN_u8MemCopy(&au8arraynum[0],&au8arraynum2[0],7);
		printf("\n Ya se se realizo la funcion MemCopy y el resultado es el siguiente : ");
		for(i=0;i<7;i++){printf(" %d ",au8arraynum2[i]);}

	printf("\n		Funcion SoftSignal \n");
	GENFUN_vSoftSignal (&au32arraynum[0], &au32arraynum2[0]);		
}

void GENFUN_vCapsOn (uint8 *pu8Src, uint8 u8SizeOfList)
{
	while ( u8SizeOfList != 0 )
	{
		if( *pu8Src > ASCII_LOW_THRESHOLD_OFF_ON && *pu8Src < ASCII_HIGH_THRESHOLD_OFF_ON)    
		{
			*pu8Src -= ASCII_CONVERTION_FACTOR;
		}
		else
		{
			/*Nothing to do*/
		}
		pu8Src++;
		u8SizeOfList--;
	}
}

void GENFUN_vCapsOff (uint8 *pu8Src, uint8 u8SizeOfList)
{
	while ( u8SizeOfList != 0 )
	{
		if( *pu8Src > ASCII_LOW_THRESHOLD_OFF_ON && *pu8Src < ASCII_HIGH_THRESHOLD_OFF_ON)
		{
			*pu8Src += ASCII_CONVERTION_FACTOR;
		}
		else
		{
			/*Nothing to do*/
		}
		pu8Src++;
		u8SizeOfList--;
	}
}

uint32 GENFUN_u8GetOccurence (uint8 *pu8Src, uint8 u8Target, uint8 u8SizeOfList) 
{
	int Contrador=0;
	
	while( u8SizeOfList != 0 )
	{
		if( *pu8Src == u8Target )
		{
			Contrador++;
		}
		else
		{

		}
		u8SizeOfList--;
		pu8Src++;
	}

	return Contrador;
}

uint8 GENFUN_u8GetAverage (uint8 *pu8Src, uint8 u8SizeOfList)
{
	uint32 Sumadevalores=0;
	uint8 div=u8SizeOfList;
	while ( u8SizeOfList != 0 )
	{
		Sumadevalores+= *pu8Src;
		pu8Src++;
		u8SizeOfList--;
	}
	Sumadevalores/=div; 
	return Sumadevalores;
}

void GENFUN_u8MemSet (uint8 *pu8Src, uint8 u8Char2Set, uint8 u8SizeOfList) 
{
	while (u8SizeOfList != 0)
	{
		*pu8Src = u8Char2Set;
		u8SizeOfList--;
	}
		pu8Src++;
}

void GENFUN_u8MemCopy (uint8 *pu8Src, uint8 *pu8Dest, uint8 u8SizeOfList) 
{
	while ( u8SizeOfList != 0 )
	{
		*pu8Dest= *pu8Src;
		pu8Src++;
		pu8Dest++;
		u8SizeOfList--;
	}
}

void GENFUN_vSortList (uint8 *pu8Src, uint8 *pu8Dest, uint8 u8SizeOfList) 
{
	while ( u8SizeOfList != 0 )
	{

	}
	
//

/*  Parámetros: 
-pu8Src: Apuntador que recibe la dirección de la cadena original desordenada. 
-pu8Dest: Apuntador que recibe la dirección donde se ordenara la cadena. 
-u8SizeOfList: Número de elementos de la cadena. 
Retorno: N/A 

La función deberá recibir una cadena con N elementos desordenados y reescribir
la misma lista ordenada en la dirección indicada en orden ascendente. */
}

void GENFUN_vSoftSignal (uint32 *pu32Src, uint32 *pu32Dest) 
{
	uint8 indice = END_SOFT;
	while(indice!= 0)
	{
		*pu32Src = rand() % 10;
		indice--;
	}

	
/* 
La función recibe una cadena con 255 elementos la cual se tendrá que suavizar aplicando un promedio entre los 2 
elementos más cercanos de toda la cadena. 
Ejemplo (Primer Elemento Destino = (Primer Elemento Fuente + Segundo Elemento
Fuente) / 2) */
}

void GENFUN_vFilterSignal (uint8 *pu8Src, uint8 *pu8Dest, uint8 u8MaxVal, uint8 u8MinVal) 
{
/*  Parámetros: 
-pu8Src: Apuntador que recibe la dirección de la cadena fuente. 
-pu8Dest: Apuntador que recibe la dirección de la cadena destino. 
-u8MaxVal: Limite Superior del Filtro. 
-u8MinVal: Límite Inferior del Filtro. 
Retorno: N/A 

La función deberá recibir una cadena con 255 elementos (simulando un grafica
numérica) la cual se tendrá que filtrar en la cadena destino con los limites otorgados.*/ 
}
