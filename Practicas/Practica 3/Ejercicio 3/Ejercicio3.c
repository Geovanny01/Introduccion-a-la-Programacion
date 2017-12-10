#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int lluvias[10][12],estado[10]={0,0,0,0,0,0,0,0,0,0},est[10],lluv[10];
	int i,j,tmp;
	
	for (i=0; i<10; i++) {
		for(j=0;j<12;j++){
			lluvias[i][j] = rand()%150;	
			
		}
	}
	      
    
    
    for (i=0;i<10;i++){
    	for(j=0;j<12;j++){
    		printf("%d\t",lluvias[i][j]);
    		
		}
	}
	
	for (j=0;j<12;j++){
		estado[0]+=lluvias[0][j];
		estado[1]+=lluvias[1][j];
		estado[2]+=lluvias[2][j];
		estado[3]+=lluvias[3][j];
		estado[4]+=lluvias[4][j];
		estado[5]+=lluvias[5][j];
		estado[6]+=lluvias[6][j];
		estado[7]+=lluvias[7][j];
		estado[8]+=lluvias[8][j];
		estado[9]+=lluvias[9][j];
		
	}
	
		est[0]=estado[0];
		est[1]=estado[1];
		est[2]=estado[2];
		est[3]=estado[3];
		est[4]=estado[4];
		est[5]=estado[5];
		est[6]=estado[6];
		est[7]=estado[7];
		est[8]=estado[8];
		est[9]=estado[9];
			
		lluv[0]=lluvias[1][0];
		lluv[1]=lluvias[1][1];
		lluv[2]=lluvias[1][2];
		lluv[3]=lluvias[1][3];
		lluv[4]=lluvias[1][4];
		lluv[5]=lluvias[1][5];
		lluv[6]=lluvias[1][6];
		lluv[7]=lluvias[1][7];
		lluv[8]=lluvias[1][8];
		lluv[9]=lluvias[1][9];
		lluv[10]=lluvias[1][10];
		lluv[11]=lluvias[1][11];				
	
	
	printf("\n\n");
	printf("\t");
	
    for (i=0;i<10;i++){
    		printf("%d\t",estado[i]);
    		
	}	
    	
		printf("\n\n");


   for (i = 0 ; i < 10; i++)
  {
    for (j = 0 ; j < 10-i - 1; j++)
    {
      if (estado[j] < estado[j+1])
      {
        tmp         = estado[j];
        estado[j]   = estado[j+1];
        estado[j+1] = tmp;
      }
    }
  }

 printf("\n a) Resultado: ");
	
	if (est[0]==estado[0]) printf("Sonora");
	if (est[1]==estado[0]) printf("Aguascalientes");
	if (est[2]==estado[0]) printf("Oaxaca");
	if (est[3]==estado[0]) printf("Colima");
	if (est[4]==estado[0]) printf("Chihuahua");
	if (est[5]==estado[0]) printf("San Luis");
	if (est[6]==estado[0]) printf("Durango");
	if (est[7]==estado[0]) printf("Veracruz");
	if (est[8]==estado[0]) printf("Yucatan");
	if (est[9]==estado[0]) printf("Tabasco");
	
	
	
	printf("\n b) Resultado: ");	
	
	if (est[0]==estado[9]) printf("Sonora");
	if (est[1]==estado[9]) printf("Aguascalientes");
	if (est[2]==estado[9]) printf("Oaxaca");
	if (est[3]==estado[9]) printf("Colima");
	if (est[4]==estado[9]) printf("Chihuahua");
	if (est[5]==estado[9]) printf("San Luis");
	if (est[6]==estado[9]) printf("Durango");
	if (est[7]==estado[9]) printf("Veracruz");
	if (est[8]==estado[9]) printf("Yucatan");
	if (est[9]==estado[9]) printf("Tabasco");	
		
		
		
   for (i = 0 ; i < 10; i++)
  {
    for (j = 0 ; j < 10-i - 1; j++)
    {
      if (lluvias[1][j] < lluvias[1][j+1])
      {
        tmp         = lluvias[1][j];
        lluvias[1][j]   = lluvias[1][j+1];
        lluvias[1][j+1] = tmp;
      }
    }
  }		
	
	
		
	printf("\n c) Resultado: ");	
	fflush(stdin);
	if (lluv[0]==lluvias[1][0]) printf("Enero");
	if (lluv[1]==lluvias[1][0]) printf("Febrero");
	if (lluv[2]==lluvias[1][0]) printf("Marzo");
	if (lluv[3]==lluvias[1][0]) printf("Abril");
	if (lluv[4]==lluvias[1][0]) printf("Mayo");
	if (lluv[5]==lluvias[1][0]) printf("Junio");
	if (lluv[6]==lluvias[1][0]) printf("Julio");
	if (lluv[7]==lluvias[1][0]) printf("Agosto");	
	if (lluv[8]==lluvias[1][0]) printf("Septiembre");
	if (lluv[9]==lluvias[1][0]) printf("Octubre");
	if (lluv[10]==lluvias[1][0]) printf("Noviembre");
	if (lluv[11]==lluvias[1][0]) printf("Diciembre");		
	
		
	
	return 0;
}
