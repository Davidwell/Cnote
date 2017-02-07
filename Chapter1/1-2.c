#include<stdio.h>

int main(void){

   float x, y, z;
   printf("Enter x: ");
   scanf("%f", &x);
   printf("Enter y: "); 
   scanf("%f", &y);
   printf("x=%f,y=%f",x,y);
   z=x+y;
   printf("z=x+y=%f",z);
}
