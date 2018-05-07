#include <stdlib.h>
#include <stdio.h>

int main(){
	int vec[10],i;
	int* Pvec;
	
	Pvec = &vec[0];
	
	printf("ingresa 10 numeros:\n");
	for( i=0 ; i<10 ; i++ ){
	 printf("ingresa el numero #%d:\n",i+1);
	 scanf("%d",&vec[i]);
    }
    
    printf("numeros pares del arreglo son:\n");
    for( i=0 ; i<10 ; i++ ){
    	if(vec[i]%2==0){
		printf("La posicion de memoria es  #%d el numero es par : %d  \n",&*Pvec+i,*Pvec+i);
	    }
	}
	
	
	return 0;
}
