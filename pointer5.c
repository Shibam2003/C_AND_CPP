//WAP to display call by reference using pointer 
#include<stdio.h>
void swap(int *x, int *y);
void main(){
	int a,b;
	printf("Enter the value of a and b:");
	scanf("%d%d",&a,&b);
	printf("\nBefore calling the swap function value of a and b are : %d,%d",a,b);
	swap(&a,&b);
	printf("\nAfter calling the swap fuction value of a and b are: %d,%d",a,b);
	
}
void swap(int *x, int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
