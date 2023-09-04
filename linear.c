#include<stdio.h>
int lins(int arr[],int n, int key){
	int i;
	for( i=0;i<n;i++){
		if(arr[i]==key){
		
		return i;
	}
	
	}
		return -1;
}
int main(){
	int arr[100],n,key,i,s;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the element have to found:");
	scanf("%d",key);
	s=lins(arr,n,key);
	printf("Position of the element is %d",s);
	return 0;
}
