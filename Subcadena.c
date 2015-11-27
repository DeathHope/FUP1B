#include<stdio.h>
char cadena[50], subcadena[50];
int i=0, x=0, y=0;
int main()
{
	scanf("%s",cadena);
	scanf("%s",subcadena);
	while(cadena[i]!='\0')
	{
	{
		while(cadena[i]==subcadena[x])
		{
			i++;
			x++;
			if(subcadena[x]=='\0')
			{
				printf("Existe");break;
			}
		}
		x=0;
		i++;
		if(subcadena[x]=='\0')
		{
			printf("No Existe");break;
		}
	}
	}
	system("pause");
}
