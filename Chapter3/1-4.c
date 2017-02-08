#include<stdio.h>

int main(void){

   int N, Max, x, i ;
   printf("Enter N: ");
   scanf("%d",&N);

   Max = 0;
   for(i=1;i<=N;i++){
	printf("Enter a number: ");
	scanf("%d",&x);
	if(x>Max){
	Max = x;
		}
	}
	printf("Max = %d: ",Max);


}
