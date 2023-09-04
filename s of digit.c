//sum of the digit of a number
#include<stdio.h>
void main(){
	int n,s=0,r;
	printf("Enter the num:");
	scanf("%d",&n);//accepting the number
	while(n>0){
		r=n%10;//taking the remainder
		s=s+r;//adding the reaminder
		n=n/10;//storing the new quotient 
	}
	printf("sum of the digit is :%d",s);//output
}
