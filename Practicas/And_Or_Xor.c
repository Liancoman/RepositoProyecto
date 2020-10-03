/******************************************************************************
Parte de Esteban
*******************************************************************************/
#include <stdio.h>
#include <conio.h>
void AND(int u32ValueToChange, int u32ValueToVariable)
{
    int u32ValueToCorrimiento;
    printf("seleccionó AND\nIngrese el número de corrimiento para la operación: ");
	scanf("%d",&u32ValueToCorrimiento);
	if(u32ValueToCorrimiento<u32ValueToVariable)
	{
	    u32ValueToChange &=~(1 <<u32ValueToCorrimiento);
	    printf("Variable Resultante: %d\n", u32ValueToChange);
	}
	else{printf("Se pasó se Bits.\n");}    
}
void OR(int u32ValueToChange, int u32ValueToVariable)
{
    int u32ValueToCorrimiento;
    printf("seleccionó OR\nIngrese el número de corrimiento para la operación: ");
	scanf("%d", & u32ValueToCorrimiento);
	if(u32ValueToCorrimiento<u32ValueToVariable)
	{
	    u32ValueToChange |=(1 <<u32ValueToCorrimiento);
	    printf("Variable Resultante: %d\n", u32ValueToChange);
	}
	else{printf("Se pasó se Bits.\n");}  
}
void XOR(int u32ValueToChange, int u32ValueToVariable)
{
    int u32ValueToCorrimiento;
    printf("seleccionó OR\nIngrese el número de corrimiento para la operación: ");
	scanf("%d", & u32ValueToCorrimiento);
	if(u32ValueToCorrimiento<u32ValueToVariable)
	{
	    u32ValueToChange ^=(1 <<u32ValueToCorrimiento);
	    printf("Variable Resultante: %d\n", u32ValueToChange);
	}
	else{printf("Se pasó se Bits.\n");} 
}
void main()
{
    unsigned int u32ValueToVariable=0;
    unsigned int u32valueToOperation=0;
    unsigned int u32valueToCloseWhile=1;
    unsigned int u32ValueToChange=0;
    while(u32valueToCloseWhile==1)
    {
        printf("Ingrese de cuantos bits es tu variable: ");
        scanf("%d",&u32ValueToVariable);
        switch(u32ValueToVariable)
        {
            case 8:
            u32valueToCloseWhile++;
            break;
            case 16:
            u32valueToCloseWhile++;
            break;
            case 32:
            u32valueToCloseWhile++;
            break;
            default:printf("Solo se permiten bits de 8, 16 o 32\n");
        }
    }
    while(u32valueToCloseWhile==2)
    {
        printf("¿Qué operación desea realizar?\n1)AND\n2)OR\n3)XOR\nR= ");
        scanf("%d",&u32valueToOperation);
        switch(u32valueToOperation)
        {
            case 1:
                AND(u32ValueToChange,u32ValueToVariable);
            break;
            case 2:
                OR(u32ValueToChange,u32ValueToVariable);
            break;
            case 3:
                XOR(u32ValueToChange,u32ValueToVariable);
            break;
            default:printf("\nNo se seleccionó una opción valida\n");
        }
    }
}