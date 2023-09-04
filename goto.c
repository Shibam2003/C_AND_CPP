#include<stdio.h>
void main()
{
	int num,i=1;
	printf("Enter the number whose table you want to print : ");
	scanf("%d",&num);
	table:
		printf("%d * %d=%d\n",num,i,num*i);
		i++;
		if(i<=10)
		goto table;
	
}
