#include <stdio.h>
#include <GENFUN.h>

void main()
{
	printf("hello");
}

void GENFUN_vCapsOn (unit *pu8Src, unit8 u8SizeOfList)
{
	while ( u8SizeOfList != 0 )
	{
		if( *pu8Src > ASCII_LOW_THRESHOLD_OFF_OFF_ON && *pu8Src	< ASCII_HIGH_THRESHOLD_OFF_OFF_ON)
		{
			*pu8Src =ASCII_CONVERTION_FACTOR;
		}
		else
		{
			/*Nothing to do*/
		}
		pu8Src++;
		u8SizeOfList--;
	}
}

void GENFUN_u8GetOccurence (uint8 *pu8Src, uint8 u8Target, uint8 u8SizeOfList)
{
	
}
