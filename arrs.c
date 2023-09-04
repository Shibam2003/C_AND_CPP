#include<stdio.h>
void main(){
	int arr[11],i,sum=0;
	printf("Enter the elements: ");
	for(i=0;i<10;i++){
		scanf(" %d",&arr[i]);
	}
	for(i=0;i<10;i++){
		sum=sum+arr[i];
	}
	printf("sum of the array elements is :%d",sum);
}
