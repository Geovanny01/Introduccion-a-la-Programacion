#include <stdio.h>
int sumar(int a,int b);
main (){
int num1;
int num2;
num1=5;
num2=8;
int total=sumar(num1,num2);
total+=1;
printf("\ntotal =%d",total);
printf("\nnum1 =%d",num1);
printf("\nnum2 =%d",num2);



}
int sumar(int a, int b){
int c=0;
c=(a)+(b);
printf("\na=%d",a);
printf("\nb=%d",b);
printf("\nc=%d",c);
return c;
}
