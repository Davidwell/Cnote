#include<stdio.h>

int main(void){

   int x, y, z;
   printf("Enter x: ");
   scanf("%d", &x);
   printf("Enter y: ");
   scanf("%d", &y);

   if(x>y){
	z=x;
	}else{
	z=y;
	}
   printf("%d",z);
}
