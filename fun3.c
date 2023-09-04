#include<stdio.h>
void main()//calling function
{
	int a,b,c;
	int sum(int x,int y);//function declaration
	printf("Enter the first value:");
	scanf("%d",&a);
	printf("Enter the second value:");
	scanf("%d",&b);
	c=sum(a,b);//calling the function by passing two argument
	printf("Sum of the two no. is %d",c;
}
int sum(int x,int y)//called function
{
	int z;
	z=x+y;
	return(z);
//	printf("Sum of the two nos. is %d",z);
}
