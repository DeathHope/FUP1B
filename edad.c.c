#include<stdio.h>//libreria de E/S
int E1;
int main()
{//inicio
printf("Escribe tu Edad:\n");
scanf("%d",&E1);
if(E1>=0 && E1<=12)
{
	printf("Eres un chaval\n");
}
else
{
	if(E1>=13 && E1<=18)
	{
        printf("Eres adolecente\n");
	}
	else
	{
		if(E1>=19 && E1<=29)
		{
			printf("Eres joven y guapo\n");
		}
		else
		{
			if(E1>=30 && E1<=60)
			{
				printf("Eres adulto\n");
			}
			else
			{
				printf("Eres un vejestorio\n");
			}
		}
	}
}
system("pause");
}//fin
