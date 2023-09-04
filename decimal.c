#include<stdio.h>
#include<math.h>
int main()

{
	int a,c,r=0,d=0,i;
	printf("enter the binary number:");
	scanf("%d",&a);
	c=a;
	while(c>0)
	{
		r=c%10;
		d=d+r*pow(2,i);
		c=c/10;
		i++;
	}
	printf("decimal equivalent of %d is %d",a,d);
	return 0;
}
