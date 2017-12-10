#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int it=0,a=0,e=0,i=0,o=0,u=0;
	char linea[130];
	
	printf("Ingrese una linea de texto: ");
	gets(linea);
	

	for(it=0;it<=130;it++){
	
	switch(linea[it])
	{ 
 	case 'a':
        a++;
        break;    
 	case 'e':                               
        e++;               
        break;
 	case 'i':
 		i++;
 		break;
 	case 'o':
 		o++;
 		break;
 	case 'u':
 		u++;
 		break;
	
	}
}
	
	printf("\na:%d",a);
	printf("\ne:%d",e);
	printf("\ni:%d",i);
	printf("\no:%d",o);
	printf("\nu:%d",u);	


return 0;
}
