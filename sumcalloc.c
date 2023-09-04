#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i,sum=0;
	int *ptr;
	printf("\nEnter the total no. of elements to be inserted:");
	scanf("%d",&n);
	ptr=(int *)calloc(n,sizeof(int));
	if(ptr==NULL)//checking if there is any problem with the memory allocation
	{
	
	printf("\nMemory not allocated properly");
	exit(0);
}
else{
	printf("\nEnter the elements one by one : ");
	for(i=0;i<n;i++)//accepting the values in the dynamic allocated space
	{
		scanf("%d",(ptr+i));
	}
	for(i=0;i<n;i++)
	{
		sum=sum+*(ptr+i);
	}
	printf("sum is %d",sum);
}
	free(ptr);
	return 0;
}
