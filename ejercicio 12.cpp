#include <stdio.h>
#include <stdlib.h>



int main (){
int i;
float num[]={32.583,11.239,45.781,22.237};
float* pNum;
pNum = &num[0];
	 printf("Los elementos del arreglo son:\n");
	for( i=0;i<4;i++){
    printf("%.3f\n", *(pNum+ i));
	}
	
	
	return 0;
}
