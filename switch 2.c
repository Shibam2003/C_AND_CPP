#include<stdio.h>
int main()
{
	int a,b;
	char n;
	printf("Enter the values of a & b:");
	scanf("%d %d",&a,&b);
	printf("Enter the key:");
	scanf("%c",&n);
	switch(n)
	{
		case '+':printf("result=%d+%d",a,b);
		break;
		case '-':printf("result=%d-%d",a,b);
		break;
		case '*':printf("result=%d*%d",a,b);
		break;
		case '/':printf("result=%d/%d",a,b);
		default:printf("Enter correct key");
	}
	return 0;
}
