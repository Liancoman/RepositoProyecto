#include "stdio.h"
#include "GENFUN.h"
#include <stdlib.h>
#include <time.h> 

/*Nota 90*/
void main(void)
{
	uint8 au8array[18]= "equipochavezgarcia";
	uint8 u8Char2Set,u8SaveToOcurrence,u8Target,u8For;
	uint8 au8arraynum[7]={2,4,2,4,8,7,4};
	uint8 au8arraynum2[7]={0,0,0,0,0,0,0};
	uint32 au32arraynum[255];
	uint32 au32arraynum2[255];
	uint8 au8Disorder[10] = Array_nums;
	uint8 au8Aux[10]={0,0,0,0,0,0,0,0,0,0};
	uint32 u32SaveToAverage;

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
		u8SaveToOcurrence= GENFUN_u8GetOccurence(&au8array[0], u8Target, 18);
		printf("La letra %c se repite %d\n", u8Target,u8SaveToOcurrence);
		printf("\n");

	printf("\n		Funcion GetAverage \n");
		printf("La funcion Average dara el promedio obtenido de la cadena siguiente:");
		for(u8For=0;u8For<7;u8For++){printf(" %d ",au8arraynum[u8For]);	}
		printf("\n");
		u32SaveToAverage=GENFUN_u8GetAverage(&au8arraynum[0],7);
		printf("\nEl promedio obtenido es : %d",u32SaveToAverage);	

	printf("\n\n		Funcion MemSet\n");
		u8Target='w';
		printf("Before MemSet: %s\n", au8array);
		GENFUN_u8MemSet (&au8array[0], u8Target, 18);
		printf("La nueva cadena es %s",au8array);

	printf("\n\n		Funcion MemCopy \n");
		printf("La funcion MemCopy copiara los valores de la cadena siguiente y estos seran asignados a una cadena diferente:");
		for(u8For=0;u8For<7;u8For++){printf(" %d ",au8arraynum[u8For]);	}
		printf("\nLa cadena vacia es la siguinete: ");
		for(u8For=0;u8For<7;u8For++){printf(" %d ",au8arraynum2[u8For]);}
		printf("\n");
		GENFUN_u8MemCopy(&au8arraynum[0],&au8arraynum2[0],7);
		printf("\n Ya se se realizo la funcion MemCopy y el resultado es el siguiente : ");
		for(u8For=0;u8For<7;u8For++){printf(" %d ",au8arraynum2[u8For]);}

	printf("\n\n		Funcion SortList \n");
		printf(" \nBefore SortList\n");
		for(u8For=0;u8For<10;u8For++)
		{printf(" %d  ", au8Disorder[u8For]);}
		GENFUN_vSortList( &au8Disorder[0], &au8Aux[0], 10);
		printf(" \nAfter SortList\n");
		for(u8For=0;u8For<10;u8For++)
		{printf(" %d  ", au8Disorder[u8For]);}

	printf("\n\n		Funcion SoftSignal \n");
	GENFUN_vSoftSignal (&au32arraynum[0], &au32arraynum2[0]);	

	printf("\n\n		Funcion FilterSignal \n");
	GENFUN_vFilterSignal(&au32arraynum[0],&au32arraynum2[0],MaxVal,MinVal);
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
	uint8 u8Contrador=0;
	
	while( u8SizeOfList != 0 )
	{
		if( *pu8Src == u8Target )
		{
			u8Contrador++;
		}
		else
		{
			/*Nothing to do*/
		}
		u8SizeOfList--;
		pu8Src++;
	}

	return u8Contrador;
}

uint8 GENFUN_u8GetAverage (uint8 *pu8Src, uint8 u8SizeOfList)
{
	uint32 u32Sumadevalores=0;
	uint8 u8divSumadevalores=u8SizeOfList;
	while ( u8SizeOfList != 0 )
	{
		u32Sumadevalores+= *pu8Src;
		pu8Src++;
		u8SizeOfList--;
	}
	u32Sumadevalores/=u8divSumadevalores; 
	return u32Sumadevalores;
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
	uint8 au8ContPiv,u8Fori,u8Forx;
    uint8 au8arraynum3[10]= Array_nums;

    for(u8Fori=0;u8Fori<=u8SizeOfList;u8Fori++)
    {	
        for(u8Forx=u8Fori+1;u8Forx<=u8SizeOfList-1;u8Forx++)	
        {
            if(au8arraynum3[u8Fori]>au8arraynum3[u8Forx])		
            {
                au8ContPiv=au8arraynum3[u8Fori];				
                au8arraynum3[u8Fori]=au8arraynum3[u8Forx];		 
                au8arraynum3[u8Forx]=au8ContPiv;				 
            }
            else{/*Nothing to do*/}          					
        }
    }
    for(u8Fori=0;u8Fori<u8SizeOfList;u8Fori++)
        {
        	*pu8Src=au8arraynum3[u8Fori];
        	pu8Src++;
        }  
}

void GENFUN_vSoftSignal (uint32 *pu32Src, uint32 *pu32Dest) 
{
	uint8 u8indice = END_SOFT;
	uint8 u8indice2 = END_SOFT_2;
	uint8 u8Prom=0,u8num=0,u8sum=0;
	
	printf("Se mostrara los valores almacenados aleatoriamente en el primer areglo: \n");
	while(u8indice!= 0)
	{
		*pu32Src = rand() % 10;
		printf("  %d   ",*pu32Src);
		u8indice--;
		pu32Src++;
	}
	pu32Src=pu32Src-255;
	printf("\n El resultado de la segunda cadena con los promedios es : \n");
	
	while(u8indice2 != 0)
	{
		u8num = *pu32Src;
		pu32Src++;
		u8sum=(u8num+*pu32Src);
		u8Prom=(u8sum/2);
		*pu32Dest=u8Prom;
		printf("  %d   ",*pu32Dest );
		u8indice2--;
		pu32Dest++;

	}
}


void GENFUN_vFilterSignal (uint32 *pu32Src, uint32 *pu32Dest, uint32 u32MaxVal, uint32 u32MinVal) /*Esta funcion esta mal*/
{
	uint8 indice = END_SOFT;
	uint8 indice2 = END_SOFT;
	uint8 o=0;
	printf("Se mostrara los valores almacenados aleatoriamente en el primer areglo con el limite menor de %d y el limite mayor de %d\n",u32MinVal,u32MaxVal);
	u32MaxVal--;
	while(indice!= 0)
	{
		*pu32Src = (u32MinVal) + (rand() % u32MaxVal);
		*pu32Dest=o;
		printf("  %d   ",*pu32Src);
		indice--;
		pu32Src++;
		pu32Dest++;
	}
	pu32Src=pu32Src-255;
	pu32Dest=pu32Dest-1;

	printf("\n Se guardaran los resultados en otra cadena distinta : \n");
	
	while(indice2 != 0)
	{
		o = *pu32Src;
		*pu32Dest=o;
		pu32Src++;
		pu32Dest++;
		printf("  %d   ",*pu32Dest );
		indice2--;
	}

}
