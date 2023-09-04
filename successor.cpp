#include<stdio.h>
int main()
{
	int a,c,d=1;
	printf("input:");
	scanf("%d",&a);
	while(a>0)
	{
		c=a%10;
		if(c%2==0)
		{
			printf(" \n the even digits are %d ",c);
		c=c+1;
		d=d*c;
		}
		a=a/10;
		
		
	}
	
	printf("\n the product of successor of even digits is:%d",d);
	return 0;
}
