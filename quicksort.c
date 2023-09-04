#include<stdio.h>
int partition(int arr[],int low,int high){
	int pivot=arr[low];
	int i=low+1;
	int j=high;
	int temp;
	do{
	
	while(arr[i]<=pivot){
		i++;
	}
	while(arr[j]>pivot){
		j--;
	}
	if(i<j){
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
}while(i<j);
temp=arr[low];
arr[j]=arr[low];
arr[low]=temp;
return j;

}
void quick_sort(int arr[] , int low,int high){
	int partitionIndex;
	if(low<high){
	partitionIndex=partition(arr,low,high);
	quick_sort(arr,low,partitionIndex-1);
	quick_sort(arr,partitionIndex+1,high);
}
}
int main(){
	int arr[100],n,i;
	printf("Enter the range:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
	scanf("%d",&arr[i]);
	}
	quick_sort(arr,0,n);
	printf("After quick sort the array is:");
	for(i=0;i<n;i++){
		printf("\t%d",arr[i]);
	}
	return 0;
}
