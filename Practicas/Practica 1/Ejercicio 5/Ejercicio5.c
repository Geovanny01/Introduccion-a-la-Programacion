#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float temperatura,F,C;
	char unidad;
	
	
	printf("\n\t\tEste programa hace conversion de grados Celsius a Faranheit y viceversa");
	printf("\n\n\tIngrese la temperatura a convertir segida de f si es en Farenheit o c si es en Celsius: ");
	scanf("%f%c",&temperatura,&unidad);
	
	if(unidad==0x43|unidad==0x63){
		F=((9*temperatura)/5)+32;
		
		printf("\t\t%.2f Celsius = %.2f Farenheit",temperatura,F);

	}
	else if(unidad==0x46|unidad==0x66){
		C=((temperatura-32)*5)/9;
		printf("\t\\t\t%.2f Farenheit = %.2f Celsius",temperatura,F);
	}
	else{
	printf("\t\t\tError****** No se ingreso una temeperatura valida");
	}
	
	
	return 0;
}
