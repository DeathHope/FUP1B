#include <stdio.h>
int x,a,b,c;
float d,e;
int main()
{
	do{
		printf("Elige la operacion que deseas:\n\n");
        printf("\n1.-Suma\n2.-Resta\n3.-Multiplicacion\n4.-Division\n\n");
        printf("introduce una opcion:\n");
        scanf("%d",&x);
        switch(x)
        {
        	case 1:{
        		printf("introduce dos cifras:\n");
                scanf("%d",&a);
                scanf("%d",&b);
                printf("El resultado de la suma es:\n\n%d\n\n",a+b);
				break;
			}
			case 2:{
        		printf("introduce dos cifras:\n");
                scanf("%d",&a);
                scanf("%d",&b);
                printf("El resultado de la resta es:\n%d\n\n",a-b);
				break;
			}
			case 3:{
        		printf("introduce dos cifras:\n");
                scanf("%d",&a);
                scanf("%d",&b);
                printf("El resultado de la multiplicacion es:\n\n%d\n\n",a*b);
				break;
			}
			case 4:{
        		printf("introduce dos cifras:\n");
                scanf("%d",&d);
                scanf("%d",&e);
                printf("El resultado de la division es:\n%f\n\n",d/e);
				break;
			}
			default:{
				printf("NO COMPILA xD \n");
				break;
			}			
		}
		printf("Quieres hacer otra operacion? \n 1)SI\n 2)NO\n");
        scanf("%d",&c); 
	}
	while(c==1);
	system("pause");
}
