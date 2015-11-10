#include<stdio.h>
int a,b,c,i;
int main()

{
	printf("Ingresa los metros de profundidad donde se encuentra el cangrejo encerrado:\n");
	scanf("%d",&a);
	printf("Ingresa la cantidad que avanza para salir:\n");
	scanf("%d",&b);
	printf("Ingresa la cantida que retrocede:\n");
	scanf("%d",&c);
	i=1;
	while(i<(a+1))
	{
		if(a>=0)
		{
			a=a-b;
			printf("\nAvanza al dia:%d\n",a);

		}			
		if(a>=0)
		{
			a=a+c;
			printf("retrocede al dia:%d\n",a);
			i=i+1;
		}
	}
	printf("\nEl cangrejo salio en %d dias\n",i);
	system("pause");
}
