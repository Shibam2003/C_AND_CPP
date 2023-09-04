#include<stdio.h>
int main()
{
	int n,b,c=0,d=0,e=0;
	printf("enter the number:");
	scanf("%d",&n);
	b=n;
	while(b>0)
	{
		c=b%10;
		if(c%2==0)
		{
			d=d+c;
			
		}
		else
		{
			e=e+c;
		}
		b=b/10;
	}
		printf("\n sum of even number is %d",d);
		printf("\n sum of the odd number is %d",e);
		return 0;
	
}
