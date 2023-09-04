#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i,n2;
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
	printf("The address of the dynamically entered elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("\t%u",(ptr+i));
	}
	printf("\nEnter the new size:\n");
	scanf("%d",&n2);
	ptr=(int *)realloc(ptr,n2*sizeof(int));//here we are reallocating the memory space
	printf("The address of the newly allocating memory is:\n");
		for(i=0;i<n2;i++)
	{
		printf("\t%u",(ptr+i));
	}
	
}
free(ptr);
	
	return 0;
}
