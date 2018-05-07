// determina cuantas veces aparece una vocal en su nombre

#include <stdio.h>
#include <stdlib.h>


int main(){
	
const char l=20;
char c1 [l];
int i,A=0,e=0,I=0,o=0,u=0,suma;
const char* longitud;
int* q;
int* w;
int* r;
int* t;
int* y;

q = &A;
w = &e;
r = &I;
t = &o;
y = &u;

longitud = &l;

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
    if(*q>=1){
	
	printf("la cantidad de veces que esta la vocal a es:%d \n",*q);
	}else{
	}
	
	if(*w>=1){
		
		printf("la cantidad de veces que esta la vocal e es:%d\n ",*w);
		}else{
		}
	
	if(*r>=1){
		printf("la cantidad de veces que esta la vocal i es:%d\n ",*r);
		}else{
		}
	
	if(*t>=1){
		printf("la cantidad de veces que esta la vocal o es:%d\n ",*t);
		}else{
		}
	
	if(*y>=1){
		printf("la cantidad de veces que esta la vocal u es:%d\n ",*y);
		}else{
		} 
	
	system("pause");
	return 0;
}
