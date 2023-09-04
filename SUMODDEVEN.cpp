#include<stdio.h>
#include<math.h>
int main()

{
	int n,num,r,evsum=0,oddsum=0;
	printf("\n Enter the number : ");
	scanf("%d",&n);
	num=n;
	while(n>0)
	{
		r=n%10;
		if(r%2==0)
		{
			evsum+=r;
		}
		else
		{
			oddsum+=r;
		}
		n=n/10;
	}
	printf("\n Sum of even nums : %d",evsum);
	printf("\n Sum of odd nums : %d",oddsum);
	return 0;
}
