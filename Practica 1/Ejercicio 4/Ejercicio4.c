#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int segundostotales,horas,minutos,segundos,dato;
	printf("Este programa convierte un numero dado en segundos a si equivalente en horas,minutos y segundos");
	printf("\nIngrese un numero en segundos: ");
	scanf("%d",&segundostotales);
	
	if((segundostotales/60)<60){
			minutos=segundostotales/60;
			segundos=segundostotales%60;	
			printf("\nMinutos: %d Segundos: %d",minutos,segundos);
	}
	else{
		horas=(segundostotales/60)/60;
		minutos=((segundostotales/60)%60);
		segundos=segundostotales%60;
		printf("\n\nHoras: %d Minutos: %d Segundos: %d",horas,minutos,segundos);
	}	
	
	return 0;
}
