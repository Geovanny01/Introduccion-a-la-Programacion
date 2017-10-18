#include <stdio.h>
#include <stdlib.h>

int main()
{
 	char nombre[20],apellido[20];
 	float horas,precio,ingreso,impuesto,neto;
 	
 	printf("Escriba su Nombre: ");
 	scanf("%s",&nombre);
 	fflush(stdin);
 	printf("Escriba su Apellido: ");
	scanf("%s",&apellido);	
	
 	printf("Ingrese Horas Trabajadas: ");
 	scanf("%f",&horas);
 	printf("Ingrese Salario por hora: " );
 	scanf("%f",&precio);
 	ingreso=horas*precio;
 	impuesto=0.25*ingreso;
 	neto=ingreso-impuesto;
 	printf("Nombre: %s %s \nIngreso: %.2f \nImpuesto: %.2f \nNeto: %.2f\n", nombre,apellido,ingreso,impuesto,neto);
 	
  
  system("PAUSE");	
  return 0;
}
