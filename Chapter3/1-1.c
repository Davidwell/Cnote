#include<stdio.h>

int main(void){

   int sum, i, x;
   for(sum=0,i=1;i<=5;i++){
	printf("Enter a number: ");
	scanf("%d", &x);
	sum=sum+x;
}
   printf("total=%d", sum);

}
