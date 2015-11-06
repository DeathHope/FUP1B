#include<stdio.h>
int a, i, j;
int main()
{
	printf("Dame un numero:\n");
	scanf("%d",&a);
	for(j=1;j<=a;j++)
	{
		for(i=1;i<=j;i++)
		{
			printf("%d", j);
		}
	printf("\n");
	}
	system("pause");
}
