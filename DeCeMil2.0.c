#include<stdio.h>
int x,y,z,u,d,c,m;
char s;
main()
{
	
do
{
	printf("Programa: Unidad, Decimal, Centena, Millar\n\n");
	printf("Ingrese su numero:\n");
	scanf("%d",&x);
	u=x%10;
	printf("\nUnidades:%d\n",u);
	
	y=x-u;
	y=y%100;
	d=y/10;
	printf("Decenas:%d\n",d);
	
	y=x-d*10-u;
	z=y%1000;
	c=(z/10)/10;
	printf("Centenas:%d\n",c);
	
	y=x-d*10-c*10-u;
	m=y/1000;
	printf("Millares:%d\n",m);
	
	printf("\nQuieres hacer otra operacion? \n 1)SI\n 2)NO\n");
    scanf("%d",&s); 
	}
	
	while(s==1);
	system("pause");
}
