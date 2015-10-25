#include<stdio.h>
int n;
int i=0;
int a=0;
int main()
{
	printf("Sumador de ciclo\n");
	printf("ingresa el numero:\n");
	scanf("%d",&n);
	while(i<(n+1))
	{
		a=a+i;
		i=i+1;
	}
	printf("El resultado es %d\n", a);
	system("pause");
}
