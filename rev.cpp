#include<stdio.h>
int main()
{
	int n,r,b,rev;
	printf("Enter the two digit number:");
	scanf("%d",&n);
	r=n%10;
	b=n/10;
	rev=r*10+b;
	printf("Reverse of the number is: %d",rev);
	return 0;
	 
}
