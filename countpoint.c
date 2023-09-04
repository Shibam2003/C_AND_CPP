//WAP to count the occurence of a number in the array 
#include<stdio.h>
void main(){
	int arr[10],i,key,count=0;
	printf("\n Enter the elements one by one :");
	for(i=0;i<10;i++){
		scanf("%d",(arr+i));
	}
	printf("Enter the searching element:");
	scanf("%d",&key);
	for( i=0;i<10;i++){
		if(*(arr+i)==key){
		count++;	
		}
	}
	printf("occurence of the element %d is %d",key,count);
}
