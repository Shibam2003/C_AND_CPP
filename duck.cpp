#include<stdio.h>
int main()
{
	int n,a,b,c=1;
	printf("Enter the number:");
	scanf("%d",&n);
	a=n;
	while(a>0)
	{
		b=a%10;
		if(b==0)
		{
			c=c+1;
	}
		a=a/10;
	}
	if(c>1)
	{
	
		printf("%d is a Duck number",n);
	}
	else
		printf("%d is not a duck number",n);
		
	
	
	return 0;
	
}
