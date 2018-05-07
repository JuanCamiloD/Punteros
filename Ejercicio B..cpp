//programa para determinar si un numero es primo o no y mostrar la posicion de memoria donde se guardo
#include <stdio.h>
#include <stdlib.h>



int main(){
	
	int a=0,i,n,*b=&n;
         printf("Ingrese un numero: \n");
         scanf("%d",&n);
         for(i=1;i<(*b+1);i++){
         if(*b%i==0){
             a++;
            }
         }
         if(a!=2){
              printf("No es Primo");
            }else{
                printf("Si es Primo\n");
                printf("La direccion en memoria es: %d\n",&n);
         }
 
 system("pause");
 return 0;        
}

