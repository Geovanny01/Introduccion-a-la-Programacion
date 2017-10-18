#include <stdio.h>
#include <stdlib.h>

int main()
{
  int cont;
  float num,suma,media;
  
  
  suma=0;
  cont=0;
aca:
printf("Ingrese un numero positivo: ");
  scanf("%f",&num);

  if (num==0) {
  	 		  if (suma==0){
			  	 		   printf("Media = Cero\n");
			  	 		   }
			  else{	 		   
  	 		  media=(suma/cont);
  	 		  printf("\nMedia: %.2f\n",media);
  	 		  
			  }
  	 		  }
  else {
  	   cont=cont+1;
  	   suma=suma+num;
  	   goto aca;
  	   }
  	   
  system("PAUSE");	
  return 0;
}