#include<stdio.h>
int N1,res;
char S;
int main()
{
	printf("Par o Impar");
	printf("\nIngrese un numero:\n");
	scanf("%d",&N1);
	
	res=N1 % 2;
	
	if(res==0)
	{
		printf("Es un numero par\n\n");
	}
	else
	{
		printf("Es un numero impar\n\n");
    }
	system("pause");
}
