//Program to display quotient and remainder of two nos
#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("\n Enter the first no:");//accepting first no
	scanf("%d",&a);
	printf("\n Enter the second no:");//accepting second no
	scanf("%d",&b);
	c=a/b;//finding out the quotient and store it in to c
	d=a%b;//finding out the remainder and store it in to d
	printf("\n quotient is %d",c);//displaying the quotient
	printf("\n Remainder is %d",d);//displaying the remainder
}
