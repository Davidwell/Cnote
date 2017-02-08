#include<stdio.h>

int main(void){
   
   int N, sum, x, i;

   printf("Enter N:");
   scanf("%d",&N);
   sum = 0;
   i=1;
   do{
	printf("Enter x: ");
	scanf("%d", &x);
	i++;
	sum = sum +x;	
	}while(i<=N);
   printf("sum= %d", sum);

}
