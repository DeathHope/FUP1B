#include<stdio.h>
int a;
int b;
int c;
int main()

{
	printf("Ingresa la 1ra cantidad:\n");
	scanf("%d",&a);
	printf("Ingresa la 2da cantidad:\n");
	scanf("%d",&b);
	printf("Ingresa la 3ra cantidad:\n");
	scanf("%d",&c);
	if(a>b && a>c)
	{
		printf("El numero mayor es:%d\n",a);
		if(b<a && b>c)
		{
			printf("El numero medio es:%d\n",b);
			printf("El numero menor es:%d\n",c);
		}
		else
		{
		if(c<a && c>b)		
		{
			printf("El numero medio es:%d\n",c);
			printf("El numero menor es:%d\n",b);
		}
	}
}
else
{
	if(b>a && b>c)
{
	printf("El numero mayor es:%d\n",b);
	if(a<b && a>c)
	{
		printf("El numero medio es:%d\n",a);
		printf("El numero menor es:%d\n",c);
	}
	else
	{
		if(c<b && c>a)
	{
		printf("El numero medio es:%d\n",c);
		printf("El numero menor es:%d\n",a);
	}	
	}
}
else
{
	if(c>b && c>a)
	{
		printf("El numero mayor es:%d\n",c);
		if(a<c && a>b)
		{
			printf("El numero medio es:%d\n",a);
			printf("El numero menor es:%d\n",b);
		}
		else
		{
		if(b<c && b>a)
		{
			printf("El numero medio es:%d\n",b);
			printf("El numero menor es:%d\n",a);
		}
		}
	}
	}
}
system("pause");
}		
