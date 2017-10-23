#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float d,h,presion,areabase,volumen;
	char liquido;
	printf("\n\tPara la medicion de nivel en pozos profundos de agua, se establece el uso de transmisores de presion\n\tdiferencial sumergible.");
	printf("\n\n\tEste programa calcula el volumen de agua o Diesel (segun sea el liquido contenido)\n\tde un pozo de forma cilindrica de d metros de diametro");
	
	printf("\n\n\tIngrese el diametro del pozo (m): ");
	scanf("%f",&d);
	printf("\tIngrese la Presion Hidrostatica (bar): ");
	scanf("%f",&presion);
	printf("\tPresionde D si en liquido es Diesel, presione cualquier otra tecla si es Agua: ");
	fflush(stdin);
	scanf("%c",&liquido);
	
	(liquido==0x44)? (h=presion/(820*9.8)):(h=presion/(1000*9.8));
	
	

		areabase=(d/2)*(d/2)*3.1416;
		volumen=areabase*h;
		printf("\n\n\tEl Volumen del Pozo es: %f metros cubicos",volumen);
	
	return 0;
}
