#include<stdio.h>
#include "sum.h"//including a customely created headerfile
int main(){
	int a,b;
	printf("Enter the two no.s:");
	scanf("%d %d",&a,&b);
	add(a,b);
	return 0;
}
