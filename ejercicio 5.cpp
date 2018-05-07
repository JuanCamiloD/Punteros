// rellenar un vector con N elementos, posteiormente ordenarlos elemento en orden acendente.

#include <stdlib.h>
#include <stdio.h>


int main (){
	int num[100],n,aux,i,j;
	int* numero;
	int* tam;
	
	numero = &num[0];
	tam = &n;
	printf("Escriba el tamaño del vector: \n");
	scanf("%d",&n);
		for(int i=0;i<*tam;i++){
		printf("digite el elemente #%d del vector: \n",i+1);
	    scanf("%d",&num[i]);
	}
	for (i=0; i<*tam-1; i++){
        for (j=i+1; j<*tam; j++) {
           if(num[i]>num[j]){
                aux = num[i];
                num[i] = num[j];
                num[j] = aux;
            }
           }
         }
       for(int i=0;i<*tam;i++){
		printf("los elementos del vector son: %d \n",*numero+i);}

	
	return 0;
}


