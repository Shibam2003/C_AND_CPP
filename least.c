//least among two nos.
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the first no.");
	scanf("%d",&a);
	printf("Enter the second no.");
	scanf("%d",&b);
	c=(a<b)?a:b;
	printf("%d is least among the two nos.",c);
}
