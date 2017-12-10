  #include<stdio.h>
  #include<stdlib.h>
  #include<string.h>
  
  char* meses(int);            
 
  int main()
  {
      int dia, mes, anio, anio1 = 0;
      char mes1[20];
   
   printf("Ingrese la Fecha(dd/mm/aa): ");
   fflush(stdin);
   scanf("%d/%d/%d",&dia,&mes,&anio);

   anio1 = 20 * 100 + anio;
   strcpy(mes1,meses(mes));
   
   printf("%d de %s de %d\n",dia,mes1,anio1);
   system("pause");
   return 0;
   
   system("pause");
   return 0;
   
   } 
char* meses(int m)
{

char meses[12][11]={ "Enero", "Febrero", "Marzo",
                   "Abril", "Mayo", "Junio",
                   "Julio", "Agosto", "Septiembre",
                   "Octubre", "Noviembre", "Diciembre"}; 
return meses[m-1];
}
