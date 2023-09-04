#include<stdio.h>
void main(){
	int arr[100],i,n;
	printf("Enter the no. of elements:");
	scanf("%d",&n);
	printf("\n Enter the elements one by one :");
	for(i=0;i<n;i++){
		scanf("%d",(arr+i));
	}
	printf("The elements are:\n");
	for(i=0;i<n;i++){
		printf("%d ",*(arr+i));
	}
}
