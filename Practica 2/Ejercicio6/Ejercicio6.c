#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float x=0,y;
	

	
	for(x=0;x<=10;x+=0.5){
		y=sin(2*x*0.017453)-x;
		printf("\nf(%f)=%f",x,y);

	}
	
	return 0;
}
