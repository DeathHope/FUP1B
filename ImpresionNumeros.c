#include<stdio.h>
int N1;
int a;
int i;
int main()
{
	printf("programa  \n");
	printf("dame un numero");
	scanf("%d",&N1);
	a=1;
	while(a<=N1)
	{
		i=1;
		while(i<=a)
		{
			printf("%d",a);
	 	    i++;
		}
		printf("\n");
	    a++;
	}
	system("pause");
}
