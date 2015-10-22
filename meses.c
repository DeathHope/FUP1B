#include<stdio.h>//libreria de E/S
int mes;
int main()
{//inicio
printf("Esbribe el numero del mes");
scanf("%d",&mes);
switch (mes){
	 case 1:{
     	printf("Enero\n");
     	break;
     }
     
     case 2:{
     	printf("febrero\n");
     	break;
     }
     
     case 3:{
     	printf("marzo\n");
     	break;
     }
     
      case 4:{
     	printf("Abril\n");
     	break;
     }
     
     case 5:{
     	printf("mayo\n");
     	break;
     }
      
      case 6:{
     	printf("junio\n");
     	break;
     }
     
      case 7:{
     	printf("julio\n");
     	break;
     }
     
      case 8:{
     	printf("Agosto\n");
     	break;
     }
     
      case 9:{
     	printf("septiembre\n");
     	break;
     }
     
      case 10:{
     	printf("Octubre\n");
     	break;
     }
     
      case 11:{
     	printf("Noviembre\n");
     	break;
     }
     
      case 12:{
      	printf("Diciembre\n");
      	break;
      }
     
     default:{
     	printf("no es un mes\n");
     	break;
     }
}  
system ("pause");
}//fin




