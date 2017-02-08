#include<stdio.h>

int main(void){
   int i,x;
   int A[11];

   for(i=1;i<=10;i++){
	printf("Enter x: ");
	scanf("%d", &A[i]);
	}

   for(i=1;i<=10;i++){
	x=A[i]+x;
	}

   x=x/10;
   printf("x=%d\n",x);
}
