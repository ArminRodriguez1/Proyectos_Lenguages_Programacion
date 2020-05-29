
#include<stdio.h>
main ()
{
int numero, miles, cientos, dieces, unos;

printf("Ingrese el numero a convertir:\n");
scanf ("%d", & numero);
printf ("El numero romano es:\n");
unos = numero%10;
numero = numero/10;
dieces = numero%10;
numero = numero/10;
cientos = numero%10;
miles = numero/10;
int i =0;
for(i=0;i<miles;i++){
	printf ("M"); 
}


//switch (miles){

//case 1: printf ("M"); 
//break;
//case 2: printf ("MM"); 
//break;
//case 3: printf ("MMM"); 
//break;
//default: 
//break;
//}

for()
switch (cientos){

case 1: printf ("C"); 
break;
case 2: printf ("CC"); 
break;
case 3: printf ("CCC"); 
break;
case 4: printf ("CD"); 
break;
case 5: printf ("D"); 
break;
case 6: printf ("DC"); 
break;
case 7: printf ("DCC"); 
break;
case 8: printf ("DCCC"); 
break;
case 9: printf ("CM"); 
break;
default: 
break;
}

switch (dieces){

case 1: printf ("X"); 
break;
case 2: printf ("XX"); 
break;
case 3: printf ("XXX"); 
break;
case 4: printf ("XL"); 
break;
case 5: printf ("L"); 
break;
case 6: printf ("LX"); 
break;
case 7: printf ("LXX"); 
break;
case 8: printf ("LXXX"); 
break;
case 9: printf ("XC"); 
break;
default: 
break;
}

switch (unos) {

case 1: printf ("I"); 
break;
case 2: printf ("II"); 
break;
case 3: printf ("III"); 
break;
case 4: printf ("IV"); 
break;
case 5: printf ("V"); 
break;
case 6: printf ("VI"); 
break;
case 7: printf ("VII"); 
break;
case 8: printf ("VIII"); 
break;
case 9: printf ("IX"); 
break;
default: 
break;
}
getch ();
return 0;
}
