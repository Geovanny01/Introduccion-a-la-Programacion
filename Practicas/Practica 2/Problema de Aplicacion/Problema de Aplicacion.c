#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int cultivo,dato,calabacita;
	float HR;
	printf("Cultivo\t\tHR\n");
	printf("1.Tomate\t50-60%\n");
	printf("2.Melon\t\t60-70%\n");
	printf("3.Pepino\t70-90\n");
	printf("4.Calabacita(Solo si se cultiva algo mas) 55-80%");
	
	printf("\n\nQue desea cultivar?");
	scanf("%i",&cultivo);
	
	printf("Ingrese HR: ");
	scanf("%f",&HR);
	
	switch(cultivo){
		case 1:						
			dato=1;
			break;
		case 2:
			dato=3;
			break;
		case 3:
			dato=5;
			break;
		default:
			printf("Error");
			break;		
	}
	
	printf("Desea cultivar tambien calabacita?: 1. Si 2. No\t");
	scanf("%i",&calabacita);
	
	switch(calabacita){
		case 1:
			dato+=1;
			break;
		case 2:
			dato=dato;
			break;
	}

cultiva:	
	switch(dato){
		case 1:		
			printf("\nSolo se cultiva tomate");		//Solo Tomate
			if(HR<50){
				while (HR<50){		
				printf("\nRiego");
				Sleep(3000);
				HR=(HR*0.04)+HR;
				printf("\nHR=%f",HR);
			}
				goto cultiva;
			}
			else if(HR>=50&HR<=60){
				printf("\nEstable");
				Sleep(10000);
				printf("\nActualizar HR= ");
				scanf("%f",&HR);
				goto cultiva;
			}
			else{
				while (HR>60){
				printf("\nAbrir Ventana");
				Sleep(5000);
				HR=HR-(HR*0.03);
				printf("\nHR=%f",HR);
			}
				goto cultiva;
			}	
		case 2:							//Tomate y calabacita
			printf("\nSe cultiva tomate y calabacita");
			if(HR<55){
				while (HR<55){		
				printf("\nRiego");
				Sleep(3000);
				HR=(HR*0.04)+HR;
				printf("\nHR=%f",HR);
			}
				goto cultiva;
			}
			else if(HR>=55&HR<=60){
				printf("\nEstable");
				Sleep(3000);
				printf("\nActualizar HR= ");
				scanf("%f",&HR);
				goto cultiva;
			}
			else{
				while (HR>60){
				printf("\nAbrir Ventana");
				Sleep(5000);
				HR=HR-(HR*0.03);
				printf("\nHR=%f",HR);
			}
				goto cultiva;
			}
			
		case 3:							//Solo Melon
			printf("\nSolo se cultiva melon");
			if(HR<60){
				while (HR<60){		
				printf("\nRiego");
				Sleep(3000);
				HR=(HR*0.04)+HR;
				printf("\nHR=%f",HR);
			}
				goto cultiva;
			}
			else if(HR>=60&HR<=70){
				printf("\nEstable");
				Sleep(3000);
				printf("\nActualizar HR= ");
				scanf("%f",&HR);
				goto cultiva;
			}
			else{
				while (HR>70){
				printf("\nAbrir Ventana");
				Sleep(5000);
				HR=HR-(HR*0.03);
				printf("\nHR=%f",HR);
			}
				goto cultiva;
			}	
		case 4:
			printf("\nSe cultiva melon y calabacita");
			if(HR<60){
				while (HR<60){		
				printf("\nRiego");
				Sleep(3000);
				HR=(HR*0.04)+HR;
				printf("\nHR=%f",HR);
			}
				goto cultiva;
			}
			else if(HR>=60&HR<=70){
				printf("\nEstable");
				Sleep(3000);
				printf("\nActualizar HR= ");
				scanf("%f",&HR);
				goto cultiva;
			}
			else{
				while (HR>70){
				printf("\nAbrir Ventana");
				Sleep(5000);
				HR=HR-(HR*0.03);
				printf("\nHR=%f",HR);
			}
				goto cultiva;
			}			
		
		case 5:
			printf("\nSolo se cultiva pepino");
			if(HR<70){
				while (HR<70){		
				printf("\nRiego");
				Sleep(3000);
				HR=(HR*0.04)+HR;
				printf("\nHR=%f",HR);
			}
				goto cultiva;
			}
			else if(HR>=70&HR<=90){
				printf("\nEstable");
				Sleep(3000);
				printf("\nActualizar HR= ");
				scanf("%f",&HR);
				goto cultiva;
			}
			else{
				while (HR>90){
				printf("\nAbrir Ventana");
				Sleep(5000);
				HR=HR-(HR*0.03);
				printf("\nHR=%f",HR);
			}
				goto cultiva;
			}	
		case 6:
			printf("\nSe cultiva pepino y calabacita");
			if(HR<70){
				while (HR<70){		
				printf("\nRiego");
				Sleep(3000);
				HR=(HR*0.04)+HR;
				printf("\nHR=%f",HR);
			}
				goto cultiva;
			}
			else if(HR>=70&HR<=80){
				printf("\nEstable");
				Sleep(3000);
				printf("\nActualizar HR= ");
				scanf("%f",&HR);
				goto cultiva;
			}
			else{
				while (HR>80){
				printf("\nAbrir Ventana");
				Sleep(5000);
				HR=HR-(HR*0.03);
				printf("\nHR=%f",HR);
			}
				goto cultiva;
			}
				
	}
	

	
	
	return 0;
}
