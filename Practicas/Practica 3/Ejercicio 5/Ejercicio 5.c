#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],x,y,aux;

printf("Introduce los elementos de tu arreglo\n");
for(x=0;x<10;x++)
scanf("%d",&a[x]);
for(y=0;y<9;y++)
{
if(a[y]>a[y+1])
{
aux=a[y];
a[y]=a[y+1];
a[y+1]=aux;
}
}
printf("\n");
for(x=0;x<10;x++)
printf("%d\t",a[x]);
getch();

}
