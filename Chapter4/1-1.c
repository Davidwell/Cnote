#include<stdio.h>

int main(void){
	int x,y;

	printf("Enter M: ");
	scanf("%d", &x);
	printf("Enter N: ");
	scanf("%d", &y);

	do{
	if(x>y){	
	      x=x-y;
	   }else{
	      y=y-x;
	   }
	}while(x!=y);
	printf("x=%d ",x);

}
