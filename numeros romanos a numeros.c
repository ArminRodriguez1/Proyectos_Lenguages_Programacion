#include <stdio.h>
#include <string.h>


void main()
{
//Dado un n�mero entero mostrar ese n�mero con la nomenclatura de los numeros romanos DESDE EL 1 AL 3999
char romano[10];
scanf("%s",&romano);
printf("%s\n",romano);
int i;
for(i=0;i<strlen(romano);i++){
   printf("%c\n",romano[i]); 
    
}
}
