#include <stdio.h>
#include <string.h>
void main()
{
//Dado un número entero mostrar ese número con la nomenclatura de los numeros romanos DESDE EL 1 AL 3999
char romano[10];
printf("Ingrese un numero romano a convertir \n");
scanf("%s",romano);
int i=0, r=0, valor;
for(i;i<strlen(romano);i++){
    	switch(romano[i]){
    		case 'I': valor=1;break;
    		case 'V': valor=5;break;
    		case 'X': valor=10;break;
    		case 'L': valor=50;break;
    		case 'C': valor=100;break;
    		case 'D': valor=500;break;
    		case 'M': valor=1000;break;
    		default : break;
		}
		r+=valor;
	
}
printf("El valor es %d", r);
return r;

}
