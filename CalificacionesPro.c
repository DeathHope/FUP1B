#include<stdio.h>
int calificaciones[10];
int moda[10];
int i=0, mayor, posmayor; 
float k, e, suma=0;
int main()
{	
   for(i=0; i<10; i++)
   {
	scanf("%d",& calificaciones[i]);
	suma+=calificaciones[i];
	if(i==9)
		{
			k=suma/10;
			printf("\nPromedio General:%.1f\n\n",k);
		}	
   }
   for(i=0; i<10; i++)
   {
   	moda[i]<0;
   }
   	for(i=0; i<10; i++)
   	{
  	moda[calificaciones[i]-1]++;
    }
    for(i=0; i<10; i++)
   	{
     moda[i]<0;
  	printf("%d",moda[i]); 
   }
   for(i=0;i<10;i++)
   {
   	if(moda[i]>mayor)
   	{
   		mayor=moda[i];
   		posmayor=i;
	   }
   }
    printf("\n\nla moda es %d",posmayor+1);
}
