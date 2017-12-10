#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


struct Fecha
{
	int anio;
	int mes;
	int dia;
}Fecha1;

struct Disco 
{
     char titulo[30];
     char artista[25];
     float precio;
     int canciones;
     struct Fecha;
     
}cd1;


struct Disco cd1;
struct Disco cd2;


void solicitarDisco();
void imprimirDisco();
float descuento();


int main(int argc, char *argv[]) {
	int opc;
	
continua:

	printf("\nSeleccione Operacion:\n");
	printf("Nota: Primero debe ingresar datos\n");
	printf("1)Ingresar Datos\n2)Imprimir Datos\n3)Generar Descuento\n");
	scanf("%d",&opc);
	
	
	switch(opc){
		case 1:
		solicitarDisco();
		break;
		case 2:
		imprimirDisco();
		break;
		case 3:
		descuento();
		break;
		default: printf("Operacion no valida");
			
	}
	
	goto continua;
	
	
	
	
	
	
	
	return 0;
}


void solicitarDisco(){
	fflush(stdin);
	printf( "Ingrese el titulo del disco: " );
	gets(cd1.titulo );
	printf( "Ingrese el artista: " );
	gets(cd1.artista );
	printf( "Ingrese el precio: " );
	scanf( "%f", &cd1.precio );
	printf( "Ingrese el numero de canciones: " );
	scanf( "%i", &cd1.canciones );
	printf("Ingrese la fecha (dd mm aa): ");
	scanf("%d %d %d",&Fecha1.dia,&Fecha1.mes,&Fecha1.anio);
	
}

void imprimirDisco(){
	printf("\nTitulo del disco:%s",cd1.titulo);
	printf("\nArtista: %s",cd1.artista);
	printf("\nPrecio: %.2f",cd1.precio);
	printf("\nCanciones: %i",cd1.canciones);
	printf("\nFecha: %i/%i/%i",Fecha1.dia,Fecha1.mes,Fecha1.anio);

}


float descuento(){
	float p;
	p=cd1.precio*.75;
	printf("\nEl precio con descuento es: %f",p);
	return p;
}






