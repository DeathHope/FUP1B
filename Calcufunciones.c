#include<stdio.h>
int suma(int a, int b)
{
	int res;
	res=a+b;
	return res;
}
int resta(int a, int b)
{
	int res;
	res=a-b;
	return res;
}
int multi(int a, int b)
{
	int res;
	res=a*b;
	return res;
}

float div(int a, int b)
{
	float res;
	res=a/b;
	return res;
}	
int main()
{
	int res,a,b;
	scanf("%d",& a);
	scanf("%d",& b);
	res=suma(a, b);
	printf("El resultado de la suma es:  %d\n", res);
	res=resta(a, b);
	printf("El resultado de la resta es:  %d\n", res);
	res=multi(a, b);
	printf("El resultado de la multiplicacion es: %d\n",  res);
	res=div(a, b);
	printf("El resultado de la division es: %d",  res);	
}
