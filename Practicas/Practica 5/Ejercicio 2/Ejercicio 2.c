#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i=0,j;
	
	char linea[50];
	printf("Ingrese una linea de texto:\n");
	gets(linea);

	
    while(linea[i]!='\0'){
        i++;
    }
    printf("La linea al reves es:\n\t");
    for (j=i-1; j>=0; j--){
        printf("%c", linea[j]);
    }
    puts("");
	
	
	
	return 0;
}
