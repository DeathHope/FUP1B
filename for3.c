#include<stdio.h>
int a, b, i, suma;
int main()
{
	printf("Dame dos numero:\n");
	scanf("%d",&a);
	scanf("%d",&b);
	suma=0;
	for(i=1;i<=b;i++)
	{
		suma=suma+a;
		suma=suma;
	}
	printf("%d\n", suma);
	system("pause");
}
