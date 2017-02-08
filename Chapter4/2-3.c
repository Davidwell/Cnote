#include<stdio.h>

int main(void){
   int N, i, sum, x;
   i=1;
   sum=0;
   printf("Enter N: ");
   scanf("%d",&N);

   while(i<=N){
      printf("Enter x: ");
      scanf("%d",&x);
      sum=sum+x;
      i++;
	}
   
   printf("sum=%d",sum);

}
