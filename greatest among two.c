//Program to display greatest among two nos
#include<stdio.h>
void main()
{
	int num1,num2;
	printf("Please enter first no:\n");
	scanf("%d",&num1);//accepting the first no.
	printf("Please enter second no:\n");
	scanf("%d",&num2);//accepting the second no.
	if(num1>num2)
	printf("%d is greater ",num1);
	
	else
	printf("%d is greater",num2);
}
