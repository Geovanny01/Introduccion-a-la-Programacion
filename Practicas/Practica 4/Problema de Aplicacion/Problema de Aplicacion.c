#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


float calc_presion(float f,float area);
float volumen(float aria,float carr);


int main(int argc, char *argv[]) {
	int c1,c2,c3,c4,cual,cargas;
	float v1,v2;
	float cargaA,cargaB;
	float aefec,p1,p2,p3,p4,carrera;

	printf("Ingrese area efectiva de los cilindros: ");
	scanf("%f",&aefec);
	
	printf("Ingrese carrera de los cilindros: ");
	scanf("%f",&carrera);
	

	printf("Cuantas cargas se utilizaran?: ");
	scanf("%d",&cargas);
	switch(cargas){
		case 1:
			printf("Carga 1)A o 2)B?: ");
			scanf("%d",&cual);
			if (cual==1){
				printf("Ingrese peso de la carga A: ");
				scanf("%f",&cargaA);
				p1=p2=calc_presion(cargaA,aefec);
				printf("Presion de Trabajo= %f",p1);
				v1=v2=volumen(aefec,carrera);
				printf("\nVolumen de Aceite= %f",v1);
				
			}
			else {
				printf("Ingrese peso de la carga B: ");
				scanf("%f",&cargaB);
				p3=p4=calc_presion(cargaB,aefec);
				printf("Presion de Trabajo= %f",p3);
				v1=v2=volumen(aefec,carrera);
				printf("\n
				Volumen de Aceite= %f",v1);
				
			}
			break;
		case 2:
			printf("Ingrese peso de la carga A: ");
			scanf("%f",&cargaA);
		
			printf("Ingrese peso de la carga B: ");
			scanf("%f",&cargaB);
			
			p1=p2=calc_presion(cargaA,aefec);
			printf("Presion de Trabajo en A= %f",p1);
			p3=p4=calc_presion(cargaB,aefec);
			printf("\n");
			printf("Presion de Trabajo en B= %f",p3);
			v1=v2=volumen(aefec,carrera);
			printf("\n");
			printf("Volumen de Aceite= %f",v1);
			
		
			
			break;
		default: printf("No valido");	
	}
		
	
	return 0;
}


float calc_presion(float f,float area){
	float p;
	p=f/area;
	return p;
}

float volumen(float aria,float carr){
	float v;
	v=aria*carr;
	return v;
}


