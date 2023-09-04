//WAP to find factorial of a number using recursion
#include<stdio.h>
void main(){
	int fact(int);
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	if(n==0)
	printf("Factorial of the no. is 1");
	else{
	
	printf("Factorial of the number is %d",fact(n));
}
}
int fact(int a){
	int result;
	if(a==1)//this is the terminating condition
	{
		return 1;
	}
	else{
		result=a*fact(a-1);
		return result;
	}
}
