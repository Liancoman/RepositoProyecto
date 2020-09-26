#include <stdio.h>

#define ValPrimario  17
#define Valsecundario 45

int main()
{
	printf("Proyecto inicial\n");
	printf("Se desarollo intento de oferta\n");
	branch_to_prelectio();
	
	return 0;
}
void branch_to_prelectio()
{	
	int op;
	printf("Selecciona que opción desea realizar.\n1)AND\n2)OR\n3)XOR\n");
	scanf("%d",&op);
	
	switch(op)
	{
		case 1: //And
		Value = ValPrimario; 
		Value &= Valsecundario;
		printf("\nSe mostrará el resultado del AND: %d",Value);
		break;
		case 2: //Or
		Value = ValPrimario; 
		Value |= Valsecundario;
		printf("\nSe mostrará el resultado del Or: %d",Value);
		break;
		case 3://Xor
		Value = ValPrimario; 
		Value ^= Valsecundario;
		printf("\nSe mostrará el resultado del Xor: %d",Value);
		break;
		default:printf("\nNo se seleccionó ninguna opción valida");
	}
}

