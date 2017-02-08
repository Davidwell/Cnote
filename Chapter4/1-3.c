#include<stdio.h>
#include<math.h>
int main(void){

   int N, i, x;
   double y;

   printf("Enter N: ");
   scanf("%d", &N);
   printf("Enter x: ");
   scanf("%d", &x);
   i=0;

   do{
	i=i+1;
	y = pow(x,i);
	
	}while(y<=N);
   
   printf("i=%d\n",i);


}
