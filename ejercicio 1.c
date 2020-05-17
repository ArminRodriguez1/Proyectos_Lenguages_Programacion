#include <stdio.h>
 
int main() {
	float precio,desc,total,d;
 
    printf("Ingrese precio del producto: ");
    scanf("%f",&precio);
    printf("Ingrese el descuento (como numero entero): ");
    scanf("%f",&desc);
 
    d = (desc/100);
    total = precio-(precio*d);
    
    printf("Precio con descuento %f",total);
 
    return 0;
}
