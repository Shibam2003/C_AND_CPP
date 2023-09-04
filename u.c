#include<stdio.h>
void main(){
	int n,r;
	printf("Enter the num:");
	scanf("%d",&n);//accepting the number
	while(n>0){
		r=n%10;
		printf("%d",r);
		n=n/10;
	}

}

