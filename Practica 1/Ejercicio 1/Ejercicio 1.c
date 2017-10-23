#include <stdio.h>
#include <stdlib.h>

int main()
{
  float x,y,a,b,res;
  
  printf("\n\tEste programa es capaz de resolver una expresion de tipo:\n\t\t\t\t((x+y)^2)(a-b)\n");
  printf("\n\t\tIngrese el valor de x: ");
  scanf("%f",&x);
  printf("\t\tIngrese el valor de y: ");
  scanf("%f",&y);
  printf("\t\tIngrese el valor de a: ");
  scanf("%f",&a);
  printf("\t\tIngrese el valor de b: ");
  scanf("%f",&b); 
  
  res=(x+y)*(x+y)*(a-b);
  printf("\n\t\tEl resultado de la expresion es: %.2f",res);
  printf("\n\n\n");
  
  
  
  
  system("PAUSE");	
  return 0;
}