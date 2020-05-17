#include <stdio.h>
void main(){
	int resistencia1, resistencia2, resistenciaEquivalente;
	printf("Ingrese resistencia 1: \n");
 	scanf("%d",&resistencia1);
 	printf("Ingrese resistencia 2: \n");
 	scanf("%d",&resistencia2);
 	
 	resistenciaEquivalente=(resistencia1*resistencia2)/(resistencia1+resistencia2);
 	printf("Resistencia Equivalente : %d");
}
