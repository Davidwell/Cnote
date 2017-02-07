#include<stdio.h>

int main(void){

   int sum, i, x,N;
   
   printf("Enter N: ");
   scanf("%d", &N);

   for(sum=0,i=1;i<=N;i++){
	printf("Enter a number: ");
	scanf("%d", &x);
	sum=sum+x;
}
   printf("total=%d\n", sum);

}
