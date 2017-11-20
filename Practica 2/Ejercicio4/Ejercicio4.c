#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num_productos,seleccion,costo=0,otro;
	
	
	printf("\t\tMenu");
	printf("\n1. Hanburguesa chica con papas y refresco \t $20");
	printf("\n2. Hotdog y refresco \t\t\t\t $18");
	printf("\n3. Ensalada rusa \t\t\t\t $15");
	
pide:	
	printf("\n\nSeleccione el producto: ");
	scanf("%i",&seleccion);
	
	printf("Ingrese la cantidad de productos: ");
	scanf("%i",&num_productos);
	
	switch (seleccion){
		case 1:
			costo+=(num_productos*20);
			break;
		case 2:
			costo+=(num_productos*18);
			break;
		case 3:
			costo+=(num_productos*15);
			break;
		default:
			printf("\nError");
		break;
	}
	
	printf("\nDesea ordenar algo mas?\t 1.Si  2.No\n");
	scanf("%i",&otro);
	if (otro==1){
		goto pide;
	}
	else{
		printf("Su cuenta asciende a:%i",costo);	
	}
	return 0;
}
