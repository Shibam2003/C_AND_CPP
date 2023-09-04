#include<stdio.h>
int main()
{
	int a,b;
	char n;
	
	printf("Enter the key:");
	scanf("%c",&n);
	printf("Enter the values of a & b:");
	scanf("%d %d",&a,&b);
	switch(n)
	{
		case '+':printf("result=%d+%d=%d",a,b,a+b);
		break;
		case '-':printf("result=%d-%d=%d",a,b,a-b);
		break;
		case '*':printf("result=%d*%d=%d",a,b,a-b);
		break;
		case '/':printf("result=%d/%d=%d",a,b,a/b);
		default:printf("Enter correct key");
	}
	return 0;
}
