#include<stdio.h>
int n, i;
int main()
{
	printf("Dame un numero:\n");
	scanf("%d",&n);
	for(i=1;i<=n+1;i++)
	{
		i=n%10;
		printf("%d\n",i);
		n=n/10;
	}
	system("pause");
}
