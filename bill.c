#include<stdio.h>
int main()
{	int t;
	printf(" enter the total cost:");
	scanf("%d",&t);
	printf("Total Cost					");
	printf("Discount");
	printf("\n ---------------------------------------------------------");
	if(t<=2000)
	printf("\nLess than or up to /- 2000					5%");
	else if((t>=2001)&&(t<=5000))
	printf("/-2001 to /-5000					10%");
	else if((t>=5001)&&(t<=10000))
	return 0;
}
