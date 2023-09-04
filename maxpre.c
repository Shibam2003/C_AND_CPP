#include<stdio.h>
#include<conio.h>
#define max(a,b) (a>b)?a:b
int main(){
	int a,b,res;
	printf("Enter the two no.s:");
	scanf("%d %d",&a,&b);
	res=max(a,b);
	printf("max is %d",res);
	return 0;
	getch();
}
