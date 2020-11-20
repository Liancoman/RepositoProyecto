#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <time.h>

typedef unsigned int uint8;

#define Inicio 0

void main (void)
{
	uint8 end =Inicio;
	uint8 variableparaAlcoholorCoctel=Inicio;
	uint8 variableparaAlcoholesPuros=Inicio;
	uint8 variableparaCocteles=Inicio;
	uint8 variableparaCoctelesfinal=Inicio;
	uint8 variableparasalirdewhile1=Inicio;
	uint8 variableparasalirdewhile2=Inicio;
	uint8 variableparasalirdewhile3=Inicio;
	uint8 variableparasalirdewhile4=Inicio;
	while (end==Inicio)
	{
		system("cls");
		while(variableparasalirdewhile1==Inicio)
		{
			system("cls");
			printf("Seleccione que opcion desea.\n1)Alcohol Puro\n2)Coctel\nR: ");
			scanf("%d",&variableparaAlcoholorCoctel);
			if(variableparaAlcoholorCoctel==1 | variableparaAlcoholorCoctel==2)	variableparasalirdewhile1++;
			else printf("Seleccione una opcion valida\n");
		}
		switch(variableparaAlcoholorCoctel)
		{
			case 1:
			while(variableparasalirdewhile2==Inicio)
			{
				printf("Usted selecciono Alcohol Puro, las opciones son las siguientes:\n1)Ron\n2)Vodka\n3)Tequila\n4)Ginebra\n\nSeleccione opcion: ");
				scanf("%d",&variableparaAlcoholesPuros);
				if(variableparaAlcoholesPuros==1 | variableparaAlcoholesPuros==2 | variableparaAlcoholesPuros==3 | variableparaAlcoholesPuros==4)	variableparasalirdewhile2++;
				else printf("Seleccione una opcion valida\n");
			}
			system("cls");
			switch(variableparaAlcoholesPuros)
			{
				case 1:
				printf("Usted selecciono la opcion Ron.\n" );
				break;
				case 2:
				printf("Usted selecciono la opcion Vodka.\n" );
				break;
				case 3:
				printf("Usted selecciono la opcion Tequila.\n" );
				break;
				case 4:
				printf("Usted selecciono la opcion Ginebra.\n");
				break;
			}
			break;

			case 2:
			while(variableparasalirdewhile3==Inicio)
			{
			printf("Usted selecciono Cocteles, los alcholes bases son los siguientes:\n1)Ron\n2)Vodka\n3)Tequila\n4)Ginebra\n\nSeleccione opcion: ");
			scanf("%d",&variableparaCocteles);
			if(variableparaCocteles==1 | variableparaCocteles==2 | variableparaCocteles==3 | variableparaCocteles==4)	variableparasalirdewhile3++;
			else printf("Seleccione una opcion valida\n");
			}
			system("cls");
			switch(variableparaCocteles)
			{
				case 1:
					while(variableparasalirdewhile4==Inicio)
					{
					printf("Los cocteles que le ofresemos son los siguinetes:\n1)Mojito\n2)Mai Tai\n3)Caipirinha\n4)Daiquiri\n5)Piña Colada\nSeleccione que desea: ");
					scanf("%d",&variableparaCoctelesfinal);
					if(variableparaCoctelesfinal==1|variableparaCoctelesfinal==2|variableparaCoctelesfinal==3|variableparaCoctelesfinal==4|variableparaCoctelesfinal==5)	variableparasalirdewhile4++;
					else printf("Seleccione una opcion valida\n");
					}
				break;
				case 2:
					while(variableparasalirdewhile4==Inicio)
					{
					printf("Los cocteles que le ofresemos son los siguinetes:\n1)Cosmopolitan\n2)Long Island Ice Tea\n3)Vodka jelly\n4)Amanecer moscovita\n5)Bloody Mary\nSeleccione que desea: ");
					scanf("%d",&variableparaCoctelesfinal);
					if(variableparaCoctelesfinal==1|variableparaCoctelesfinal==2|variableparaCoctelesfinal==3|variableparaCoctelesfinal==4|variableparaCoctelesfinal==5)	variableparasalirdewhile4++;
					else printf("Seleccione una opcion valida\n");
					}

				break;
				case 3:
					while(variableparasalirdewhile4==Inicio)
					{
					printf("Los cocteles que le ofresemos son los siguinetes:\n1)Vampiro\n2)Paloma\n3)Chistosita\n4)Sunrise\n5)Margarita\nSeleccione que desea: ");
					scanf("%d",&variableparaCoctelesfinal);
					if(variableparaCoctelesfinal==1|variableparaCoctelesfinal==2|variableparaCoctelesfinal==3|variableparaCoctelesfinal==4|variableparaCoctelesfinal==5)	variableparasalirdewhile4++;
					else printf("Seleccione una opcion valida\n");
					}
				break;
				case 4:
					while(variableparasalirdewhile4==Inicio)
					{
					printf("Los cocteles que le ofresemos son los siguinetes:\n1)Martini\n2)Angel Caido\n3)Madre de la novia\n4)Aurora dorada\n5)Bola de nieve\nSeleccione que desea: ");
					scanf("%d",&variableparaCoctelesfinal);
					if(variableparaCoctelesfinal==1|variableparaCoctelesfinal==2|variableparaCoctelesfinal==3|variableparaCoctelesfinal==4|variableparaCoctelesfinal==5)	variableparasalirdewhile4++;
					else printf("Seleccione una opcion valida\n");
					}
				break;
			}
			break;
		}
		printf("Desea otra bebida?\n0)Si\n1)No\n");
		scanf("%d",&end);
		if(end==Inicio)
		{
			variableparaAlcoholorCoctel=Inicio;
			variableparaAlcoholesPuros=Inicio;
			variableparaCocteles=Inicio;
			variableparaCoctelesfinal=Inicio;
			variableparasalirdewhile1=Inicio;
			variableparasalirdewhile2=Inicio;
			variableparasalirdewhile3=Inicio;
			variableparasalirdewhile4=Inicio;
		}
	}
}



/*
	Ron
		1)Mojito				zumo de limón
		2)Mai Tai				zumo de naranja, piña, limón y triple sec
		3)Caipirinha			zumo de limón, piña y triple sec
		4)Daiquiri				zumo de limón y fresa
		5)Piña Colada			coco, crema y jugo de piña
	Vodka
		1)Cosmopolitan	 		zumo de arándano y limón
		2)Long Island Ice Tea 	Vodka, tequila, ginebra, ron, triple sec, y Refresco 
		3)Vodka jelly			zumo de limón y fresa
		4)Amanecer moscovita
		5)Bloody Mary
	Tequila 
		1)Vampiro				zumo de limón, sangrita y Refresco.
		2)Paloma	  			zumo de limón y Refresco
		3)Chistosita			Refresco de toronja
		4)Sunrise 				zumo de naranja y granadina
		5)Margarita				zumo de limón
	Ginebra
		1)Martini				vermut seco
		2)Angel Caido
		3)Madre de la novia
		4)Aurora dorada
		5)Bola de nieve
*/