#include<stdio.h>
void main(){
	int a=2,n;
	printf("Enter the range(range should be graeter than 0):");
	scanf("%d",&n);
	while(a<n){
		printf(" %d",a);
		a=a+2;
	}
}
