#include<stdio.h>
int sum();
void main()//calling function
{	
int p;
	p=sum();
	printf("Sum of the two no. is %d",p);
}
int sum()//called function
{
	int a,b,s;
	printf("Enter the first value:");
	scanf("%d",&a);
	printf("Enter the second value:");
	scanf("%d",&b);
	s=a+b;
	return (s);

}
