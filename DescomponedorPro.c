#include<stdio.h>
int x;
int i;
int main()
{
	printf("Ingresa la cantidad a descomponer:\n\n");
	scanf("%d",&x);
	while(x!=0)
	{
		i=x%10;
		printf("%d\n",i);
		x=x/10;
	}
	system("pause");
}
