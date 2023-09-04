#include<stdio.h>
void selection_sort(int arr[],int n){
	int i,j,temp;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
int main(){
	int arr[100],n,i;
	 printf("Enter the range:");
	 scanf("%d",&n);
	 for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	selection_sort(arr,n);
	printf("After selection sort the array is:");
	for(i=0;i<n;i++){
		printf("\t%d",arr[i]);
	}
	return 0;
}
