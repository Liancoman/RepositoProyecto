#include "stdio.h"
#include "Structs.h"
#include <stdlib.h>

/* Descripcion 
-->Se tiene que usar un arreglo de estructuras para manejar los estacionamientos, la estructura es la de abajo.
*/
tstParkingInfo astMyParks[enMaxSectors] = INIT_PARKING_SLOTS;
/*
->El programa correra en un ciclo infinito y habra funciones aleatorias que metan y saquen carros de las 
diferentes secciones.

->El programa debe tener una logica que atienda las peticiones siguientes con funciones:
	*Obtener el numero de espacios disponibles de una seccion (F1)
	*Obtener el numero de espacios no disponibles de una seccion (F2)
	*Obtener ganancias de sección(F3)
	*Registrar vehiculo ingresado(F4)
	*Remover vehiculo(F5)
	*Registrar pago de vehiculo ingresado(F6)
*/

void main ( void )
{
	uint8 u8InputAction = 0;
	tenParkingSectors enSector; 
	uint8 u8ConfirmationFromAction = 0;
	while(1)
	{

		fflush(stdin);
		//Se escoge la opción deseada
		printf("Press 1 to -> Read Available Slots\n");
		printf("Press 2 to -> Read Unavailable Slots\n");
		printf("Press 3 to -> Read Earned Money\n");
		printf("Press 4 to -> Enter a Car to a Section\n");
		printf("Press 5 to -> Remove a Car from a Section\n");
		//Se Pide ingresar opción y luego se muestra
		printf("Enter selection: ");
		scanf("%d", &u8InputAction);
		printf("Action Selected %d\n", u8InputAction );
		//Se le pide los pisos del estacionamiento "los sectores del 0 al 4" y se muestra
		printf("Enter Sector from 0 to 4: ");
		scanf("%d", &enSector);
		printf("Sector Selected %d\n", enSector );

		if( enSector < enMaxSectors )
		{
			if( u8InputAction == 1 )
			{
				ShowAvailableSlots(enSector);
			}
			else if( u8InputAction == 2 )
			{
				ShowNotAvailableSlots(enSector);
			}
			else if( u8InputAction == 3 )
			{
				ShowEarnedMoney(enSector);
			}
			else if( u8InputAction == 4 )
			{
				uint8 u8Add=u8AddCarToSector(enSector);
			}
			else if ( u8InputAction == 5 )
			{
				uint8 u8Remove=u8RemoveCarFromSector(enSector);
			}
			else
			{
				u8ImportPaymentOfSlot(enSector);
			}
			printf("\n\n");
		}
		else
		{
			printf("\nNo se seleccionó la opción correcta.\n\n\n");
		}
		system(cls);
	}
}

/*F1	->(F1) Una funcion con 1 parametro, la cual reciba la seccion
 de estacionamiento (0, 1, 2, 3 o 4) e imprima la cantidad de espacios disponibles de esa seccion*/
void ShowAvailableSlots ( tenParkingSectors enCurrentSector )
{
	printf("\nSe selecciono el sector %d",enCurrentSector);
	
}

/*F2	->(F2) Una funcion con 1 parametro, la cual reciba la seccion
 de estacionamiento (0, 1, 2, 3 o 4) e imprima la cantidad de espacios no disponibles de esa seccion
*/
void ShowNotAvailableSlots ( tenParkingSectors enCurrentSector )
{
	
	printf("\nSe selecciono el sector %d",enCurrentSector);
	
}

/*F3	->(F3) Una funcion con 1 parametro, la cual reciba la seccion
 de estacionamiento (0, 1, 2, 3 o 4) e imprima la cantidad de dinero acumulada en esa sección*/
void ShowEarnedMoney ( tenParkingSectors enCurrentSector )
{
	printf("\nSe selecciono el sector %d",enCurrentSector);
}
/*F4	->(F4) Una funcion con 1 parametro, la cual reciba la seccion
 de estacionamiento y permita ingresar un vehiculo a esa seccion*/
uint8 u8AddCarToSector( tenParkingSectors enCurrentSector )
{
	printf("\nSe selecciono el sector %d",enCurrentSector);
	return 0;
}
/*F5	->(F5) Una funcion con 1 parametro, la cual reciba la seccion
 de estacionamiento y permita retirar un vehiculo de la cuenta de la seccion*/
uint8 u8RemoveCarFromSector( tenParkingSectors enCurrentSector )
{
	printf("\nSe selecciono el sector %d",enCurrentSector);
	return 0;
}
/*F6	->(F6) Una funcion con 1 parametro, la cual reciba la seccion
 de estacionamiento y registre el pago por haber ingresado el vehiculo*/
void u8ImportPaymentOfSlot( tenParkingSectors enCurrentSector )
{
	printf("\nSe selecciono el sector %d",enCurrentSector);
}