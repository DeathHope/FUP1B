#include<stdio.h>
int matriz[3][3],i,j;
int main()
{	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d", &matriz [i][j]);
		}
	}
	printf("\n");
	printf(" Matriz:\n");
	for(i=0; i<3; i++)
	{
		printf("\n");
		for(j=0; j<3; j++)
		{
			printf("%6d",matriz[i][j]);
		}
	}
	printf("\n");	
}
