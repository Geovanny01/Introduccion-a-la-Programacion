#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct parametro{
	int cardiaca;
	int respiratoria;
	int pulso;
}person1;



int main(int argc, char *argv[]) {
	int j=0,seg;
	int i,cuantos;
	
	time_t tiempo = time(0);
    struct tm *tlocal = localtime(&tiempo);

    char output[128];

    strftime(output, 128, "%d/%m/%y %H:%M:%S", tlocal);

	
	
	FILE *file;
	file=fopen("Monitor.txt","w+");
	


	printf("Cuantas revisiones desea hacer? ");
	scanf("%d",&cuantos);
	
	printf("Cada cuanto tiempo desea realiza una revision? (seg)  ");
	scanf("%d",&seg);
	
	seg*=1000;
	
	
for (i=0;i<cuantos;i++)
 {
	j++;
	printf("\nRevision %d\t",j);

   	person1.cardiaca =60+rand()%50;
	person1.respiratoria=12+rand()%8;
	person1.pulso=60+rand()%50;
	

	if (person1.cardiaca>=90) {
		printf("Presion Cardiaca Alta!!! %d",person1.cardiaca);
		printf("\tFecha y Hora: %s",output);
		
	}
	if (person1.respiratoria>=16){
		printf("Presion Respiratoria Alta!!! %d",person1.respiratoria);
		printf("\tFecha y Hora: %s",output);
	} 
	if (person1.pulso<=59) {
		printf("Pulso Alto!!! %d",person1.pulso);
		printf("\tFecha y Hora: %s",output);
	}




	fprintf(file,"\nFecha y Hora: %s",output);
	fprintf(file,"\nFrecuencia Carciaca: %d",person1.cardiaca);
	fprintf(file,"\nFrecuencia Respiratoria: %d",person1.respiratoria);
	fprintf(file,"\nPulso: %d",person1.pulso);
	Sleep(seg);
}

	fclose(file);


	return 0;
}








