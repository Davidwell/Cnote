#include<stdio.h>
int main(void){
   int i, j;
   int A[4][5];
   int B[4][5];
   int C[4][5];

   for(i=1;i<=3;i++){
	for(j=1;j<=4;j++){
	   printf("Enter A[%d][%d]: ", i,j);
	   scanf("%d",&A[i][j]); 
		}
	}
	
   for(i=1;i<=3;i++){
	for(j=1;j<=4;j++){
	   printf("Enter B[%d][%d]: ", i, j);
	   scanf("%d",&B[i][j]);
	}
}

   for(i=1;i<=3;i++){
	for(j=1;j<=4;j++){
	C[i][j]=A[i][j]+B[i][j];
	printf("C[%d][%d]=%d\t", i, j, C[i][j]);
	}
	printf("\n");

}

}
