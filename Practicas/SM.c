#include "SM.h"
#include "BML.h"
void StatesMachine ( void )
{
	static CM_StateMachine enCurrentState = enTime;
	static uint16 u16BombA; 
	static uint16 u16BombB;
	static uint16 u16BombC; 
	static uint8 u8Confirm;
	static uint8 u8Contador=Reinicio; 
		switch ( enCurrentState )
		{
			case enTime:
				system("cls"); 
				printf("Assign the time for each bomb, time will execute in whole seconds. If time = 0 bomb won't be activated\n");
				printf("TIME FOR BOMB A: ");
				scanf("%d", &u16BombA);
				printf("TIME FOR BOMB B: ");
				scanf("%d", &u16BombB);
				printf("TIME FOR BOMB C: ");
				scanf("%d", &u16BombC);
				enCurrentState = enCheckTime;
			break;
			case enCheckTime: 
				printf("Do you want to change the time? 1)Yes 	2)No\nR= ");
				scanf("%d", &u8Confirm );
				if ( u8Confirm ==  YES )
				{
				    enCurrentState = enTime;  
				}
				else
				{
					enCurrentState = enExecute; 
				}
			break;
			case enExecute: 
			
				if ( u16BombA == 0 )
				{
					/*NOTHING TO DO*/
				}
				else 
				{
					u16BombA--;
					printf("Bomb A ACTIVE, time left %d seg\n", u16BombA);
				}
				if ( u16BombB == 0 )
				{
					/*NOTHING TO DO*/
				}
				else 
				{
					u16BombB--;
					printf("Bomb B ACTIVE, time left %d seg\n", u16BombB);
				}
				if ( u16BombC == 0 )
				{
					/*NOTHING TO DO*/
				}
				else 
				{
					u16BombC--;
					printf("Bomb C ACTIVE, time left %d seg\n", u16BombC);
				}

				if(u16BombA == 0 & u16BombB == 0 & u16BombC == 0)
				{
					printf("Se reiniciara todo en %d segundos\n",u8Contador);
					if(u8Contador==0)
					{
						enCurrentState = enTime;
					}
					else
					{
						u8Contador--;
					}
					
//contador 					
				}	
			break;
		}

		printf("\n"); 
	
}

