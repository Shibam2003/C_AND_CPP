#include<stdio.h>
void main(){
	int n,c,s=0,r,b;
	printf("Enter the no:");
	scanf("%d",&n);
	r=n%10;
	while(n>0){
		b=n%10;
		s=s*10+b;
		n=n/10;
	}
	c=s%10;
	if(c==r)
	printf("same");
	else 
	printf("not same");
}
