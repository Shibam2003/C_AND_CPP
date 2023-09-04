#include<stdio.h>
int main()
{
	int n,i,j,v,fact=1,s=1;
	float sum=0,term;
	printf("Enter the number of terms:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
{
	s=-s;
	v=2*i-1;
	for(j=1;j<=v;j++)
	{
		fact=fact*j;
		term=s*((float)1/fact);
		sum=sum+term;
		
	}
}
printf("Sum of series is:%f",sum);
return 0;
}
