#include<stdio.h>

int main(void){
   
   int x, y,z;
   printf("Enter x: ");
   scanf("%d", &x);
   printf("Enter y: ");
   scanf("%d", &y);

   if((x>60)&&(y>60)){
	z='A';
}else if((x<60)&&(y<60)){
	z='C';
}else{
	z='B';
}
printf("%c", z);

}
