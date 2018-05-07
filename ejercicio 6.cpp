

#include <stdlib.h>
#include <stdio.h>


int main (){
	
	int num[100],n,busqueda,ban=0;
	int* dera;
	int* busca;
	int* tam;
	
	dera = &ban;
	busca = &busqueda;
	tam = &n;
	printf("Escriba el tamaño del vector: \n");
	scanf("%d",&n);
		for(int i=0;i<*tam;i++){
		printf("digite el elemente #%d del vector: \n",i+1);
	    scanf("%d",&num[i]);
	}
	
	printf("¿Que numero desea buscar en el arreglo?\n");
	scanf("%d",&busqueda);
	for(int i=0;i<*tam;i++){
		if(num[i]==*busca){
			printf("Si esta.\n");
	        ban=1;
		
		}
	}
		if(*dera==0){
		
		printf("No esta.\n");}
		
	system("pause");
	return 0;
}
