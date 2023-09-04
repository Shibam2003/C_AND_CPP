//WAP to find a no is valid or not
#include<stdio.h>
#include<conio.h>
void main()
{
	int num1;
	printf("Please enter the no:\n");
	scanf("%d",&num1);
	if((num1>0)&&(num1<100))
	{
	printf("%d is a valid no. ",num1);
}

	else
	{
	printf("%d is not a valid no.",num1);
}
	getch();
}
