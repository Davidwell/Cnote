#include<stdio.h>

int main(void){
   int i,x, max;
   int A[11];

   for(i=1;i<=10;i++){
	printf("Enter x: ");
	scanf("%d", &A[i]);
	}
   max=0;
   for(i=1;i<=10;i++){
	if(A[i]>max){
	   max=A[i];
		}
	
   }

   
   printf("max=%d\n",max);
}
