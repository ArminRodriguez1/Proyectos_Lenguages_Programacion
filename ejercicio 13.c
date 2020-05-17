#include <stdio.h>
void main(){
	
	float codigoProducto, cantidad, descuento, precioTotal, precio,desc, total;
	
	printf("Ingrese el codigo del producto (max 6): \n");
 	scanf("%f",&codigoProducto);
 	printf("Ingrese el precio: \n");
 	scanf("%f",&precio);
 	printf("Ingrese la cantidad del producto: \n");
 	scanf("%f",&cantidad);
 	printf("Ingrese el descuento: \n");
 	scanf("%f",&descuento);
 	
 	
 	precioTotal = (precio*cantidad);
 	desc=(descuento/100);
 	total=precioTotal-(precioTotal*desc);
 	precioTotal=total+(total*0.19);
 	
 	printf("Precio total %f \n",precioTotal);
 	printf("Descuento %f \n", total);
 	printf("Iva %f \n", precioTotal);
 	
}


