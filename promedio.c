#include<stdio.h>
int a,b,c,d,e,f,g,h,i,j;
float k;
float m;
char n;
int main ()
{
	do
	{
		printf("PROGRAMA CALCULA PROMEDIO\n\n");
		printf("Ingresa 10 numeros:\n");
		scanf("%d",&a);
		scanf("%d",&b);
		scanf("%d",&c);
		scanf("%d",&d);
		scanf("%d",&e);
		scanf("%d",&f);
		scanf("%d",&g);
		scanf("%d",&h);
		scanf("%d",&i);
		scanf("%d",&j);
		k=a+b+c+d+e+f+g+h+i+j;
		m=k/10;
		printf("El resultado del promedio es: \n%.2f\n\n", m);
		printf("Quieres hacer otra operacion? \n 1)SI\n 2)NO\n");
        scanf("%d",&n); 
	}
	while(n==1);
	system("pause");
}
