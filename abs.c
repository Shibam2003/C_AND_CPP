#include<stdio.h>
int main()
{
	int n,a;
	printf("Enter the number:");
	scanf("%d",&n);
	a=(n>0)?n:(-n);
	printf("Absolute value of the number is %d",a);
	return 0;
}
