#include<stdio.h>
//libreria deE/S
int K;
int R;
int main()
{//inicio
printf("Lavadora PRO 3000RS ultra\n");
printf("Ingresa la cantidad de ropa que quieres lavar:\n");
scanf("%d",&K);
if(K>=0 && K<=20)
{
	if(K>=0 && K<=10)
	{
		printf("El nivel de agua es el minimo\n");
	}
	else
	{
		if(K>=11 && K<=15)
		{
			printf("El nivel de agua es normal\n");
		}
		else
		{
			if(K>=16 && K<=20)
			{
				printf("El nivel de agua es el maximo\n");
			}
		}
	}
	printf("Ingresa el tipo de ropa a lavar:\ndelicada(1)\nnormal(2)\nmuy sucia(3)\n");
	scanf("%d",&R);
	if(R>=1 && R<=3)
	{
		if(R<2)
		{
			printf("La ropa es delicada\nEl tiempo de lavado es de 5min\n.");
		}
		else
		{
			if(R<3)
			{
				printf("La ropa es normal\nEl tiempo de lavado es de 10min\n.");
			}
			else
			if(R>2)
			{
				printf("La ropa esta muy sucia\nEl tiempo de lavado es de 20min\n.");
			}
		}
	}
	else
	{
		printf("Este tipo de ropa no existe\n");
	}
}
else
{
	printf("'Error, que no sabes lavar. Retira kilos de ropa\n'");
}
system("pause\n");
}//fin
