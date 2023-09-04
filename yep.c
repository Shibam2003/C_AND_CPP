#include <stdio.h>

int main(){
	int i,j,k,t=0,r;
	printf("Enter the no. of rows:");
	scanf("%d",r);
	for(i=1;i<=r;i++)
	{
		for(k=t;k<r;k++)
		{
			printf(" ");
		
		}
		for(j=0;j<i;j++)
	{
		printf("*");
	
	}
	t+=1;
		printf("\n");
	}
	return 0;
}
