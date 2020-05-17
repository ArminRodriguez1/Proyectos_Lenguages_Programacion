#include <stdio.h>
#include <math.h>
 void main(){
 	float a,b,c,x1,x2;
 	printf("Ingrese el valor de a: \n");
 	scanf("%f",&a);
 	printf("Ingrese el valor de b: \n");
 	scanf("%f",&b);
 	printf("Ingrese el valor de c: \n");
 	scanf("%f",&c);
 	
 	x1=(-b+sqrt(b*b-4*a*c))/(2*a);
 	x2=(-b-sqrt(b*b-4*a*c))/(2*a);
 	
 	printf("Valor de x1: \n");
 	printf("%f", x1);
 	printf("\n");
 	printf("Valor de x2: \n");
 	printf("%f", x2);
 	
 	
 }
