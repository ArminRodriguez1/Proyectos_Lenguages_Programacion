#include <stdio.h>

int main(){
	float pi=3.1416, perimetro, area, volumen;
	int radio;
	printf("Escriba el radio : ");
	scanf("%d",&radio);
	
	perimetro = 2*pi*radio;
	area = pi*radio*radio;
	volumen=(4/3)*pi*radio*radio*radio; 
	
	printf("El perimetro del circunferencia es : %f \n", perimetro);
	printf("El area del circulo es : %f \n", area);
	printf("El volumen del esfera es : %f \n", volumen);
}


