#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float cal=0,sum=0;
	int cant=1;
	float prom;	
	printf("Este programa calcula el promedio de 5 calificaciones y determina si el lumno esta aprobado o reprobado");
	while (cant<6){
		printf("\n Ingrese calificacion: ");
		scanf("%f",&cal);
		sum+=cal;
		cant=cant+1;
	}
	prom=sum/5;
	printf("\n Promedio=%.2f",prom);
	
	if (prom>=6){
		printf("\n\t\t Aprobado");
	}
	else{
		printf("\n\t\tReprobado");
	}
	
	return 0;
}
