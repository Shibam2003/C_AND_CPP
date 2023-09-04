#include<stdio.h>
void sum();
void main()//calling function
{	
	sum();
}
void sum()//called function
{
	int a,b;
	printf("Enter the first value:");
	scanf("%d",&a);
	printf("Enter the second value:");
	scanf("%d",&b);
	printf("Sum of the two no. is %d",a+b);
}
