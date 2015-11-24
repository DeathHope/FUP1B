#include<stdio.h>
int M[100],c=0,b=0,a=0;
int main()
{
	scanf("%d", &a);
	while(a>=2)
	{
		M[c]=a%2;
		a=a/2;
		c++;
	}
	M[c]=a;
		for(b=c;b>=0;b--)
	{
		printf("%d\n",M[b]);
	}
	system("pause");
}
