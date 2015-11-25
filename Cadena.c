#include<stdio.h>
char cadena[20], u, v;
int i=0;
int main()
{
	scanf("%s",cadena);
	scanf("%s",&u);
	scanf("%s",&v);
	
	for(i=0;cadena[i]!=' ';i++)
	{
		if(cadena[i]==u)
		{
			cadena[i]=v;
		}
    }
    printf("%s\n",cadena);
    system("pause");
}
