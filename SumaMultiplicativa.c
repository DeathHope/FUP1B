#include<stdio.h>
int a;
int b;
int c=1;
int d=0;
int main()
{
	printf("Ingresa dos cantidades:\n");
	scanf("%d", &a);
	scanf("%d", &b);
	while(c<=a)
	{
		d=d+b;
		c=c+1;
	}
	printf("El resultado de la multiplicacion es: \n%d\n", d);
	system("pause");
}
