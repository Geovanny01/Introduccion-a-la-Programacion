#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char string[]="Este programa separa las palabras de una frase y las muestra por aparte";

	char *token = strtok(string , " ");
	while (token != NULL){
	printf("%s\n", token);
	token = strtok(NULL," ");
	}
		
	return 0;
}
