#include<stdio.h>
int main()
{
	int arr[100],size,i,sum=0;
	printf("Enter the array size\n");
	scanf("%d",&size);
	printf("Enter the array elements\n");
	for(i=0;i<size;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<size;i++)
	sum=sum+arr[i];
	printf("Sum of the array = %d\n",sum);
	return 0;
}
