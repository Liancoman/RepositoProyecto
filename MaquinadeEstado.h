#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <time.h>

typedef unsigned int uint8;

#define Inicio 0
#define Continue 1
#define ron 1
#define vodka 2
#define tequila 3
#define ginebra  4
#define limon 5
#define naranja 6 
#define pina 7
#define fresa 8
#define arandano 9
#define triple 10
#define MAX 10
#define coco 11
#define coca 12
#define sangria 13
#define toronja 14
#define granadina 15
#define vermut 16
#define crema 17
#define tiempo 916219211

void FMojito(uint8 variableparaubicacion,uint8 arreglodebebidas[],uint8 variableparaespera,uint8 ltsderon, uint8 ltsdelimon);
void FMaiTai(uint8 variableparaubicacion,uint8 arreglodebebidas[],uint8 variableparaespera, uint8 ltsderon, uint8 ltsdelimon, uint8 ltsdenaranja, uint8 ltsdepina, uint8 ltsdetriple);
void FCaipirinha(uint8 variableparaubicacion,uint8 arreglodebebidas[],uint8 variableparaespera, uint8 ltsderon, uint8 ltsdelimon, uint8 ltsdepina, uint8 ltsdetriple);
void FDaiquiri(uint8 variableparaubicacion,uint8 arreglodebebidas[],uint8 variableparaespera, uint8 ltsderon, uint8 ltsdelimon, uint8 ltsdefresa);
void FPinaColada(uint8 variableparaubicacion,uint8 arreglodebebidas[],uint8 variableparaespera, uint8 ltsderon, uint8 ltsdecoco, uint8 ltsdecrema, uint8 ltsdepina);

void FCosmopolitan(uint8 variableparaubicacion,uint8 arreglodebebidas[],uint8 variableparaespera, uint8 ltsdevodka, uint8 ltsdearandono, uint8 ltsdelimon);
void FLongIslandIceTea(uint8 variableparaubicacion,uint8 arreglodebebidas[],uint8 variableparaespera,uint8 ltsdevodka, uint8 ltsdetequila, uint8 ltsdeginebra, uint8 ltsderon, uint8 ltsdetriple, uint8 ltsdecoca);
void FVodkajelly(uint8 variableparaubicacion,uint8 arreglodebebidas[],uint8 variableparaespera, uint8 ltsdevodka, uint8 ltsdelimon, uint8 ltsdefresa);
void FAmanecermoscovita(uint8 variableparaubicacion,uint8 arreglodebebidas[],uint8 variableparaespera, uint8 ltsdevodka, uint8 ltsdelimon);
void FBloodyMary(uint8 variableparaubicacion,uint8 arreglodebebidas[],uint8 variableparaespera, uint8 ltsdevodka, uint8 ltsdefresa);

void FVampiro(uint8 variableparaubicacion,uint8 arreglodebebidas[],uint8 variableparaespera, uint8 ltsdetequila, uint8 ltsdelimon, uint8 ltsdesangria, uint8 ltsdecoca);
void FPaloma(uint8 variableparaubicacion,uint8 arreglodebebidas[],uint8 variableparaespera, uint8 ltsdetequila, uint8 ltsdelimon, uint8 ltsdecoca);
void FChistosita(uint8 variableparaubicacion,uint8 arreglodebebidas[],uint8 variableparaespera, uint8 ltsdetequila, uint8 ltsdetoronja);
void FSunrise(uint8 variableparaubicacion,uint8 arreglodebebidas[],uint8 variableparaespera, uint8 ltsdetequila, uint8 ltsdenaranja, uint8 ltsdegranadina);
void FMargarita(uint8 variableparaubicacion,uint8 arreglodebebidas[],uint8 variableparaespera, uint8 ltsdetequila, uint8 ltsdelimon);

void FMartini(uint8 variableparaubicacion,uint8 arreglodebebidas[],uint8 variableparaespera, uint8 ltsdeginebra, uint8 ltsdevermut);
void FAngelCaido(uint8 variableparaubicacion,uint8 arreglodebebidas[],uint8 variableparaespera, uint8 ltsdeginebra, uint8 ltsdelimon, uint8 ltsdecrema);
void FMadredelanovia(uint8 variableparaubicacion,uint8 arreglodebebidas[],uint8 variableparaespera, uint8 ltsdeginebra, uint8 ltsdenaranja, uint8 ltsdefresa);
void FAuroradorada(uint8 variableparaubicacion,uint8 arreglodebebidas[],uint8 variableparaespera, uint8 ltsdeginebra, uint8 ltsdegranadina, uint8 ltsdetriple);
void FBoladenieve(uint8 variableparaubicacion,uint8 arreglodebebidas[],uint8 variableparaespera, uint8 ltsdeginebra, uint8 ltsdecrema, uint8 ltsdelimon, uint8 ltsdenaranja);

void delay(uint8 variableparaespera);