//program to display use of switch
#include<stdio.h>
void main()
{
	int a,b,choice,x;
	do
	{
	
	printf("\n Enter the first no :");
	scanf("%d",&a);
	printf("\n Enter the second no:");
	scanf("%d",&b);
	printf("\n 1.Addition");
	printf("\n 2.Multiplication");
	printf("\n 3.Division");
	printf("\n 4.Subtraction");
	printf("\n Please enter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: x=a+b;
		printf("\n The addition of two no. is %d",x);
		break;
		case 2: x=a*b;
		printf("\n The result is %d",x);
		break;
		case 3: x=a/b;
		printf("\n The result is %d",x);
		break;
		case 4: x=a-b;
		printf("\n The result is %d",x);
		break;
		default:printf("\n You have enter a wrong choice");
		break;
	}
	printf("\nDo you want to continue? \npress 1 for yes and any other no. for no: ");
	scanf("%d",&choice);
}
while(choice==1);
	
}
