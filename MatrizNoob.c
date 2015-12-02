#include<stdio.h>
int identidad[3][3],i,j;
int main()
{
   	identidad[0][0]=1;
   	identidad[0][1]=0;
   	identidad[0][2]=0;
   	identidad[1][0]=0;
   	identidad[1][1]=1;
   	identidad[1][2]=0;
   	identidad[2][0]=0;
   	identidad[2][1]=0;
   	identidad[2][2]=1;
   	printf("La matriz identidad es:\n\n");
   	 for(i=0;i<3;i++)
   	 {
   	      for(j=0;j<3;j++)
   	       {
   	         printf("%d ",identidad[i][j]);	
		   }
		   printf("\n");
	 }
}
