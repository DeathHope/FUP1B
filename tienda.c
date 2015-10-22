#include<stdio.h>//libreria de E/S
/*Friki's Shop
*/
int N1;
int total;
int main()
{// inicio
printf("Tienda\n");
printf("(1)poster $25\n(2)mangas $100\n(3)comics $100\n(4)Videogames $15\n(5)Figuras de Coleccion $150\n(6)pockis $25\n(7)playera $50\n(8)refrescos $10\n(9)loli $200000\n(10)maruchan $35\n");
printf("Escribe el numero del producto que desea\n");
scanf("%d",&N1);

switch (N1)
{

	case 1: {
		printf("¿cuantos posters quieres?\n");
		scanf("%d",&N1);
		total=N1*25;
		printf("total:%d\n",total);
		break;
	}
	case 2: {
		printf("¿cuantos mangas quieres?\n");
		scanf("%d",&N1);
		total=N1*100;
		printf("total:%d\n",total);
		break;
	}
	case 3: {
		printf ("¿cuantos comics quiere?\n");
		scanf("%d",&N1);
		total=N1*100;
		printf ("total:%d\n",total);
		break;
	}
	case 4:{
		printf ("¿cuantos Videogames quiere?\n");
		scanf("%d",&N1);
		total=N1*15;
		printf("total:%d\n",total);
		break;
	}
	case 5:{
		printf("¿cuantas Figuras de Coleccion quiere?\n");
		scanf("%d",&N1);
		total=N1*150;
		printf ("total:%d\n",total);
		break;
	}
	case 6:{
		printf("cuantas tortas quiere\n");
		scanf("%d",&N1);
		total=N1*25;
		printf("total:%d\n",total);
		break;
	}
	case 7:{
		printf("¿cuantas playeras quiere?\n");
		scanf("%d",&N1);
		total=N1*50;
		printf("total:%d\n",total);
		break;
	}
	case 8:{
		printf("¿cuantos refrescos quiere?\n");
		scanf("%d",&N1);
		total=N1*10;
		printf("total:%d\n",total);
		break;
	}
	case 9:{
		printf("¿cuantas lolis quiere?\n");
		scanf("%d",&N1);
		total=N1*200000;
		printf("total:%d\n",total);
		break;
	}
	case 10:{
		printf("¿cuantas maruchan quiere?\n");
		scanf("%d",&N1);
		total=N1*35;
		printf("total:%d\n",total);
		break;
	}
	default:{
	printf("no hay");
		break;	
}
}
system("pause");
}//fin

