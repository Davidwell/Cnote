#include<stdio.h>

int main(void){

   int i, j, k, x;
   int MIN;
   int A[11] = {0, 7, 12, 32, 41, 10, 11, 5, 19, 6, 15};
   int B[11];

   for(i=1;i<10;i++){
	printf("A[%d]=%d\n",i,A[i]);
	}

   printf("\n\n");

   for(i=1;i<=10;i++){
	j=1;
	k=1;
	MIN=1000;
	
	for(;j<=10;j++){
	   x=A[j];
	   if(x<MIN){
		MIN = x;
		k = j;
		}
	}
 	B[k]= i;   //A矩陣第i小的位置是k
	A[k] = 1000;
	
} 
	printf("//A矩陣第i小的位置是k\n"); 
   for(i=1;i<=10;i++){
	printf("B[%d]=%d\n",i,B[i]);
	}
  
}


