#include<stdio.h>
void main(){
	int arr[11],i;
	printf("Enter the elements: ");
	for(i=0;i<10;i++){
		scanf(" %d",&arr[i]);
	}
	printf("The elements inside the array are:\n");
	for(i=9;i>=0;i--){
		printf(" %d",arr[i]);
	}
}
