#include<stdio.h>
int binary_search(int a[],int low,int high,int item){
	if(low>high){
		return -1;
	}
	else{
		int mid= (low+high)/2;
		if(item==a[mid])
		return mid;
		
		else if(item>a[mid]){
		binary_search(a,mid+1,high,item);
	}
		
		else
		{
		binary_search(a,mid-1,high,item);
	}
	}
}
void main(){
	int a[20],n,result,item,i;
	printf("Enter the no. of elements:");
	scanf("%d",&n);
	printf("Enter the elements one by one :");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be found:");
	scanf("%d",&item);
	result=binary_search(a,0,n-1,item);
	if(result==-1)
	printf("Item not found");
	else 
	printf("Result found in the location %d",result+1);
}
