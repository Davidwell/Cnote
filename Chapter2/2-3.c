#include<stdio.h>

int main(void){

   char membership;
   float total;
   float discount;
   printf("Enter your membership: ");
   scanf("%c",&membership);
   printf("Enter total: ");
   scanf("%f",&total);
   
   switch(membership){

	case 'a':
	case 'A':
	   discount=0.8;
	   break;
	case 'b':
	case 'B':
	   discount=0.9;
	   break;
	default :
	   discount=1;
	   break;
}
   total=total*discount;
   printf("total=%0.f",total);
}
