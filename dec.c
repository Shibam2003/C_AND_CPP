#include<stdio.h>
#include<math.h>
int main()
{
	int n,rem,s=0,a,i=0,r;
	printf("Enter positive binary number:");
	scanf("%d",&n);
	a=n;
	while(n>0)
	{
		r=n%10;
		rem=r*pow(2,i);
		s=s+rem;
		n=n/10;
		i++;
	}
	printf("Decimal eqv of %d is %d",a,s);
	return 0;
}
