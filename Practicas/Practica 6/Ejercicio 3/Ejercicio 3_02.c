#include <stdio.h>
#include<stdlib.h>
int sumar(int* a,int* b);
main (){
int*
num1=(int*)malloc(sizeof(int));
int*
num2=(int*)malloc(sizeof(int));
*num1=5;
*num2=8;
int total=sumar(num1,num2);
printf("\ntotal=%d",total);
printf("\nnum1=%d",num1);
printf("\nnum2=%d",num2);



}
int sumar(int* a, int* b){

int c=0;
c=(*a)+(*b);
return c;
}
