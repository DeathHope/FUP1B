#include<stdio.h>
int matriz[4][4],i,j,h;
int main()
{
	printf("Ingresa los valores de la matriz:\n\n");
   	
	for(i=0;i<3;i++) 
	{
		for(j=0;j<3;j++)
		{
          scanf("%d",&matriz[i][j]);
        }
    }
	printf("Ingresa el numero para multiplicar la matriz:\n\n");
    scanf("%d",&h);
	printf("\n\nMatriz multiplicada:\n\n");
   	for(i=0;i<3;i++)
   	{
   	
   	    for(j=0;j<3;j++)
   	    {
   	     printf("%d ",matriz[i][j]*h);	
		}
		printf("\n");
	}
}
