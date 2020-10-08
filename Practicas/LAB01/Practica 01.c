#include "stdio.h"
#include "GENFUN.h"
#include "stdlib.h"


void main(void)
{
	uint8 au8array[18]= "equipochavezgarcia";
	uint8 saveocurrence;
	uint8 u8Target;

	printf("Funcion CapsOn \n");
		printf("Before CapsOn: %s\n", au8array);
		GENFUN_vCapsOn (&au8array[0], 18);
		printf("After CapsOn: %s\n", au8array);
	
	printf("Funcion CapsOff \n");
		printf("Before CapsOff: %s\n", au8array);
		GENFUN_vCapsOff (&au8array[0], 18);
		printf("After CapsOff: %s\n", au8array);

	printf("Funcion GetOccurence \n");
		printf("¿Que letra desea busscar?\n");
		scanf ("%c",&u8Target );
		saveocurrence= GENFUN_u8GetOccurence(&au8array[0], u8Target, 18);
		printf("La letra %c se repite %d\n", u8Target,saveocurrence);

	//printf("Funcion GetAverage \n");
		//printf("Before GetAverage: %s\n", au8array);
		//GENFUN_u8GetAverage(&au8array[0], 18);
		//printf("After GetAverage: %s\n", au8array);


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

uint32 GENFUN_u8GetAverage (uint8 au8array[],uint8 *pu8Src, uint8 u8SizeOfList)
{
 	uint32 Variable;
	uint32 Contrador;
    printf("\nLa función hará el promedio de letras en el au8array\n");
    for (Variable=FOR_START ; Variable<FOR_END ; Variable++) 
    {    
            if ( au8array[Variable] == *pu8Src )
            {
                Contrador++;
            }
            else
			{
				/*Nothing to do*/
			}   
    	printf("\nLa letra %c se repite: %d veces.",au8array[Variable], Contrador);        
    }
	return 0;
}

void GENFUN_u8MemSet (uint8 *pu8Src, uint8 u8Char2Set, uint8 u8SizeOfList) 
{
	//printf("\nLa funcion Taera la primer lista y cambiara a la segunda\n Escriba el siguiente parametro\n");
	//scanf ("%s\n" &u8Char2Set[]);
	//for ( Variable_For_One = FOR_START ; Variable_For_One < FOR_END ; Variable_For_One++ )
	//{
		
	//}

}

void GENFUN_u8MemCopy (uint8 *pu8Src, uint8 *pu8Dest, uint8 u8SizeOfList) 
{
/* 
La función deberá recibir la dirección de dos arreglos, y copiar la información 
de uno al otro.*/ 
}

void GENFUN_vSortList (uint8 *pu8Src, uint8 *pu8Dest, uint8 u8SizeOfList) 
{
/*  Parámetros: 
-pu8Src: Apuntador que recibe la dirección de la cadena original desordenada. 
-pu8Dest: Apuntador que recibe la dirección donde se ordenara la cadena. 
-u8SizeOfList: Número de elementos de la cadena. 
Retorno: N/A 

La función deberá recibir una cadena con N elementos desordenados y reescribir
la misma lista ordenada en la dirección indicada en orden ascendente. */
}

void GENFUN_vSoftSignal (uint8 *pu8Src, uint8 *pu8Dest) 
{
/*  Parámetros: 
-pu8Src: Apuntador que recibe la dirección de la cadena fuente. 
-pu8Dest: Apuntador que recibe la dirección de la cadena destino. 
Retorno: N/A 

La función deberá recibir una cadena con 255 elementos (simulando un grafica
numérica) la cual se tendrá que suavizar aplicando un promedio entre los 2 
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
