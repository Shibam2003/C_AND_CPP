#include<stdio.h>
int main()
{
	int n,c,r=0;
	printf("Enter any number:");
	scanf("%d",&n);
	while(n>0)
	{
		c=n%2;
		n=n/2;
		if(n>1)
		{
			if(c!=0)
			{
			
			r=1;
			break;
		}
	}}
		if(r==0)
		printf("yes");
		else
		printf("No");
	
	
		
	
	return 0;
	}
	
