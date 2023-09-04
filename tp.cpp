#include<stdio.h>
int main()
{
	int i,j,n,num,rev,r,revnum,count,count1;
	printf("\n Enter a number : ");
	scanf("%d",&n);
	num=n;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		count=count+1;
	}
	if(count!=0)
	printf("\n %d is not a prime number",num);
	while(n>0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	revnum=rev;
	for(j=2;j<rev;j++)
	{
		if(rev%j==0)
		count1=count1+1;
	}
	if(count1!=0)
	printf("\n %d is not a twisted prime number ",num);
	else
	printf("\n %d is a twisted prime number ",num);
	return 0;
}
