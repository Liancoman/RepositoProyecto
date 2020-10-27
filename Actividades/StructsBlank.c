#include "stdio.h"
#include "Structs.h"
#include <stdlib.h>

tstParkingInfo astMyParks[enMaxSectors] = INIT_PARKING_SLOTS;

void main ( void )
{
	uint8 u8InputAction = 0;
	tenParkingSectors enSector = enSector0; 
	uint8 u8ConfirmationFromAction = 0;
	uint8 u8ToSaveAddCarToOtherFuncion=0;
	while(1)
	{
		fflush(stdin);
		printf("Press 1 to -> Read Available Slots\n");
		printf("Press 2 to -> Read Unavailable Slots\n");
		printf("Press 3 to -> Read Earned Money\n");
		printf("Press 4 to -> Enter a Car to a Section\n");
		printf("Press 5 to -> Remove a Car from a Section\n");
		printf("Press 6 to -> Print Parking Receipt\n");
		printf("Enter selection: ");
		scanf("%d", &u8InputAction);
		printf("Enter Sector from 0 to 4: ");
		scanf("%d", &enSector);
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
				ShowEarnedMoney(enSector,u8ToSaveAddCarToOtherFuncion);
			}
			else if( u8InputAction == 4 )
			{
				uint8 u8Add=u8AddCarToSector(enSector);
				u8ToSaveAddCarToOtherFuncion++;
				printf("\nSe agrego su auto en el sector %d\nTotal de espacios disponibles %d ",enSector,u8Add );
			}
			else if ( u8InputAction == 5 )
			{
				uint8 u8Remove=u8RemoveCarFromSector(enSector);
				if(u8Remove!=0)
				{
				printf("\nSe removio su auto en el sector %d\nTotal de espacios disponibles %d ",enSector,u8Remove );
				}
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
	}
}
void ShowAvailableSlots ( tenParkingSectors enCurrentSector )
{
	if(enCurrentSector==0||enCurrentSector==1||enCurrentSector==2||enCurrentSector==3||enCurrentSector==4)
	{
		if(astMyParks[enCurrentSector].u8AvailableSlots!= 0)
			printf("En el sector %d, hay %d espacios disponibles\n", enCurrentSector,astMyParks[enCurrentSector].u8AvailableSlots);
		else printf("No hay espacios disponibles en el sector %d \n",enCurrentSector );
	}
	else 	printf("No seleccionó ningun sector valido \n");
}
void ShowNotAvailableSlots ( tenParkingSectors enCurrentSector )
{
	if(enCurrentSector==0||enCurrentSector==1||enCurrentSector==2||enCurrentSector==3||enCurrentSector==4)
	{
		if(astMyParks[enCurrentSector].u8NotAvailableSlots == 0)
			printf("Todos los espacios en el sector %d estan desocupados\n",enCurrentSector );
		else printf("En el sector %d, hay %d espacios ocupados\n", enCurrentSector,astMyParks[enCurrentSector].u8NotAvailableSlots);
	}
	else	printf("No seleccionó ningun sector valido \n");
}
void ShowEarnedMoney ( tenParkingSectors enCurrentSector , uint8 u8ToSaveAddCarToOtherFuncion)
{
	uint8 u8ToShowMoney=0;
	if(enCurrentSector==0 || enCurrentSector==1 || enCurrentSector==2 || enCurrentSector==3 || enCurrentSector==4)
	{
		if(u8ToSaveAddCarToOtherFuncion>=1 )
		{
			u8ToShowMoney = ( u8ToSaveAddCarToOtherFuncion* PRISE);
			printf("En el sector %d hay %d pesos\n",enCurrentSector,u8ToShowMoney );
		}
		
		else printf("En el sector %d no hay ingresos\n", enCurrentSector);
	}
	else 	printf("No seleccionó ningun sector valido \n");
}
uint8 u8AddCarToSector( tenParkingSectors enCurrentSector )
{
	uint8 u8ToSaveAddCar=0;
	if(enCurrentSector==0||enCurrentSector==1||enCurrentSector==2||enCurrentSector==3||enCurrentSector==4)
	{
		if(astMyParks[enCurrentSector].u8AvailableSlots!= 0)
		{
			astMyParks[enCurrentSector].u8AvailableSlots--;
			astMyParks[enCurrentSector].u8NotAvailableSlots++;
			u8ToSaveAddCar = astMyParks[enCurrentSector].u8AvailableSlots;
		}
		else printf("No hay espacios disponibles en el sector %d \n",enCurrentSector );
	}
	printf("\nSe selecciono el sector %d",enCurrentSector);
	return u8ToSaveAddCar;
}
uint8 u8RemoveCarFromSector( tenParkingSectors enCurrentSector )
{
	uint8 u8ToSaveRemoveCar=0;
	if(enCurrentSector==0||enCurrentSector==1||enCurrentSector==2||enCurrentSector==3||enCurrentSector==4)
	{
		if(astMyParks[enCurrentSector].u8AvailableSlots!= 0)
		{
			if(astMyParks[enCurrentSector].u8NotAvailableSlots>0)
			{
				astMyParks[enCurrentSector].u8AvailableSlots++;
				astMyParks[enCurrentSector].u8NotAvailableSlots--;
				u8ToSaveRemoveCar = astMyParks[enCurrentSector].u8AvailableSlots;
			}
			else printf("No hay carros que remover en el sector %d \n",enCurrentSector );
		}
		else printf("No hay carros que remover en el sector %d \n",enCurrentSector );
	}
	
	return u8ToSaveRemoveCar;
}
void u8ImportPaymentOfSlot( tenParkingSectors enCurrentSector )
{
	if(enCurrentSector==0 || enCurrentSector==1 || enCurrentSector==2 || enCurrentSector==3 || enCurrentSector==4)
	{
		if(astMyParks[enCurrentSector].u8NotAvailableSlots != 0)
		{
			printf("En el sector %d hay esta su vehiculo, gracias por confiar por nosotros, aqui tiene su recibo.\n",enCurrentSector);
		}
		
		else printf("En el sector %d no hay vehiculos.\n", enCurrentSector);
	}
	else	printf("No seleccionó ningun sector valido \n");

}