#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float hipotenusa(float ca,float cb){
	float h,a;
	h=sqrt(ca*ca+cb*cb);
	return h;
}



int main(int argc, char *argv[]) {
	float a1,b1,a2,b2,a3,b3,h1,h2,h3;
	
	printf("\nIngrese los valores del Triangulo 1\n");
	printf("Ingrese lado 1: ");
	scanf("%f",&a1);
	printf("Ingrese lado 2: ");
	scanf("%f",&b1);
	h1=hipotenusa(a1,b1);
	printf("Hipotenusa= %f",h1);
		
	printf("\nIngrese los valores del Triangulo 2\n");
	printf("Ingrese lado 1: ");
	scanf("%f",&a2);
	printf("Ingrese lado 2: ");
	scanf("%f",&b2);
	h2=hipotenusa(a2,b2);
	printf("Hipotenusa= %f",h2);
	
	printf("\nIngrese los valores del Triangulo 3\n");
	printf("Ingrese lado 1: ");
	scanf("%f",&a3);
	printf("Ingrese lado 2: ");
	scanf("%f",&b3);
	h3=hipotenusa(a3,b3);
	printf("Hipotenusa= %f",h3);
	
	
	return 0;
}


