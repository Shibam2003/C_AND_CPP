#include<stdio.h>
int main()
{
	int a,n,i;
	float b=0,c;
	printf("enter the number:");
	scanf("%d",&a);
	printf("enter the renge:");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		c=(float)a/i;
		b=c+b;
		printf("%d/%d+",a,i);
	}
	printf("=%.2f",b);
	return 0;
}
