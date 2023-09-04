#include<stdio.h>
#include<math.h>
int main()
{
	int a,c,r=0,oct=0,i;
	printf("enter the decimal number:");
	scanf("%d",&a);
	c=a;
	while(c>0)
	{
		r=c%8;
		oct=oct+r*pow(10,i);
		c=c/8;
		i++;
		
	}
	printf("the octal equivalent of %d is %d",a,oct);
}
