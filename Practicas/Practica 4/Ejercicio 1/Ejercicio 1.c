#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float calcula_volumen(float ancho,float largo,float alto){
	float volumen;
	volumen=ancho*largo*alto;
	return volumen;	
}




int main(int argc, char *argv[]) {
	float a1,a2,a3,l1,l2,l3,h1,h2,h3;
	float volumen1,volumen2,volumen3,vtotal;
	
	printf("Este programa calcula el volumen de tres habitaciones iferentes y el volumen total\n");
	printf("Habitacion 1\n ");
	printf("Ingrese ancho: ");
	scanf("%f",&a1);
	printf("Ingrese largo: ");
	scanf("%f",&l1);
	printf("Ingrese alto: ");
	scanf("%f",&h1);
	
	printf("\n");
	
	printf("Habitacion 2\n ");
	printf("Ingrese ancho: ");
	scanf("%f",&a2);
	printf("Ingrese largo: ");
	scanf("%f",&l2);
	printf("Ingrese alto: ");
	scanf("%f",&h2);
	
	printf("\n");
	
	printf("Habitacion 3\n ");
	printf("Ingrese ancho: ");
	scanf("%f",&a3);
	printf("Ingrese largo: ");
	scanf("%f",&l3);
	printf("Ingrese alto: ");
	scanf("%f",&h3);
	
	volumen1=calcula_volumen(a1,l1,h1);
	volumen2=calcula_volumen(a2,l2,h2);
	volumen3=calcula_volumen(a3,l3,h3);
	printf("\n");
	
	printf("Volumen Habitacion 1= %.2f \n",volumen1);
	
	printf("Volumen Habitacion 2= %.2f \n",volumen2);
	
	printf("Volumen Habitacion 3= %.2f \n",volumen3);
	printf("\n");
	vtotal=volumen1+volumen2+volumen3;
	
	printf("Volumen Total= %.2f",vtotal);
	
	
	
	
	
	return 0;
}
