// Programa para determinar cuantas vocales hay en un nombre

#include <stdio.h>
#include <stdlib.h>


int main(){
	
const char l=20;
char c1 [l];
int i,A=0,e=0,I=0,o=0,u=0,suma;
const char* longitud;
int* mas;


longitud = &l;
mas = &suma;
 printf("Digite su nombre para determinar cuantas vocales tiene: ");
 fflush(stdin); //borra el bufer de entrada
 fgets (c1, *longitud, stdin);
 	
	
	for( i=0;i<*longitud;i++){
		if (c1[i]==97){
			A++;
		}
	}
		for( i=0;i<*longitud;i++){
		if (c1[i]==101){
			e++;
		}
	}
		for( i=0;i<*longitud;i++){
		if (c1[i]==105){
			I++;
		}
	}
	
		for( i=0;i<*longitud;i++){
			if (c1[i]==111){
			o++;
		}
	}
		for( i=0;i<*longitud;i++){
			if (c1[i]==117){
			u++;
		}
	}
     suma = A+e+I+o+u;
	
		printf("la cantidad de vocales que ahi es:%d\n ",*mas);
	
	system("pause");
	return 0;
}
