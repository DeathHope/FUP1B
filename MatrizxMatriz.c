#include <stdio.h>
int matriz[10][10], matriz2[10][10],resul[10][10],a,b,c,d,h,i,j;
int main()
{

	printf("Pograma que multiplica matrices\n\n");
	printf("Numero de filas de la 1ra matriz:\n");
	scanf("%d",&a);
	printf("Numero de columnas de la 1ra matriz:\n");
	scanf("%d",&b);
	printf("Numero de filas de la 2da matriz:\n");
	scanf("%d",&c);
	printf("Numero de columnas de la 2da matriz:\n");
	scanf("%d",&d);

	if(c>=b)
	{
		for(i=1;i<=a;i++)
		{
			for(j=1;j<=b;j++)
			{
				printf("Matriz: ");
				scanf("%d",&matriz[i][j]);
			}
		}	
	    printf("\n");
	    for(i=1;i<=c;i++)
	    {
		    for(j=1;j<=d;j++) 
		    {
		    	printf("Matriz2: ");
			    scanf("%d",&matriz2[i][j]);
		    }
	    }
	    for(i=1;i<=a;i++)
	    {
		    for(j=1;j<=d;j++)
		    {
		    	resul[i][j]=0;
			    for(h=1;h<=b;h++)
			    {
			    	resul[i][j]=(resul[i][j]+(matriz[i][h]*matriz2[h][j]));
			    }
		    }
	    }
	    printf("\n\nmatriz 1ra es:\n");
	    for(i=1;i<=a;i++)
		{
			for(j=1;j<=b;j++)
			{
				printf("%4d",matriz[i][j]);	 
			}
			printf("\n");
		}
		printf("\n\nmatriz 2da es:\n");
	    for(i=1;i<=c;i++)
	    {
	    	for(j=1;j<=d;j++)
		    {
		    	printf("%4d",matriz2[i][j]);
		    }
		     printf("\n");
	    }
	    printf("\n\nEL RESULTADO ES:\n");
        for(i=1;i<=a;i++)
        {
        	printf("\n");
    	    for(j=1;j<=d;j++)
    	    {
    	    	printf("%4d",resul[i][j]);
		    }
	    }
    }
}
