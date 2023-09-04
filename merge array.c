#include<stdio.h>
int main()
{
	int a1[10],a2[10],b[100],i,p,q,m=0;
	printf("Enter the range for first array:");
	scanf("%d",&p);
	printf("\n Enter the array elements one by one:\n");
	for(i=0;i<p;i++)
	scanf("%d",&a1[i]);
	printf("\n Enter the range of second array:");
	scanf("%d",&q);
	m=p+q;
	printf("\nEnter the elements one by one:\n");
	for(i=0;i<q;i++)
	scanf("%d",&a2[i]);
	for(i=0;i<p;i++)
	{
		b[i]=a1[i];
	}
	for(i=0;i<q;i++)
	{
		b[p]=a2[i];
		p++;
	}
	
	printf("\n The merged array is \n");
	for(i=0;i<m;i++)
	printf("	 %d",b[i]);
	return 0;
}
