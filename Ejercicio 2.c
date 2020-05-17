#include <stdio.h>
int main(){
	int lado1, lado2, perimetro, area;
 	printf("Ingrese el largo del rectangulo : ");
    scanf("%d",&lado1);
    printf("Ingrese el amcho del rectangulo: ");
    scanf("%d",&lado2);
    
    perimetro=lado1*2+lado2*2;
    area=lado1*lado2;
    
    printf("perimetro = %d \n", perimetro);
    printf("area = %d", area);
    return 0;
}

