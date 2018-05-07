// Elemento menor de un arreglo, utilizando punteros.
#include <stdio.h>
#include <stdlib.h>

int main(){
	char const l=100;
	int vec[l],i,a,menor=999;
	int* Pvec;
    int* m;
	Pvec = &vec[0];
    m = &menor;
	printf("cual es la cantidad de numeros que ingresaras:\n");
	scanf("%d",&a);
	for( i=0 ; i<a ; i++ ){
	 printf("ingresa el numero #%d:\n",i+1);
	 scanf("%d",&vec[i]);
    }
    
    
    for( i=0 ; i<a ; i++ ){
	 if(*Pvec+i<menor){
	 	menor= vec[i];
	 }
    }
    
   printf("El numero menor del arreglo es : %d",*m);
    
     system("pause");
     return 0;
}
