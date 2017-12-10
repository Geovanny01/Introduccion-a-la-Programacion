#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void imprimir(int array[5]);
void sumar(int arr1[5],int arr2[5],int arr3[5]);
void invertir(int arr1[5],int arr2[5]);
void par_impar(int array[5],char caracter[5]);

int main(int argc, char *argv[]) {
	int array1[]={1,2,3,4,5};
	int array2[]={5,4,3,2,1};
	int array3[5];
	char caracteres[5];
	int opc,i;
	
	printf("Seleccione una funcion:\n");
	printf("1) Imprimir un arreglo\n");
	printf("2) Sumar dos arreglos\n");
	printf("3) Invertir los datos de un arreglo\n");
	printf("4) Determinar si los datos e un arreglos son pares o impares\n");
	
	scanf("%d",&opc);
	printf("\n\n");
	switch(opc){
		case 1:
			imprimir(array1);
		
		case 2:
			sumar(array1,array2,array3);
			for (i=0;i<5;i++){
				printf("%d\t",array3[i]);
			}
		case 3:
			invertir(array1,array3);
			for (i=0;i<5;i++){
			printf("%d\t",array3[i]);
			}	
			
		case 4:
			par_impar(array1,caracteres);
			for (i=0;i<5;i++){
			printf("%c\t",caracteres[i]);
			}
		
	}
	
	
	return 0;
}

void imprimir(int array[5]){
	int i;
	for (i=0;i<5;i++){
		printf("%d\t",array[i]);
	}
}

void sumar(int arr1[5],int arr2[5],int arr3[5]){
	int i;
	
	for(i=0;i<5;i++){
		arr3[i]=arr1[i]+arr2[i];
	}
}

void invertir(int arr1[5],int arr2[5]){
	int i,j,temp;
for(i=0,j=4;i<5;i++,j--) 
{
temp=arr1[i]; 
arr1[i]=arr2[j]; 
arr2[j]=temp;
}
}

void par_impar(int array[5],char caracter[5]){
	int i;
	for(i=0;i<5;i++){
		if (array[i]%2==0) caracter[i]='p';
		else caracter[i]='i';	
	}
}

