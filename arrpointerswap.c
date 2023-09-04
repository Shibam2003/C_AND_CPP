//WAP to sort the elements of an array using pointer (pointer with array)
#include<stdio.h>
void main(){
	int arr[10],i,j,temp;
	printf("\n Enter the elements one by one :");
	for(i=0;i<10;i++){
		scanf("%d",(arr+i));
	}
	for(i=0;i<9;i++){
		for(j=0;j<9-i;j++)
		{
			if(*(arr+j)>*(arr+(j+1))){
				temp=*(arr+j);
				*(arr+j)=*(arr+(j+1));
				*(arr+(j+1))=temp;
			}
		}
	}
	printf("After sorting the elements are:\n");
	for(i=9;i>=0;i--){
		printf("%d ",*(arr+i));
	}
}
