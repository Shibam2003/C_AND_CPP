#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i,key,ind=0,count;
	int *p;
	printf("\nEnter the total no. of elements to be inserted:");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	if(p==NULL)//checking if there is any problem with the memory allocation
	{
	
	printf("\nMemory not allocated properly");
	exit(0);
}
else{
	printf("\nEnter the elements one by one : ");
	for(i=0;i<n;i++)//accepting the values in the dynamic allocated space
	{
		scanf("%d",(p+i));
	}
	printf("Enter the searching element:");
	scanf("%d",&key);
	for( i=0;i<n;i++){
		if(*(p+i)==key){
		count=i+1;
		ind=1;
		break;
		}
	}
	if(ind==0)
	printf("position not found");
	else
	printf("position is %d",count);
}
	free(p);
	return 0;
}
