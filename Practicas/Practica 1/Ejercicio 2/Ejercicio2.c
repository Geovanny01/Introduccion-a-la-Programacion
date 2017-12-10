#include <stdio.h>
#include <stdlib.h>

int main()
{
  float pies,pulgadas,yardas,centimetros,metros;
  printf("\nEste programa convierte una medida dada en pies a sus equivalentes en yardas,\n\t\t\t pulgadas, centimetros y metros.\n\n");
  printf("Ingrese una medida en pies: ");
  scanf("%f",&pies);
  pulgadas=pies*12;
  yardas=pies/3;
  centimetros=pulgadas*2.54;
  metros=centimetros/100;
  printf("\nEquivalencias\n");
  printf("\n\t\t %.2f Pulgadas",pulgadas);
  printf("\n\t\t %.2f Yardas",yardas);
  printf("\n\t\t %.2f Centimetros",centimetros);
  printf("\n\t\t %.2f Metros",metros);
  printf("\n\n\n");
  
  
  system("PAUSE");	
  return 0;
}