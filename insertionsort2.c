#include<stdio.h>
void insertion_sort(int arr[],int n){
	int i,j,current;
	for(i=1;i<n;i++){
		int current=arr[i];
		int j=i-1;
		while(j>=0 && arr[j]>current){
			arr[j+1]=arr[j];
			j--;
			
		}
		arr[j+1]=current;
	}
	}

int main(){
	int arr[100],n,i;
	printf("Enter the range:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
	scanf("%d",&arr[i]);
	}
	insertion_sort(arr,n);
	printf("After insertion sort the array is:");
	for(i=0;i<n;i++){
		printf("\t%d",arr[i]);
	}
	return 0;
}
