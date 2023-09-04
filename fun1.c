#include<stdio.h>
void main()//calling function
{
	int a,b;
	void sum(int x,int y);//function declaration
	printf("Enter the first value:");
	scanf("%d",&a);
	printf("Enter the second value:");
	scanf("%d",&b);
	sum(a,b);//calling the function by passing two argument
}
void sum(int x,int y)//called function
{
	int z;
	z=x+y;
	printf("Sum of the two nos. is %d",z);
}
