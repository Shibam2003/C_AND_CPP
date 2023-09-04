#include<stdio.h>
void main(){
	int n,c,s=0,r;
	printf("Enter the no:");
	scanf("%d",&n);
	c=n;
	while(n>0){
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	if(c==s)
	printf("%d is palindrome",c);
	else 
    printf("%d is not a palindrome",c);
}
