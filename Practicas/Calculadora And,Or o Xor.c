/******************************************************************************
Calculadora con Operadores And, Or y Xor de Emiliano Fco García Manríquez.
*******************************************************************************/

/*PM->en General muy buen codigo y logica, solo detalles esteticos por pulir*/

#include <stdio.h>
#include <conio.h>
void AND();		/*PM->El prototipo debe de llevar los argumentos como en la declaracion de la funcion*/
void OR();		/*PM->El prototipo debe de llevar los argumentos como en la declaracion de la funcion*/
void XOR();		/*PM->El prototipo debe de llevar los argumentos como en la declaracion de la funcion*/
void main()		/*PM->El prototipo debe de llevar los argumentos como en la declaracion de la funcion*/
{
    unsigned int u8ValueToVariable=0;		/*PM->unsigned int seria u32 no u8*/
    unsigned int u8valueToOperation=0;		/*PM->unsigned int seria u32 no u8*/
    unsigned int u8valueToCloseWhile=1;		/*PM->unsigned int seria u32 no u8*/
    unsigned int u8ValueToChange=0;			/*PM->unsigned int seria u32 no u8*/
    while(u8valueToCloseWhile==1)
    {
        printf("Ingrese de cuantos bits es tu variable: ");
        scanf("%d",&u8ValueToVariable);
        switch(u8ValueToVariable)
        {
            case 8:
            u8valueToCloseWhile++;
            break;
            case 16:
            u8valueToCloseWhile++;
            break;
            case 32:
            u8valueToCloseWhile++;
            break;
            default:printf("Solo se permiten bits de 8, 16 o 32\n");
        }
    }
    while(u8valueToCloseWhile==2)
    {
        printf("¿Qué operación desea realizar?\n1)AND\n2)OR\n3)XOR\nR= ");
        scanf("%d",&u8valueToOperation);
        switch(u8valueToOperation)
        {
            case 1:										/*PM->Recuerda no usar numeros magicos, mejor usa #defines*/
                AND(u8ValueToChange,u8ValueToVariable);
            break;
            case 2:										/*PM->Recuerda no usar numeros magicos, mejor usa #defines*/
                OR(u8ValueToChange,u8ValueToVariable);
            break;
            case 3:										/*PM->Recuerda no usar numeros magicos, mejor usa #defines*/
                XOR(u8ValueToChange,u8ValueToVariable);
            break;
            default:printf("\nNo se seleccionó una opción valida\n");
        }
    }
}
void AND(int u8ValueToChange, int u8ValueToVariable)
{
    int u8ValueToCorrimiento;
    printf("seleccionó AND\nIngrese el número de corrimiento para la operación: ");
	scanf("%d",&u8ValueToCorrimiento);
	if(u8ValueToCorrimiento<u8ValueToVariable)
	{
	    u8ValueToChange &=~(1 <<u8ValueToCorrimiento);
	    printf("Variable Resultante: %d\n", u8ValueToChange);
	}
	else{printf("Se pasó se Bits.\n");}    
}
void OR(int u8ValueToChange, int u8ValueToVariable)
{
    int u8ValueToCorrimiento;
    printf("seleccionó OR\nIngrese el número de corrimiento para la operación: ");
	scanf("%d",&u8ValueToCorrimiento);
	if(u8ValueToCorrimiento<u8ValueToVariable)
	{
	    u8ValueToChange |=(1 <<u8ValueToCorrimiento);
	    printf("Variable Resultante: %d\n", u8ValueToChange);
	}
	else{printf("Se pasó se Bits.\n");}  
}
void XOR(int u8ValueToChange, int u8ValueToVariable)
{
    int u8ValueToCorrimiento;
    printf("seleccionó OR\nIngrese el número de corrimiento para la operación: ");
	scanf("%d",&u8ValueToCorrimiento);
	if(u8ValueToCorrimiento<u8ValueToVariable)
	{
	    u8ValueToChange ^=(1 <<u8ValueToCorrimiento);
	    printf("Variable Resultante: %d\n", u8ValueToChange);
	}
	else{printf("Se pasó se Bits.\n");} 
}