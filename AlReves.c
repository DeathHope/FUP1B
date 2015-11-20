#include <stdio.h>
int Max[10],i=0,a;
int main()
{
    for(i=0;i<9;i++) 
	{
	   scanf("%d\n",&Max[i]);
    }
    for(a=9;a>-1;a--)
	{
        printf("%d\n",Max[a]);
    }
	system("pause");	
}
