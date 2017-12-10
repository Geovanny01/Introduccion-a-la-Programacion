#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
		
	int array1[10]={0,0,0,0,0,0,0,0,0,0},array2[100];
	int i;
	
	
	
	
	  for (i=0; i<=100; i++) {
        array2[i] = 1+rand()%10;
    }
    
	  for (i=0; i<=100; i++) {
        printf("%d\t",array2[i]);
    }
    
    
    for (i=0;i<100;i++){
    	if (array2[i]==1) array1[0]+=1;
    	if (array2[i]==2) array1[1]+=1;
    	if (array2[i]==3) array1[2]+=1;
    	if (array2[i]==4) array1[3]+=1;
		if (array2[i]==5) array1[4]+=1;
		if (array2[i]==6) array1[5]+=1;
		if (array2[i]==7) array1[6]+=1;
		if (array2[i]==8) array1[7]+=1;
		if (array2[i]==9) array1[8]+=1;
		if (array2[i]==10) array1[9]+=1;
	
	}
    
    printf("\n\n");
    
    for (i=0; i<10; i++) {
        printf("%d=  %d\n",i+1,array1[i]);
    }
    
	
	return 0;
}
