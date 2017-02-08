#include<stdio.h>
int main(void){
   int M, N, x, y ;

   printf("Enter M: ");
   scanf("%d", &x);
   printf("Enter N: ");
   scanf("%d", &y);

   while(x!=y){
	if(x>y){
	   x=x-y;
	}else{
	   y=y-x;
		}
	} 
	printf("x=%d",x);
}
