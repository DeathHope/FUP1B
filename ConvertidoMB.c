#include<stdio.h>//Libreria de E/S
/*
calculador de MB
*/
int resultado1;
int resultado2;
int resultado3;
float resultado4;
double resultado5;
int N1; 
int main()
{//inicio
printf("Esbribe la cantidad total:");
scanf("%d", &N1); 
resultado1= N1*1024*8;
resultado2= N1*1048576;
resultado3= N1*1024;
resultado4= N1/1024;
resultado5= resultado4/1024;
printf("\n la conversion a bits es de:%d\n", resultado1);
printf("\n la conversion a bytes es de:%d\n", resultado2);
printf("\n la conversion a kilobytes es de:%d\n", resultado3);
printf("\n la conversion a gigabytes es de:%f\n", resultado4);
printf("\n la conversion a terabytes es de:%f\n", resultado5);
system("pause");
}//fin
