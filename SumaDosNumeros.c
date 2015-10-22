#include<stdio.h>//Libreria de E/S
/*
Programa que suma dos numeros
*/

int N1;
int N2;
int resultado;

int main ()

{//incio
printf ("Dame un numero:/n");
scanf ("%d",&N1);
printf ("Dame otro numero:/n");
scanf ("%d",&N2);
resultado= N1+N2;
printf ("El resultado de la suma es de:%d\n", resultado);
system("pause");
}//fin
