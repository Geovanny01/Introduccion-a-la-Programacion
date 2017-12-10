#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */




	struct puerta{
	int estado;			//1 abierta 0 cerrada
	int ubicacion;		//1 exterior 0 interior
	}puertas[20];
	
	struct ventana{
	int estado;			//1 abierta 0 cerrada
	int ubicacion;
	int piso;
	}ventanas[20];
	
	struct foco{
	int espacio;		//1 natural o no
	int estado;			//0 a 5 de intensidad
	}focos[20];
	
void cerrar_todas_puertas(int p,struct puerta *puertas);
void cerrar_puertas_exterior(int p,struct puerta *puertas);
void cerrar_todas_ventanas(int v,struct ventana *ventanas);
void cerrar_ventanas_exterior(int v,struct ventana *ventanas);
void cerrar_ventanas_exterior_baja(int v,struct ventana *ventanas);
void apagar_todos_focos(int f,struct foco *focos);
void apagar_focos_exterior(int f,struct foco *focos);
void focos_minima(int f,struct foco *focos);


int main(int argc, char *argv[]) {

	
	int i,f,p,v,opc,per,hr,lluvia,nub;



	printf("Inicializar casa...\n");
	
	printf("Ingresar datos\n");
	printf("Cantidad de focos: ");
	scanf("%d",&f);
	printf("Cantidad de puertas: ");
	scanf("%d",&p);
	printf("Cantidad de Ventanas: ");
	scanf("%d",&v);

	puertas[p];
	ventanas[v];
	focos[f];	
			
	printf("Ingresar caracteristicas de los Focos\n");
	
	
		for(i=0;i<f;i++){
		printf("Espacio: 1) Iluminacion Natural 0) Sin iluminacion Natural\n");
		printf("Foco %d:",i+1);
		scanf("%d",&focos[i].espacio);
		printf("Estado: Intensidad de 0-5\n");
		scanf("%d",&focos[i].estado);
		printf("\n");
		
	}
	
	printf("Ingresar caracteristicas de las Puertas\n");
	
		for(i=0;i<p;i++){
		printf("Estado: 1) Abierta 0) Cerrada\n");
		printf("Puerta %d:",i+1);
		scanf("%d",&puertas[i].estado);
		printf("Ubicacion:1) Exterior 0) Interior\n");
		scanf("%d",&puertas[i].ubicacion);
		printf("\n");
		
	}				
	
	printf("Ingresar caracteristicas de las Ventanas\n");
	
		for(i=0;i<v;i++){
		printf("Estado: 1) Abierta 0) Cerrada\n");
		printf("Ventana %d:",i+1);
		scanf("%d",&ventanas[i].estado);
		printf("Ubicacion:1) Exterior 0) Interior\n");
		scanf("%d",&ventanas[i].ubicacion);
		printf("Piso:\n");
		scanf("%d",&ventanas[i].piso);		
		printf("\n");
		
	}
	
	printf("Seleccione Operacion:\n");
	printf("1) Salir de Casa\n2) Actualizar clima\n3) Mostrar estado de la casa\n");
	scanf("%d",&opc);
	
	switch(opc){
		case 1:
			printf("0) Periodo Breve\t1) Periodo Largo: ");
			scanf("%d",&per);
			if (per==0) {
				cerrar_puertas_exterior(p,&puertas);
				cerrar_ventanas_exterior_baja(v,&ventanas);
				focos_minima(f,&focos);
			}
			else {
				cerrar_todas_puertas(p,&puertas);
				cerrar_todas_ventanas(v,&ventanas);
				apagar_todos_focos(f,&focos);				
			}			
		break;
		case 2:
			printf("Ingrese hora: ");
			scanf("%d",&hr);
			printf("Llueve? 1)Si 0)No: ");
			scanf("%d",&lluvia);
			printf("Nublado? 1)Si 0)No: ");
			scanf("%d",&nub);
			
			if (nub==0&&lluvia==0){
				apagar_focos_exterior(f,&focos);				
			}
			
			if (lluvia==1){
				cerrar_todas_ventanas(v,&ventanas);
			}
			if (hr>8&&hr<20){
				apagar_focos_exterior(f,&focos);					
			}
		break;
		case 3:
			for (i=0;i<f;i++){
				printf("\n Foco %d %d",i+1,focos[i].estado);
			}
			for(i=0;i<p;i++){
				printf("\n Puerta %d %d",i+1,puertas[i].estado);
			}
			for (i=0;i<v;i++){
				printf("\n Ventana %d %d",i+1,ventanas[i].estado);
			}
		break;
	}
	
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

	
	void cerrar_todas_puertas(int p,struct puerta *puertas){
		int i;
		printf("Cerrando Todas Puertas");
		
		for (i=0;i<p;i++){
			puertas[i].estado=0;
			printf("\n Puerta %d %d",i+1,puertas[i].estado);
		}
		
	}
	
	void cerrar_puertas_exterior(int p,struct puerta *puertas){
		int i;
		printf("Cerrando Puertas a Exterior");
		
		for (i=0;i<p;i++){
			if (puertas[i].ubicacion==1)	puertas[i].estado=0;
			printf("\n Puerta %d %d",i+1,puertas[i].estado);
		}
		
	}	

	void cerrar_todas_ventanas(int v,struct ventana *ventanas){
		int i;
		printf("Cerrando Todas Ventanas");
		
		for (i=0;i<v;i++){
			ventanas[i].estado=0;
			printf("\n Ventana %d %d",i+1,ventanas[i].estado);
		}
		
	}
	
	
	void cerrar_ventanas_exterior(int v,struct ventana *ventanas){
		int i;
		printf("Cerrando Ventanas a Exterior");
		
		for (i=0;i<v;i++){
			if (ventanas[i].ubicacion==1)	ventanas[i].estado=0;
			printf("\n Ventana %d %d",i+1,ventanas[i].estado);
		}
		
	}

	void cerrar_ventanas_exterior_baja(int v,struct ventana *ventanas){
		int i;
		printf("Cerrando Ventanas a Exterior Planta Baja");
		
		for (i=0;i<v;i++){
			if (ventanas[i].ubicacion==1&&ventanas[i].piso==1)	ventanas[i].estado=0;
			printf("\n Ventana %d %d",i+1,ventanas[i].estado);
		}
		
	}
	
	void apagar_todos_focos(int f,struct foco *focos){
		int i;
		printf("Apagando Todos los Focos");
		
		for (i=0;i<f;i++){
			focos[i].estado=0;
			printf("\n Foco %d %d",i+1,focos[i].estado);
		}
		
	}

	void apagar_focos_exterior(int f,struct foco *focos){
		int i;
		printf("Apagando Focos a Exterior");
		
		for (i=0;i<f;i++){
			if (focos[i].espacio==1)	focos[i].estado=0;
			printf("\n Foco %d %d",i+1,focos[i].estado);
		}
		
	}
	
	void focos_minima(int f,struct foco *focos){
		int i;
		printf("Focos a Minima");
		
		
		
		for (i=0;i<f;i++){
			if (focos[i].estado>=2) focos[i].estado=1;
			printf("\n Foco %d %d",i+1,focos[i].estado);
		}
		
	}



