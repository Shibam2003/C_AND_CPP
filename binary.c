#include<stdio.h>
int main()
{
	int a,b,r,bi=0,q=0,p=0,c;
	printf("Enter the decimal number:");
	scanf("%d",&a);
	c=a;
	while(c>0)
	{
		r=c%2;
		bi=bi*10+r;
		c=c/2;
	printf("\n %d",bi);
	}
	while(bi>0)
	{
		p=bi%10;
		q=q*10+p;
		p=p/10;
		printf("\n %d ",q);
	}
	printf("binary equivalent of %d is %d",a,q);
	return 0;
}
