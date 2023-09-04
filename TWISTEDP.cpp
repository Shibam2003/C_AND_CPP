#include<stdio.h>
int main()
{
	int n,i,j,b,rev=0,a,d=1;
	printf("Enter the number:");
	scanf("%d",&n);
	a=n;
	for(i=2;i<a;i++)
		{
			d=a%i;
			if(d=)
		
			printf("%d is not a prime number",n);
		
				
		else
		
		printf("%d is a prime number",n);
	}
		
		if(d=2)
		{
		
			while(n>0)
			{
			
			b=a%10;
			rev=(rev*10)+b;
			a=a/10;
		}
		printf("output=%d",rev);
		for(j=2;j<rev;j++)
		{
			if(rev%j==0)
			printf("%d is not a twisted prime no:",n);
			else
			printf("%d is a twisted prime no:");
		}
	}

	return 0;
}
