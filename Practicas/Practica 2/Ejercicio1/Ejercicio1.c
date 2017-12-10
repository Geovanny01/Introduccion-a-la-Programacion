#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float x,y;
	
	printf("Este programa calcula la funcion para un valor x\n f(x)=(x^2)-x si x<=0\n f(x)=-x^2 + 3x si x>0	");
	printf("\nIngrese el valor de x: ");
	scanf("%f",&x);
	
	if (x<=0){
		y=(x*x)-x;
		printf("f(%f)=%f",x,y);
	}
	else{
		y=-(x*x) + 3*x;
		printf("f(%f)=%f",x,y);
	}
	
	
	
	return 0;
}
