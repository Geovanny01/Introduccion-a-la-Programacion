#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float voltaje(float res,float cor){
	float vol;
	vol=res*cor;
	return vol;
}

float resistencia(float cor,float vol){
	float res;
	res=vol/cor;
	return res;
}

float corriente(float vol,float res){
	float cor;
	cor=vol/res;
	return cor;
}





int main(int argc, char *argv[]) {
	float r,i,v;
	int opc;
	
	printf("Seleccione el calculo a realizar:");
	printf("\n 1)Calcular voltaje\n 2)Calcular resistencia\n 3)Calcular corriente\n");
	scanf("%d",&opc);
	
	switch(opc){
		case 1:
			printf("Ingrese resistencia: ");
			scanf("%f",&r);
			printf("Ingrese corriente: ");
			scanf("%f",&i);
			v=voltaje(r,i);
			printf("Voltaje= %.4f",v);
			break;
		case 2:
			printf("Ingrese corriente: ");
			scanf("%f",&i);
			printf("Ingrese voltaje: ");
			scanf("%f",&v);
			r=resistencia(i,v);
			printf("Resistencia= %.4f",r);
			break;
		case 3:
			printf("Ingrese voltaje: ");
			scanf("%f",&v);
			printf("Ingrese resistencia: ");
			scanf("%f",&r);
			i=corriente(v,r);
			printf("Corriente= %.4f",i);
			break;
		default: printf("Opcion no seleccionada");
			
	}
	
	return 0;
}







