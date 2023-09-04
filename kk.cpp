#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the 3nos:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("%d is greater",a);
		}
		
		else
		printf("%d is greater",c);
	}
	else
	{
		if(b>c)
		{
			printf("%d is greater",b);
		}
		
	}
	return 0;
}
