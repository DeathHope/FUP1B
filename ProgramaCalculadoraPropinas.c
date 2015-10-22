#include<stdio.h>//Libreria E/S
/*
calculador de propinas, pagar por persona y total a pagar 
*/
int resultado1;
int resultado2;
int resultado3;
int N1;
int N2;
int main()
{//inicio
printf("Esbribe la cantidad total a pagar:");
scanf("%d", &N1);
printf("numero de personas:");
scanf("%d",&N2);
resultado1= N1*0.10;
resultado2= resultado1+N1;
resultado3=resultado2/N2;
printf("La propina es de:%d\n", resultado1);
printf("El total a pagar es de:%d\n", resultado2);
printf("La cantidad a pagar por persona es de:%d\n", resultado3);
system("pause");
}//fin
