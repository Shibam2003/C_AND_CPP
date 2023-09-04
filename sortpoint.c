#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i,j,temp;
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
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++)
		{
			if(*(p+j)>*(p+(j+1))){
				temp=*(p+j);
				*(p+j)=*(p+(j+1));
				*(p+(j+1))=temp;
			}
		}
	}
	printf("\nAfter sorting the elements are:\n");
	for(i=n-1;i>=0;i--){
		printf("%d ",*(p+i));
	}
}
free(p);
	return 0;
}
