#include<stdio.h>//Libreria deE/S
/*
AND=&&
OR=||
NOT=! para negar ! Y entre parentesis la condicion*/

int N1;
int main ()

{//inicio
printf ("Programa que te confirma si pasaste\n");
printf ("Ingresa tu calificacion:");
scanf("%d",&N1);
if(N1>=7 && N1<=10)
{
	printf("Felicidades pasaste\n");
}
if(N1>=0 && N1<=6)
{
	printf("Lo sentimos reprobaste, buena suerte a la proxima\n");
}
if(N1>10 || N1<0)
{
	printf("Esta calificacion esta fuera de rango\n");
}
system("pause");
}//fin



