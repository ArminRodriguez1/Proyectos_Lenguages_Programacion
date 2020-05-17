#include <stdio.h>
int main(){
	float euro, dolar;
	printf("Ingrese una cantidad de dinero en Dolares ");
	scanf("%f",&dolar);
	euro=dolar*0.925498;
	
	printf("La cantidad de dolares ingresada corresponde a %f euros ", euro);
	
	return 0;

}
