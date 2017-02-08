#include<stdio.h>

int main(void){

   float x, y, u, v, t;
   printf("Enter x: ");
   scanf("%f",&x);  
   printf("Enter y: ");
   scanf("%f", &y);
   printf("Enter u: ");
   scanf("%f", &u);
   printf("Enter v: ");
   scanf("%f", &v);

   t= (x+y)/(u+v);
   printf("(x+y)/(u+v)=%0.3f",t);    


}
