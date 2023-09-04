//WAP to accept the total no.
#include<stdio.h>
#include<stdlib.h>//this contains the exit() function
int main(){
	int n,i;
	int *p;
	printf("\nEnter the total no. of elements to be inserted:");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));//here we are allocating the memory dynamically in order to accommodate those n number of elements 
	if(p==NULL)//checking if there is any problem with the memory allocation
	{
	
	printf("\nMemory not allocated properly");
	exit(0);//this function terminates the execution of the programme
}
else{
	printf("\nEnter the elements one by one : ");
	for(i=0;i<n;i++)//accepting the values in the dynamic allocated space
	{
		scanf("%d",(p+i));
	}
	printf("\n the elements are: ");
	for(i=0;i<n;i++){
		printf("%d\t",*(p+i));
	}
}
	return 0;
}
