#include<stdio.h>
#include<math.h>
int main()

{
	int n,r,revbin,bi=0,i=0,rem=0;
	printf("\n Enter the decimal number :");
	scanf("%d",&n);
	while(n>0)
	{
	r=n%2;
	bi=bi+r*pow(10,i);
	n=n/2;
	i++;
	}
	printf("\n The binary is : %d",bi);
	return 0;
}
