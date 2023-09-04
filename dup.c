#include<stdio.h>
void main(){
	int n,c,s=0,r;
	printf("Enter the no:");
	scanf("%d",&n);
	c=n;
	r=n%10;
	while(n>0){
	
		s=s*10;
			if(s==0){
		
		s=s+1;
	}
		n=n/10;
	}
	if(c/s==r)
	printf("same");
	else 
	printf("not same");
}
