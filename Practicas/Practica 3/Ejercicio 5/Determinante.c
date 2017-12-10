#include <stdio.h> 
#include <stdlib.h> 
#define TAMANIO 3 

/* Leer una matriz cuadrada de tamaño 3x3 e imprimir la determinante*/ 

int main() 
{ 
    int i,j,m[TAMANIO][TAMANIO],det; 
    
    printf("Programa que calcula e determinante de una matriz 3X3\n");
    for(i=0;i<TAMANIO;i++) 
    { 
        for(j=0;j<TAMANIO;j++) 
        { 
        	printf("Ingrese el valor [%d][%d]= ",i,j);
            scanf("%d",&m[i][j]); 
             
        } 
    } 

   

    det=  (m[0][0]*m[1][1]*m[2][2])+(m[0][1]*m[1][2]*m[2][0])+(m[1][0]*m[2][1]*m[0][2])- 
          (m[0][2]*m[1][1]*m[2][0])-(m[0][0]*m[1][2]*m[2][1])-(m[0][1]*m[1][0]*m[2][2]); 

    printf("El determinante de la matriz es %d\n",det); 
    return 0; 
} 
