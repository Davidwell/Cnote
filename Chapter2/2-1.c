#include<stdio.h>

int main(void){
   
   int x,z;
   printf("Enter x: ");
   scanf("%d", &x);
   
   if(x<30){
	z=50;
}else if(x>60){
	z=100;
}else{
	z=70;
}
printf("%d", z);

}
