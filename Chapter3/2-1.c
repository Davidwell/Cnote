#include<stdio.h>

int main(void){
   int N, i, j, sum, avg, x;
   printf("Enter N: ");
   scanf("%d",&N);

   for(i=1;i<=N;i++){
	for(sum=0,j=1;j<=3;j++){
	printf("Enter x: ");
	scanf("%d", &x);
	sum = sum+x;
	}
	avg = sum / 3;
	printf("avg= %d\n",avg);



	}



}
