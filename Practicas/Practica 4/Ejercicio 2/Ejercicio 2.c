#include <stdio.h>
#include <stdlib.h>
#include<math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int calcular_serie(int dato);



int main(int argc, char *argv[]) {
	
	int n,res;
	
	printf("Ingrese el valor de n: ");
	scanf("%d",&n);
	
	res=calcular_serie(n);
	printf("Resultado= %d",res);
	
	
	return 0;
}

int calcular_serie(int dato){
	int i,j,v=0;
	
	for(i=1;i<=dato;i++){
		
		if ( i % 2 == 0 ) j=i;
   			else j=(-1)*i;
        
	v+=pow(j,i);
	
	
	}
	v*=-1;
	
	return v;
}
