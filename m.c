#include<stdio.h>
void main()
{
	int m;
	printf("Enter the marks:");
	scanf("%d",&m);
	if((m>=90)&&(m<=100))
	printf("Excellent");
	else if((m>=80)&&(m<90))
	printf("Very Good");
	else if((m>=60)&&(m<80))
	printf("Good");
	else if((m>=50)&&(m<60))
	printf("Fair");
	else if((m<50)&&(m>=0))
	printf("Fail");
	else
	printf("please enter marks out of 100");
	
} 
