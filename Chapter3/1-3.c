#include<stdio.h>

int main(void){

   int sum, i, x,N, a, b;
   
   printf("Enter N: ");
   scanf("%d", &N);
   printf("Enter a: ");
   scanf("%d", &a);
   printf("Enter b: ");
   scanf("%d", &b);

   for(x=a,sum=x,i=1;i<N;i++){
	x=x+b;
	sum=sum+x;
}
   printf("sum=%d\n", sum);

}
