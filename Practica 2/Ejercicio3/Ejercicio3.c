#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int kwh;
	float costo=0,costoA=0,costoB=0,costoC=0,total;
	printf("Este programa calcula el cobro de luz dependiendo del consuo en KWH");
	printf("\nKWH\t\t$");
	printf("\n1-50\t\t2.288\n51-100\t\t2.762\nAdicional\t3.042\nCargo fijo\t52.84");
	
	printf("\nIngrese su consumo en KWH: ");
	scanf("%i",&kwh);
	
	if (kwh<=50){
		costo=kwh*2.288;
		total=costo+52.84;
	}
	else if(kwh<=100){
		costoA=50*2.288;
		kwh-=50;
		costoB=kwh*2.762;
		total=costoA+costoB+52.84;	
	}
	else if(kwh>100){
		costoA=50*2.288;
		costoB=50*2.762;
		kwh-=100;
		costoC=kwh*3.042;
		total=costoA+costoB+costoC+52.84;
	}
	
	printf("\nEl total a pagar es:%.2f",total);
	
	return 0;
}
