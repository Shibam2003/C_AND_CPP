#include<stdio.h>
void main(){
	int n,r,s=0;
	printf("Enter the num:");
	scanf("%d",&n);//accepting the number
	while(n>0){
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	printf("reverse of the no. is %d",s);
}

