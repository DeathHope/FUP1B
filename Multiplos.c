#include<stdio.h>
int Max[10], a=0;
int i;
int main()
{
	scanf("%d",&i);
	for(a=0;a<10;a++)
	{
	Max[a]=i*(a+1);
	printf("Sus multiplos son:%d\n", Max[a]);	
	}
}
