#include<stdio.h>
char cadena[50], buscar[50];
int i=-1, x=0, y=0, z=-1, j=0;
int main()
{
	scanf("%s",cadena);
	scanf("%s",buscar);
	for(j=0;buscar[j]!='\0';j++){
		i++;
	}
	while(cadena[x]!='\0'){
		if(buscar[y]==cadena[x]){
			z++;
			y++;
		}
		x++;
	}
	if(z==i){
		printf("existe\n");
	}
	else{
		printf("no existe\n");
	}
	system("pause");
}

