#include "stdio.h"
#include "GENFUN.h"
#include "stdlib.h"


void main(void)
{
	uint8 au8array[18]= "equipochavezgarcia";
	printf("Funcion Get On \n");
	printf("Before CapsOn: %s\n", au8array);
	GENFUN_vCapsOn (&au8array[0], 18);
	printf("After CapsOn: %s\n", au8array);
	printf("Funcion Get Off \n");
	
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

uint8 GENFUN_u8GetOccurence (uint8 *pu8Src, uint8 u8Target, uint8 u8SizeOfList) 
{
/*  Parámetros: 
-pu8Src: Apuntador que recibe la dirección de la cadena. 
-u8Target: Elemento a buscar en la cadena. 
-u8SizeOfList: Número de elementos de la cadena. 
Retorno: El número de ocurrencias en la cadena. 

La función deberá recibir una cadena con N elementos y un Target a buscar,
devolverá el número de veces que Target se repite en la misma.*/ 
	return = 0;
}

uint8 GENFUN_u8GetAverage (uint8 *pu8Src, uint8 u8SizeOfList)
{
 
    printf("\nLa función hará el promedio de letras en el au8array\n");
    for (Variable_For_One = FOR_START ; Variable_For_One < FOR_END ; Variable_For_One++) 
    {    
            if ( au8array[Variable_For_One] == *pu8Src )
            {
                Contrador++;
            }
            else
			{
				/*Nothing to do*/
			}   
    	printf("\nLa letra %c se repite: %d veces.",au8array[Variable_For_One], Contrador);        
    }
	return 0;
}

void GENFUN_u8MemSet (uint8 *pu8Src, uint8 u8Char2Set, uint8 u8SizeOfList) 
{
/*  Parámetros: 
-pu8Src: Apuntador que recibe la dirección de la cadena. 
-u8Char2Set: Carácter a escribir en la cadena. 
-u8SizeOfList: Número de elementos de la cadena. 
Retorno: N/A 

La función deberá recibir la dirección de un arreglo y llenarlo con el elemento
del segundo parámetro. */
}

void GENFUN_u8MemCopy (uint8 *pu8Src, uint8 *pu8Dest, uint8 u8SizeOfList) 
{
/*  Parámetros: 
-pu8Src: Apuntador que recibe la dirección de la cadena. 
-pu8Dest: Apuntador que contiene la dirección de la cadena destino. 
-u8SizeOfList: Número de elementos de la cadena. 
Retorno: N/A 

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
