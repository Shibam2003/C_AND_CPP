#include<stdio.h>
void main(){
	int n,i,count=0;
	printf("Enter the no:");
	scanf("%d",&n);
	for(i=2;i<n/2;i++){
		if(n%i==0){
			count=1;
			break;
		}
	}
	if(count==1)
	printf("%d is not a prime no.",n);
	else
	printf("%d is a prime no.",n);
}
