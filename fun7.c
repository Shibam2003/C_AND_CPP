//WAP to show call by reference
#include<stdio.h>
void main()//calling function
{
	int a,b;
	void swap(int *x,int *y);
	printf("Enter the first value:");
	scanf("%d",&a);
	printf("Enter the second value:");
	scanf("%d",&b);
	printf("The value of a and b before function call: %d , %d\n",a,b);
	swap(&a,&b);
	printf("The value of a and b after function call: %d , %d\n",a,b);
}
void swap(int *x,int *y)//called function
{
	int z;
	z=*y;
	*y=*x;
	*x=z;
}
