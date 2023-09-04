#include<stdio.h>
int main()
{
	int n;
	printf("Enter the marks:");
	scanf("%d",&n);
	switch(n/10)
	{
		case 9:printf("Grade=O");
		break;
		case 8:printf("Grade=E");
		break;
		case 7:printf("Grade=A");
		break;
		case 6:printf("Grade=B");
		break;
		case 5:printf("Grade=C");
		break;
		case 4:printf("Grade=D");
		break;
		default :printf("Grade=F");
	}
	return 0;
}
	
