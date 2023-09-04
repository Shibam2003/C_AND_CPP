#include<stdio.h>
void main()//calling function
{
	int a,b;
	//function declaration
	void sum(int x,int y);
	void sub(int x,int y);
	void mult(int x,int y);
	void div(int x,int y);
	printf("Enter the first value:");
	scanf("%d",&a);
	printf("Enter the second value:");
	scanf("%d",&b);
	sum(a,b);//calling the function by passing two argument
	sub(a,b);
	mult(a,b);
	div(a,b);
}
void sum(int x,int y)//called function
{
	int z;
	z=x+y;
	printf("Sum of the two nos. is %d\n",z);
}
void sub(int x,int y)//called function
{
	int z;
	z=x-y;
	printf("difference of the two nos. is %d\n",z);
}
void mult(int x,int y)//called function
{
	int z;
	z=x*y;
	printf("product of the two nos. is %d\n",z);
}
void div(int x,int y)//called function
{
	int z,p;
	z=x/y;
	p=x%y;
	printf("quiotient of the two nos. is %d\n",z);
	printf("remainder of the two nos. is %d\n",p);
}
