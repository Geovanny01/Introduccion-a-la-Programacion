#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int factorial(int num){
	int i,dato=1;
	for(i=1;i<=num;i++){
		dato*=i;
		printf ("\n%d",i);
	}
	return dato;
}




int main(int argc, char *argv[]) {
	int n,fact;
	printf("Ingrese un valor para calcular su factorial: ");
	scanf("%d",&n);
	fact=factorial(n);
	printf("\n Factorial de %d = %d",n,fact);
	
	return 0;
}


