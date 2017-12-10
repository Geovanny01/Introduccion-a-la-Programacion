#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float radio,altura,g,volumen,area;
	const float pi=3.1416;
	printf("\n\t\tEste programa calcula el volumen y el area de un cono");
	printf("\n\n \tIngrese el radio del cono(m): ");
	scanf("%f",&radio);
	printf("\tIngrese la altura del cono(m): ");
	scanf("%f",&altura);
	
	g=sqrt((altura*altura)+(radio*radio));
	
	volumen=(pi*radio*radio*altura)/3;
	area=(pi*radio*g)+(pi*radio*radio);
	
	printf("\n\tEl volumen del cono es: %.2f metros cubicos",volumen);
	printf("\n\tEl area del cono es : %.2f metros cuadrados",area);
	
	
	
	return 0;
}
