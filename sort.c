#include<stdio.h>
int main()
{
	int n,i,j,a[20],f,k;
	printf("Enter the no. of elements you want to enter:");
	scanf("%d",&n);
	printf("Enter the elements one by one:\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
}
printf("******* THIS IS THE PROCESS OF SORTING********\n");
printf("---------------------------------------------------\n");
for(i=0;i<=n-1;i++)
{
	for(j=i+1;j<n;j++)
	{
		for(k=0;k<n;k++)
		{
		
		printf(" %d",a[k]);
	}
	printf("\n");
		if(a[j]<a[i])
		{
		
		f=a[j];
		a[j]=a[i];
		a[i]=f;
	}
}
}
	for(k=0;k<n;k++)
		{
		
		printf(" %d",a[k]);
	}

		return 0;
}
