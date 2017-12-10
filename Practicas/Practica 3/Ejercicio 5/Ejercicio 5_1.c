#include <stdio.h>
#include <conio.h>
void main()
{
int ma[3][3];
int a, b;
fflush(stdin);
for(a=0;a<3;a++)
{
for(b=0;b<3;b++)
{
printf("Introduce el valor: [%d][%d]= ",a,b);
scanf("%d",&ma[a][b]);
fflush(stdin);
}
}

printf("La inversa de la matriz a es..: \n");
for(a=0;a<3;a++)
{
for(b=0;b<3;b++)
{
printf(" %d ",ma[b][a]);
}
printf("\n");
}

getch();
}
