#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i;
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
	printf("The elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("\t%d",*(ptr+i));
	}
}
	free(ptr);
	return 0;
}
