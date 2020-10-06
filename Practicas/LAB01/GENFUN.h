/*Data Types*/

typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;

/*Definitions*/
#define ASCII_HIGH_THRESHOLD_OFF_ON 123
#define ASCII_LOW_THRESHOLD_OFF_ON 96
#define ASCII_CONVERTION_FACTOR 32

/*Functions Prototypes*/ 

void GENFUN_vCapsOn (uint8 *pu8Src, uint8 u8SizeOfList) ;
void GENFUN_u8GetOccurence (uint8 *pu8Src, uint8 u8Target, uint8 u8SizeOfList) ;

uint8 GENFUN_u8GetOccurence (uint8 *pu8Src, uint8 u8Target, uint8 u8SizeOfList) ;
uint8 GENFUN_u8GetAverage (uint8 *pu8Src, uint8 u8SizeOfList); 

void GENFUN_u8MemSet (uint8 *pu8Src, uint8 u8Char2Set, uint8 u8SizeOfList) ;
void GENFUN_u8MemCopy (uint8 *pu8Src, uint8 *pu8Dest, uint8 u8SizeOfList) ;

void GENFUN_vSortList (uint8 *pu8Src, uint8 *pu8Dest, uint8 u8SizeOfList) ;
void GENFUN_vSoftSignal (uint8 *pu8Src, uint8 *pu8Dest) ;

void GENFUN_vFilterSignal (uint8 *pu8Src, uint8 *pu8Dest, uint8 u8MaxVal, uint8 u8MinVal) ;
