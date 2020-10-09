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
	uint32 au32arraynum2[255];
	uint8 au8Disorder[10] = {5,9,7,2,1,0,3,5,4,7};
	uint8 au8Aux[10];
	uint32 saveoaverage;
	uint8 i, i2;

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
		printf("\n");

	printf("\n		Funcion GetAverage \n");
		printf("La funcion Average dara el promedio obtenido de la cadena siguiente:");
		for(i=0;i<7;i++){printf(" %d ",au8arraynum[i]);	}
		printf("\n");
		saveoaverage=GENFUN_u8GetAverage(&au8arraynum[0],7);
		printf("\nEl promedio obtenido es : %d",saveoaverage);	

	printf("\n\n		Funcion MemSet\n");
		u8Target='w';
		printf("Before MemSet: %s\n", au8array);
		GENFUN_u8MemSet (&au8array[0], u8Target, 18);
		printf("La nueva cadena es %s",au8array);

	printf("\n\n		Funcion MemCopy \n");
		printf("La funcion MemCopy copiara los valores de la cadena siguiente y estos seran asignados a una cadena diferente:");
		for(i=0;i<7;i++){printf(" %d ",au8arraynum[i]);	}
		printf("\nLa cadena vacia es la siguinete: ");
		for(i=0;i<7;i++){printf(" %d ",au8arraynum2[i]);}
		printf("\n");
		GENFUN_u8MemCopy(&au8arraynum[0],&au8arraynum2[0],7);
		printf("\n Ya se se realizo la funcion MemCopy y el resultado es el siguiente : ");
		for(i=0;i<7;i++){printf(" %d ",au8arraynum2[i]);}

	printf("\n\n		Funcion SortList \n");
		printf("Before SortList \n");
		for(i2=0;i2<9;i2++){printf("%d   ", au8Disorder[i2]);}
		GENFUN_vSortList (&au8Disorder[0], &au8Aux[0], 10 );
		printf("After SortList\n");
		for(i2=0;i2<9;i2++){printf("%d", au8Aux[i2]);}

	printf("\n\n		Funcion SoftSignal \n");
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
		if( *pu8Src > ASCII_LOW_THRESHOLD_OFF_ON_2 && *pu8Src < ASCII_HIGH_THRESHOLD_OFF_ON_2)
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

uint8 GENFUN_u8GetOccurence (uint8 *pu8Src, uint8 u8Target, uint8 u8SizeOfList) 
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
		pu8Src++;	
	}
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
	 uint32 u8AuxSizeOfList = u8SizeOfList;
	 uint32 a=0;

	while ( u8SizeOfList != 0 )
	{
		while ( u8AuxSizeOfList != 0 )
		{
			if ( pu8Src > pu8Dest )
			{
				a = *pu8Dest;
				*pu8Dest = *pu8Src;
				*pu8Src = a;
			}
		}
		u8SizeOfList--; 
	}
}

void GENFUN_vSoftSignal (uint32 *pu32Src, uint32 *pu32Dest) 
{
	uint8 indice = END_SOFT;
	uint8 indice2 = END_SOFT_2;
	uint8 prom=0,num=0,sum=0;
	
	printf("Se mostrara los valores almacenados aleatoriamente en el primer areglo: \n");
	while(indice!= 0)
	{
		*pu32Src = rand() % 10;
		printf("  %d   ",*pu32Src);
		indice--;
		pu32Src++;
	}
	pu32Src=pu32Src-255;
	printf("\n El resultado de la segunda cadena con los promedios es : \n");
	
	while(indice2 != 0)
	{
		num = *pu32Src;
		pu32Src++;
		sum=(num+*pu32Src);
		prom=(sum/2);
		*pu32Dest=prom;
		printf("  %d   ",*pu32Dest );
		indice2--;
		pu32Dest++;

	}
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
