#include<stdio.h>
void main(){
	int n;
l1:	printf("Enter a no.:");
	scanf("%d",&n);
	if(n!=0){
		goto l1;
	}
	else
	{
		printf("0 has been pressed");
	}
}
