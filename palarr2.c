#include<stdio.h>
void main(){
	int arr[5],i,j,count=0;
	printf("\n Enter the elements one by one :");
	for(i=0;i<5;i++){
		scanf("%d",(arr+i));
	}
	for(i=0,j=4;i<5;i++,j--){
		if(*(arr+i)!=*(arr+j)){
			count=1;
			break;
		}
	}
	if(count==0)
	printf("It is a palindrome");
	else 
	printf("It is not a palindrome");

}
