#include<stdio.h>
int main(void){

   int M, N, x, y;

   printf("Enter M: ");
   scanf("%d", &x);
   printf("Enter N: ");
   scanf("%d", &y);

   for(;x!=y;){
	if(x<y){
	y=y-x;
	}else if (x>y){
	x=x-y;
	}
}
printf("x=%d",y);



}
