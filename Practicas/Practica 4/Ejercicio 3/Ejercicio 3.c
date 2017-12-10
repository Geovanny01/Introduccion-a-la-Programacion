#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int entero_potencia(int a,int b);

int main(int argc, char *argv[]) {
	int base,potencia,res;
	
	printf("Ingrese Base: ");
	scanf("%d",&base);
	printf("Ingrese Potencia: ");
	scanf("%d",&potencia);
	printf("\n");
	res=entero_potencia(base,potencia);
	printf("Resultado= %d",res);
	return 0;
}

int entero_potencia(int a,int b){
	int v=1,i;
	for (i=1;i<=b;i++){
		v*=a;
	}
	return v;
	
}
