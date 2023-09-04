#include<stdio.h>
#include<conio.h>
#define square(i) (i*i)//this is a functional macro
int main(){
	int n,res;
	printf("Enter a no.:");
	scanf("%d",&n);
	res=square(n);//calling the functional macro
	printf("The square of the number is %d",res);
	return 0;
	getch();
}
