// Programa para determinar si un numero es par o impar, haciendo referencia a los punteros.
#include <stdlib.h>
#include <stdio.h>


int main(){
	
	int a,*b=&a;
	
	printf("ingrese un numero para determinar si es par o impar : \n");
	scanf("%d",&a);
	if(*b%2==0){
		printf("El numero es par! \n");
	}else{
		printf("El numero es impar! \n");
	}
	
	system("pause");
	return 0;
}



