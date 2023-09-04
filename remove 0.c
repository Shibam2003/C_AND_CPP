#include<stdio.h>
int main()
{
	int a,b,c=0,d=0,e=0,f=0;
	printf("Enter the number:");
	scanf("%d",&a);
	b=a;
	while(b>0)
	{
		c=b%10;
		if(c==0)
		{
			b=b/10;
		
		}
		else
		{
		d=d*10+c;
		b=b/10;
	}
	}
	while(d>0)
	{
		e=d%10;
		f=f*10+e;
		d=d/10;
	}
	printf("\n %d",f);
	return 0;
}
