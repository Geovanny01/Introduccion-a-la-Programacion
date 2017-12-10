#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float num1,num2,res;
	char operador,sigue;

	fflush( stdin );
	printf("Este programa es una calculadora simple\ndebe ingresar dos numeros y un operando\n + para suma, - para resta,* para multiplicar y / para dividir");

sigue:
	fflush( stdin );
	printf("\nIngrese un numero: ");
	scanf("%f",&num1);
	printf("\nIngrese un numero: ");
	scanf("%f",&num2);
	fflush( stdin ); 
	printf("Ingrese el operando: ");
	scanf("%c",&operador);
	
	switch (operador){
		case 0x2b:
			res=num1+num2;
			break;
		case 0x2d:
			res=num1-num2;
			break;
		case 0x2a:
			res=num1*num2;
			break;
		case 0x2f:
			res=num1/num2;
			break;
		default:
			printf("\nNo se ingreso operador valido");
			break;
	}
	
	printf("Resultado= %.2f",res);
	
	fflush( stdin ); 
	printf("\nSi desea salir presione S o s, si desea volver a calcular presione otra tecla: ");
	scanf("%c",&sigue);
	if (sigue==0x53){
		printf("\nAdios");
	}
	
	else{
		fflush( stdin );
		goto sigue;
	}
	
	return 0;
}
