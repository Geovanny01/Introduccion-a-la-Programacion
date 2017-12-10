#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct fecha{
	int dia;
	int mes;
	int anio;
};

struct robot{
	struct fecha;
	int hora;
	int hombro;
	int codo;
	int muneca;
}robot1;



//ESTE PROGRAMA GENERA VALORES ALEATORIOS PARA LOS GRADOS DE UN ROBOT Y LOS ALMACENA 
// EN UN ARCHIVO .txt 




int main(int argc, char *argv[]) {
	int j=0;
	int i,cuantos;
	
	time_t tiempo = time(0);
    struct tm *tlocal = localtime(&tiempo);

    char output[128];

    strftime(output, 128, "%d/%m/%y %H:%M:%S", tlocal);

	
	
	FILE *file;
	file=fopen("BrazoRobot.txt","w+");
	


	printf("Cuantos calculos desea hacer? ");
	scanf("%d",&cuantos);
	
for (i=0;i<cuantos;i++)
 {
	j++;
	printf("\nCalculando %d",j);

   	robot1.hombro =rand()%140;
	robot1.codo=rand()%180;
	robot1.muneca=rand()%360;
	

	fprintf(file,"\nFecha y Hora: %s",output);
	fprintf(file,"\nHombro: %d",robot1.hombro);
	fprintf(file,"\nCodo: %d",robot1.codo);
	fprintf(file,"\nMuñeca: %d",robot1.muneca);
	Sleep(5000);
}

	fclose(file);


	return 0;
}








