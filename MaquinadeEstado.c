#include "MaquinadeEstado.h"

void main (void)
{
	uint8 end = Continue,variableparaespera=Inicio,variableparaubicacion;

	uint8 variableparaAlcoholorCoctel=Inicio,variableparaAlcoholesPuros=Inicio,variableparaCocteles=Inicio,variableparaCoctelesfinal=Inicio;
	uint8 variableparasalirdewhile1=Inicio,variableparasalirdewhile2=Inicio,variableparasalirdewhile3=Inicio,variableparasalirdewhile4=Inicio;
	
	uint8 ltsderon=MAX,ltsdevodka=MAX,ltsdetequila=MAX,ltsdeginebra=MAX,ltsdelimon=MAX,ltsdenaranja=MAX,ltsdepina=MAX,ltsdefresa=MAX,ltsdearandono=MAX;
	uint8 ltsdetriple=MAX,ltsdecoca=MAX,ltsdecoco=MAX,ltsdesangria=MAX,ltsdetoronja=MAX,ltsdegranadina=MAX,ltsdevermut=MAX,ltsdecrema=MAX;

	uint8 arreglodebebidas[18]={Inicio,ron,vodka,tequila,ginebra,limon,naranja,pina,fresa,arandano,triple,coco,coca,sangria,toronja,granadina,vermut,crema};
	
	listadoparaopciones variableparaopcion=alcoholpuro;
	listadoparaAlcoholesPuro variablelistado = ron;
	listadopararon variablelistadoron=Mojito;
	listadoparavodka variablelistadovodka=Cosmopolitan;
	listadoparatequila variablelistadotequila=Vampiro;
	listadoparaginebra variablelistadoginebra=Martini;

	while (end==Continue)
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
		variableparaopcion=variableparaAlcoholorCoctel;
		switch(variableparaopcion)
		{
			case alcoholpuro:
				while(variableparasalirdewhile2==Inicio)
				{
					printf("Usted selecciono Alcohol Puro, las opciones son las siguientes:\n1)Ron\n2)Vodka\n3)Tequila\n4)Ginebra\n\nSeleccione opcion: ");
					scanf("%d",&variableparaAlcoholesPuros);
					if(variableparaAlcoholesPuros==1 | variableparaAlcoholesPuros==2 | variableparaAlcoholesPuros==3 | variableparaAlcoholesPuros==4)	variableparasalirdewhile2++;
					else printf("Seleccione una opcion valida\n");
				}
				variablelistado=variableparaAlcoholesPuros;
				system("cls");
				switch(variablelistado)
				{
					case ron:
						variableparaubicacion=arreglodebebidas[ron];
						printf("Usted selecciono la opcion Ron.\nEl vaso se movera %d espacios para ser llenado\n",ron);
						ltsderon--;
						delay(variableparaespera);
					break;
					case vodka:
						variableparaubicacion=arreglodebebidas[vodka];
						printf("Usted selecciono la opcion Vodka.\nEl vaso se movera %d espacios para ser llenado\n",vodka);
						ltsdevodka--;
						delay(variableparaespera);
					break;
					case tequila:
						variableparaubicacion=arreglodebebidas[tequila];
						printf("Usted selecciono la opcion Tequila.\nEl vaso se movera %d espacios para ser llenado\n",tequila);
						ltsdetequila--;
						delay(variableparaespera);
					break;
					case ginebra:
						variableparaubicacion=arreglodebebidas[ginebra];
						printf("Usted selecciono la opcion Ginebra.\nEl vaso se movera %d espacios para ser llenado\n",ginebra);
						ltsdeginebra--;
						delay(variableparaespera);
					break;
				}
			break;
			case cocteles:
				while(variableparasalirdewhile3==Inicio)
				{
					printf("Usted selecciono Cocteles, los alcholes bases son los siguientes:\n1)Ron\n2)Vodka\n3)Tequila\n4)Ginebra\n\nSeleccione opcion: ");
					scanf("%d",&variableparaCocteles);
					if(variableparaCocteles==1 | variableparaCocteles==2 | variableparaCocteles==3 | variableparaCocteles==4)	variableparasalirdewhile3++;
					else printf("Seleccione una opcion valida\n");
				}
				variablelistado=variableparaCocteles;
				system("cls");
				switch(variablelistado)
				{
					case ron:
						while(variableparasalirdewhile4==Inicio)
						{
							printf("Los cocteles que le ofresemos son los siguinetes:\n1)Mojito\n2)Mai Tai\n3)Caipirinha\n4)Daiquiri\n5)Pina Colada\nSeleccione que desea: ");
							scanf("%d",&variableparaCoctelesfinal);
							if(variableparaCoctelesfinal==1|variableparaCoctelesfinal==2|variableparaCoctelesfinal==3|variableparaCoctelesfinal==4|variableparaCoctelesfinal==5)	variableparasalirdewhile4++;
							else printf("Seleccione una opcion valida\n");
						}
						variablelistadoron=variableparaCoctelesfinal;
						switch(variablelistadoron)
						{
							case Mojito: FMojito(variableparaubicacion,arreglodebebidas,variableparaespera,ltsderon,ltsdelimon);
							break;
							case Maitai: FMaiTai(variableparaubicacion,arreglodebebidas,variableparaespera,ltsderon,ltsdelimon,ltsdenaranja,ltsdepina,ltsdetriple);
							break;
							case Caiprinha:	FCaipirinha(variableparaubicacion,arreglodebebidas,variableparaespera,ltsderon,ltsdelimon,ltsdepina,ltsdetriple);
							break;
							case Daiquiri: FDaiquiri(variableparaubicacion,arreglodebebidas,variableparaespera,ltsderon,ltsdelimon,ltsdefresa);
							break;
							case Pinacolada:	FPinaColada(variableparaubicacion,arreglodebebidas,variableparaespera,ltsderon,ltsdecoco,ltsdecrema,ltsdepina);
							break;
						}	
					break;
					case vodka:
						while(variableparasalirdewhile4==Inicio)
						{
							printf("Los cocteles que le ofresemos son los siguinetes:\n1)Cosmopolitan\n2)Long Island Ice Tea\n3)Vodka jelly\n4)Amanecer moscovita\n5)Bloody Mary\nSeleccione que desea: ");
							scanf("%d",&variableparaCoctelesfinal);
							if(variableparaCoctelesfinal==1|variableparaCoctelesfinal==2|variableparaCoctelesfinal==3|variableparaCoctelesfinal==4|variableparaCoctelesfinal==5)	variableparasalirdewhile4++;
							else printf("Seleccione una opcion valida\n");
						}
						variablelistadovodka=variableparaCoctelesfinal;
						switch(variablelistadovodka)
						{	
							case Cosmopolitan: FCosmopolitan(variableparaubicacion,arreglodebebidas,variableparaespera,ltsdevodka,ltsdearandono,ltsdelimon);
							break;
							case Longislandicetea: FLongIslandIceTea(variableparaubicacion,arreglodebebidas,variableparaespera,ltsdevodka,ltsdetequila,ltsdeginebra,ltsderon,ltsdetriple,ltsdecoca);
							break;
							case vodkajelly: FVodkajelly(variableparaubicacion,arreglodebebidas,variableparaespera,ltsdevodka,ltsdelimon,ltsdefresa);
							break;
							case Amanecermoscovita: FAmanecermoscovita(variableparaubicacion,arreglodebebidas,variableparaespera,ltsdevodka,ltsdelimon);
							break;
							case BloddyMary: FBloodyMary(variableparaubicacion,arreglodebebidas,variableparaespera,ltsdevodka,ltsdefresa);
							break;
						}	
					break;
					case tequila:
						while(variableparasalirdewhile4==Inicio)
						{
							printf("Los cocteles que le ofresemos son los siguinetes:\n1)Vampiro\n2)Paloma\n3)Chistosita\n4)Sunrise\n5)Margarita\nSeleccione que desea: ");
							scanf("%d",&variableparaCoctelesfinal);
							if(variableparaCoctelesfinal==1|variableparaCoctelesfinal==2|variableparaCoctelesfinal==3|variableparaCoctelesfinal==4|variableparaCoctelesfinal==5)	variableparasalirdewhile4++;
							else printf("Seleccione una opcion valida\n");
						}
						variablelistadotequila=variableparaCoctelesfinal;
						switch(variablelistadotequila)
						{
							case Vampiro: FVampiro(variableparaubicacion,arreglodebebidas,variableparaespera,ltsdetequila, ltsdelimon,ltsdesangria,ltsdecoca);
							break;
							case Paloma: FPaloma(variableparaubicacion,arreglodebebidas,variableparaespera,ltsdetequila,ltsdelimon,ltsdecoca);
							break;
							case Chistosita: FChistosita(variableparaubicacion,arreglodebebidas,variableparaespera,ltsdetequila,ltsdetoronja);
							break;
							case Sunrise: FSunrise(variableparaubicacion,arreglodebebidas,variableparaespera,ltsdetequila,ltsdenaranja,ltsdegranadina);
							break;
							case Margarita: FMargarita(variableparaubicacion,arreglodebebidas,variableparaespera,ltsdetequila,ltsdelimon);
							break;
						}	
					break;
					case ginebra:
						while(variableparasalirdewhile4==Inicio)
						{
							printf("Los cocteles que le ofresemos son los siguinetes:\n1)Martini\n2)Angel Caido\n3)Madre de la novia\n4)Aurora dorada\n5)Bola de nieve\nSeleccione que desea: ");
							scanf("%d",&variableparaCoctelesfinal);
							if(variableparaCoctelesfinal==1|variableparaCoctelesfinal==2|variableparaCoctelesfinal==3|variableparaCoctelesfinal==4|variableparaCoctelesfinal==5)	variableparasalirdewhile4++;
							else printf("Seleccione una opcion valida\n");
						}
						variablelistadoginebra=variableparaCoctelesfinal;
						switch(variablelistadoginebra)
						{
							case Martini: FMartini(variableparaubicacion,arreglodebebidas,variableparaespera,  ltsdeginebra,  ltsdevermut);
							break;
							case AngelCaido: FAngelCaido(variableparaubicacion,arreglodebebidas,variableparaespera,  ltsdeginebra,  ltsdelimon,  ltsdecrema);
							break;
							case MadreLaNovia: FMadredelanovia(variableparaubicacion,arreglodebebidas,variableparaespera,  ltsdeginebra,  ltsdenaranja,  ltsdefresa);
							break;
							case Auroradorada: FAuroradorada(variableparaubicacion,arreglodebebidas,variableparaespera,  ltsdeginebra,  ltsdegranadina,  ltsdetriple);
							break;
							case Boladenieve:FBoladenieve(variableparaubicacion,arreglodebebidas,variableparaespera,  ltsdeginebra,  ltsdecrema,  ltsdelimon,  ltsdenaranja);
							break;
						}	
					break;
				}
			break;
		}
		printf("Se recorera el soporte del vaso al inicio\n");
		delay(variableparaespera);
		delay(variableparaespera);
		variableparaAlcoholorCoctel=Inicio;
		variableparaAlcoholesPuros=Inicio;
		variableparaCocteles=Inicio;
		variableparaCoctelesfinal=Inicio;
		variableparasalirdewhile1=Inicio;
		variableparasalirdewhile2=Inicio;
		variableparasalirdewhile3=Inicio;
		variableparasalirdewhile4=Inicio;
		variableparaubicacion=arreglodebebidas[Inicio];
		printf("\n\nUbicacion del vaso : %d\n",variableparaubicacion);		
		delay(variableparaespera);
		//agregar el if de si se acaba y rellenar
			if(ltsderon==0)
			{
				printf("Se acabo el Ron, porfavor llenar de nuevo.\n");
				ltsderon=MAX;
			}
			else if(ltsdevodka==0)
			{
				printf("Se acabo el Vodka, porfavor llenar de nuevo.\n");
				ltsdevodka=MAX;
			}
			else if(ltsdetequila==0)
			{
				printf("Se acabo el Tequila, porfavor llenar de nuevo.\n");
				ltsdetequila=MAX;
			}
			else if(ltsdeginebra==0)
			{
				printf("Se acabo el Ginebra, porfavor llenar de nuevo.\n");
				ltsdeginebra=MAX;
			}
			else if(ltsdelimon==0)
			{
				printf("Se acabo el zumo de limon, porfavor llenar de nuevo.\n");
				ltsdelimon=MAX;
			}
			else if(ltsdenaranja==0)
			{
				printf("Se acabo el zumo de naranja, porfavor llenar de nuevo.\n");
				ltsdenaranja=MAX;
			}
			else if(ltsdepina==0)
			{
				printf("Se acabo el zumo de pina, porfavor llenar de nuevo.\n");
				ltsdepina=MAX;
			}
			else if(ltsdefresa==0)
			{
				printf("Se acabo el zumo de fresa, porfavor llenar de nuevo.\n");
				ltsdefresa=MAX;
			}
			else if(ltsdearandono==0)
			{
				printf("Se acabo el zumo de arandano, porfavor llenar de nuevo.\n");
				ltsdearandono=MAX;
			}
			else if(ltsdetriple==0)
			{
				printf("Se acabo el triple seco, porfavor llenar de nuevo.\n");
				ltsdetriple=MAX;
			}
			else if(ltsdecoca==0)
			{
				printf("Se acabo el Refresco de coca, porfavor llenar de nuevo.\n");
				ltsdecoca=MAX;
			}
			else if(ltsdecoco==0)
			{
				printf("Se acabo el zumo de coco, porfavor llenar de nuevo.\n");
				ltsdecoco=MAX;
			}
			else if(ltsdesangria==0)
			{
				printf("Se acabo la sangria, porfavor llenar de nuevo.\n");
				ltsdesangria=MAX;
			}
			else if(ltsdetoronja==0)
			{
				printf("Se acabo el Refresco de toronja, porfavor llenar de nuevo.\n");
				ltsdetoronja=MAX;
			}
			else if(ltsdegranadina==0)
			{
				printf("Se acabo la granadina, porfavor llenar de nuevo.\n");
				ltsdegranadina=MAX;
			}
			else if(ltsdevermut==0)
			{
				printf("Se acabo el vermut seco, porfavor llenar de nuevo.\n");
				ltsdevermut=MAX;
			}
			else if(ltsdecrema==0)
			{
				printf("Se acabo la crema, porfavor llenar de nuevo.\n");
				ltsdecrema=MAX;
			}
			else {/*nothing*/}	

			delay(variableparaespera);
			delay(variableparaespera);
	
	}
}

void FMojito(uint8 variableparaubicacion,uint8 arreglodebebidas[],uint8 variableparaespera,uint8 ltsderon, uint8 ltsdelimon)
{
	printf("Usted selecciono la opcion Mojito.\nEl vaso se movera %d espacio para ser llenado\n",ron);
	ltsderon--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[ron];
	printf("El vaso se movera al espacio %d para ser llenado con limon\n",limon);
	ltsdelimon--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[limon];
}
void FMaiTai(uint8 variableparaubicacion,uint8 arreglodebebidas[],uint8 variableparaespera, uint8 ltsderon, uint8 ltsdelimon, uint8 ltsdenaranja, uint8 ltsdepina, uint8 ltsdetriple)
{
	printf("Usted selecciono la opcion Mai Tai.\nEl vaso se movera %d espacio para ser llenado\n",ron);
	ltsderon--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[ron];
	printf("El vaso se movera al espacio %d para ser llenado con limon\n",limon);
	ltsdelimon--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[limon]; 
	printf("El vaso se movera al espacio %d para ser llenado con naranja\n",naranja);
	ltsdenaranja--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[naranja]; 
	printf("El vaso se movera al espacio %d para ser llenado con pina\n",pina);
	ltsdepina--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[pina]; 
	printf("El vaso se movera al espacio %d para ser llenado con triple seco\n",triple);
	ltsdetriple--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[triple]; 
}
void FCaipirinha(uint8 variableparaubicacion,uint8 arreglodebebidas[],uint8 variableparaespera, uint8 ltsderon, uint8 ltsdelimon, uint8 ltsdepina, uint8 ltsdetriple)
{
	printf("Usted selecciono la opcion Caipirinha.\nEl vaso se movera %d espacio para ser llenado\n",ron);
	ltsderon--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[ron];
	printf("El vaso se movera al espacio %d para ser llenado con limon\n",limon);
	ltsdelimon--; 
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[limon];
	printf("El vaso se movera al espacio %d para ser llenado con pina\n",pina);
	ltsdepina--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[pina];
	printf("El vaso se movera al espacio %d para ser llenado con triple seco\n",triple);
	ltsdetriple--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[triple];
}
void FDaiquiri(uint8 variableparaubicacion,uint8 arreglodebebidas[],uint8 variableparaespera, uint8 ltsderon, uint8 ltsdelimon, uint8 ltsdefresa)
{
	printf("Usted selecciono la opcion Daiquiri.\nEl vaso se movera %d espacio para ser llenado\n",ron);
	ltsderon--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[ron];
	printf("El vaso se movera al espacio %d para ser llenado con limon\n",limon);
	ltsdelimon--; 
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[limon];
	printf("El vaso se movera al espacio %d para ser llenado con fresa\n",fresa);
	ltsdefresa--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[fresa];
}
void FPinaColada(uint8 variableparaubicacion,uint8 arreglodebebidas[],uint8 variableparaespera, uint8 ltsderon, uint8 ltsdecoco, uint8 ltsdecrema, uint8 ltsdepina)
{
	printf("Usted selecciono la opcion Pina Colada.\nEl vaso se movera %d espacio para ser llenado\n",ron);
	ltsderon--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[ron];
	printf("El vaso se movera al espacio %d para ser llenado con coco\n",coco);
	ltsdecoco--;
	delay(variableparaespera); 
	variableparaubicacion=arreglodebebidas[coco];
	printf("El vaso se movera al espacio %d para ser llenado con crema\n",crema);
	ltsdecrema--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[crema];
	printf("El vaso se movera al espacio %d para ser llenado con pina\n",pina);
	ltsdepina--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[pina];
}
void FCosmopolitan(uint8 variableparaubicacion,uint8 arreglodebebidas[],uint8 variableparaespera, uint8 ltsdevodka, uint8 ltsdearandono, uint8 ltsdelimon)
{
	printf("Usted selecciono la opcion Cosmopolitan.\nEl vaso se movera %d espacio para ser llenado\n",vodka);
	ltsdevodka--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[vodka];
	printf("El vaso se movera al espacio %d para ser llenado con arandano\n",arandano);
	ltsdearandono--; 
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[arandano];
	printf("El vaso se movera al espacio %d para ser llenado con limon\n",limon);
	ltsdelimon--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[limon];
}
void FLongIslandIceTea (uint8 variableparaubicacion,uint8 arreglodebebidas[],uint8 variableparaespera,uint8 ltsdevodka, uint8 ltsdetequila, uint8 ltsdeginebra, uint8 ltsderon, uint8 ltsdetriple, uint8 ltsdecoca)
{
	printf("Usted selecciono la opcion Long Is land IceTea.\nEl vaso se movera %d espacio para ser llenado\n",vodka);
	ltsdevodka--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[vodka];
	printf("El vaso se movera al espacio %d para ser llenado con tequila\n",tequila);
	ltsdetequila--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[tequila];
	printf("El vaso se movera al espacio %d para ser llenado con ginebra\n",ginebra); 
	ltsdeginebra--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[ginebra];
	printf("El vaso se movera al espacio %d para ser llenado con ron\n",ron);
	ltsderon--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[ron];
	printf("El vaso se movera al espacio %d para ser llenado con triple\n",triple);
	ltsdetriple--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[triple];
	printf("El vaso se movera al espacio %d para ser llenado con coca\n",coca);
	ltsdecoca--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[coca];
}
void FVodkajelly(uint8 variableparaubicacion,uint8 arreglodebebidas[],uint8 variableparaespera, uint8 ltsdevodka, uint8 ltsdelimon, uint8 ltsdefresa)
{ 
	printf("Usted selecciono la opcion Vodka jelly.\nEl vaso se movera %d espacio para ser llenado\n",vodka);
	ltsdevodka--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[vodka];
	printf("El vaso se movera al espacio %d para ser llenado con limon\n",limon); 
	ltsdelimon--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[limon];
	printf("El vaso se movera al espacio %d para ser llenado con fresa\n",fresa);
	ltsdefresa--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[fresa];
}
void FAmanecermoscovita(uint8 variableparaubicacion,uint8 arreglodebebidas[],uint8 variableparaespera, uint8 ltsdevodka, uint8 ltsdelimon)
{
	printf("Usted selecciono la opcion Amanecer moscovita.\nEl vaso se movera %d espacio para ser llenado\n",vodka);
	ltsdevodka--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[vodka];
	printf("El vaso se movera al espacio %d para ser llenado con limon\n",limon); 
	ltsdelimon--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[limon];
}
void FBloodyMary(uint8 variableparaubicacion,uint8 arreglodebebidas[],uint8 variableparaespera, uint8 ltsdevodka, uint8 ltsdefresa)
{
	printf("Usted selecciono la opcion Bloody Mary.\nEl vaso se movera %d espacio para ser llenado\n",vodka);
	ltsdevodka--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[vodka];
	printf("El vaso se movera al espacio %d para ser llenado con fresa\n",fresa); 
	ltsdefresa--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[fresa];
}
void FVampiro(uint8 variableparaubicacion,uint8 arreglodebebidas[],uint8 variableparaespera, uint8 ltsdetequila, uint8 ltsdelimon, uint8 ltsdesangria, uint8 ltsdecoca)
{
	printf("Usted selecciono la opcion Vampiro.\nEl vaso se movera %d espacio para ser llenado\n",tequila);
	ltsdetequila--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[tequila];
	printf("El vaso se movera al espacio %d para ser llenado con limon\n",limon);
	ltsdelimon--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[limon];
	printf("El vaso se movera al espacio %d para ser llenado con sangria\n",sangria);
	ltsdesangria--; 
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[sangria];
	printf("El vaso se movera al espacio %d para ser llenado con coca\n",coca);
	ltsdecoca--; 
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[coca];
}
void FPaloma(uint8 variableparaubicacion,uint8 arreglodebebidas[],uint8 variableparaespera, uint8 ltsdetequila, uint8 ltsdelimon, uint8 ltsdecoca)
{
	printf("Usted selecciono la opcion Paloma.\nEl vaso se movera %d espacio para ser llenado\n",tequila);
	ltsdetequila--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[tequila];
	printf("El vaso se movera al espacio %d para ser llenado con limon\n",limon); 
	ltsdelimon--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[limon];
	printf("El vaso se movera al espacio %d para ser llenado con coca\n",coca);
	ltsdecoca--; 
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[coca];
}
void FChistosita(uint8 variableparaubicacion,uint8 arreglodebebidas[],uint8 variableparaespera, uint8 ltsdetequila, uint8 ltsdetoronja)
{
	printf("Usted selecciono la opcion Chistosita.\nEl vaso se movera %d espacio para ser llenado\n",tequila);
	ltsdetequila--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[tequila];
	printf("El vaso se movera al espacio %d para ser llenado con toronja\n",toronja);
	ltsdetoronja--; 
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[toronja];
}
void FSunrise(uint8 variableparaubicacion,uint8 arreglodebebidas[],uint8 variableparaespera, uint8 ltsdetequila, uint8 ltsdenaranja, uint8 ltsdegranadina)
{
	printf("Usted selecciono la opcion Sunrise.\nEl vaso se movera %d espacio para ser llenado\n",tequila);
	ltsdetequila--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[tequila];
	printf("El vaso se movera al espacio %d para ser llenado con naranja\n",naranja); 
	ltsdenaranja--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[naranja];
	printf("El vaso se movera al espacio %d para ser llenado con granadina\n",granadina);
	ltsdegranadina--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[granadina];
}
void FMargarita	(uint8 variableparaubicacion,uint8 arreglodebebidas[],uint8 variableparaespera, uint8 ltsdetequila, uint8 ltsdelimon)
{
	printf("Usted selecciono la opcion Margarita.\nEl vaso se movera %d espacio para ser llenado\n",tequila);
	ltsdetequila--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[tequila];
	printf("El vaso se movera al espacio %d para ser llenado con limon\n",limon); 
	ltsdelimon--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[limon];
}
void FMartini(uint8 variableparaubicacion,uint8 arreglodebebidas[],uint8 variableparaespera, uint8 ltsdeginebra, uint8 ltsdevermut)
{
	printf("Usted selecciono la opcion Martini.\nEl vaso se movera %d espacio para ser llenado\n",ginebra);
	ltsdeginebra--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[ginebra];
	printf("El vaso se movera al espacio %d para ser llenado con vermut\n",vermut);
	ltsdevermut--; 
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[vermut];
}
void FAngelCaido(uint8 variableparaubicacion,uint8 arreglodebebidas[],uint8 variableparaespera, uint8 ltsdeginebra, uint8 ltsdelimon, uint8 ltsdecrema)
{
	printf("Usted selecciono la opcion Martini.\nEl vaso se movera %d espacio para ser llenado\n",ginebra);
	ltsdeginebra--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[ginebra];
	printf("El vaso se movera al espacio %d para ser llenado con limon\n",limon);
	ltsdelimon--; 
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[limon];
	printf("El vaso se movera al espacio %d para ser llenado con crema\n",crema);
	ltsdecrema--; 
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[crema];
}
void FMadredelanovia(uint8 variableparaubicacion,uint8 arreglodebebidas[],uint8 variableparaespera, uint8 ltsdeginebra, uint8 ltsdenaranja, uint8 ltsdefresa)
{
	printf("Usted selecciono la opcion Martini.\nEl vaso se movera %d espacio para ser llenado\n",ginebra);
	ltsdeginebra--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[ginebra];
	printf("El vaso se movera al espacio %d para ser llenado con naranja\n",naranja); 
	ltsdenaranja--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[naranja];
	printf("El vaso se movera al espacio %d para ser llenado con fresa\n",fresa); 
	ltsdefresa--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[fresa];
}
void FAuroradorada(uint8 variableparaubicacion,uint8 arreglodebebidas[],uint8 variableparaespera, uint8 ltsdeginebra, uint8 ltsdegranadina, uint8 ltsdetriple)
{
	printf("Usted selecciono la opcion Martini.\nEl vaso se movera %d espacio para ser llenado\n",ginebra);
	ltsdeginebra--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[ginebra];
	printf("El vaso se movera al espacio %d para ser llenado con granadina\n",granadina); 
	ltsdegranadina--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[granadina];
	printf("El vaso se movera al espacio %d para ser llenado con triple seco\n",triple); 
	ltsdetriple--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[triple];
}
void FBoladenieve(uint8 variableparaubicacion,uint8 arreglodebebidas[],uint8 variableparaespera, uint8 ltsdeginebra, uint8 ltsdecrema, uint8 ltsdelimon, uint8 ltsdenaranja)
{
	printf("Usted selecciono la opcion Martini.\nEl vaso se movera %d espacio para ser llenado\n",ginebra);
	ltsdeginebra--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[ginebra];
	printf("El vaso se movera al espacio %d para ser llenado con crema\n",crema);
	ltsdecrema--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[crema];
	printf("El vaso se movera al espacio %d para ser llenado con limon\n",limon); 
	ltsdelimon--;
	delay(variableparaespera);
	variableparaubicacion=arreglodebebidas[limon];
	printf("El vaso se movera al espacio %d para ser llenado con naranja\n",naranja);
	ltsdenaranja--;
	delay(variableparaespera); 
	variableparaubicacion=arreglodebebidas[naranja];
}
void delay(uint8 variableparaespera)
{
	for(variableparaespera=Inicio;variableparaespera<=tiempo;variableparaespera++){}
}
