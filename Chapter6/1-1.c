#include<stdio.h>
#define ARRAY_SIZE 5

void read_array(int x[],int n);
void print_array(int x[], int n);

int main(void){
   int i;
   int a[ARRAY_SIZE+1];
   read_array(a,ARRAY_SIZE);
   print_array(a,ARRAY_SIZE);

}

void read_array(int x[], int n){
   int i;
   i=1;

   while(i<n){
	printf("Enter data(%d)",i);
	scanf("%d",&x[i]);
	i++;
	}
}
void print_array(int x[],int n){
   int i;
   i=1;
   printf("\n");

   while(i<n){
	printf("Array data(%d):%d\n",i,x[i]);
	i++;
	}

}
