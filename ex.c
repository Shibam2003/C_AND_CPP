#include<stdio.h>
#include<conio.h>
//#define square(i) (i*i)//this is a functional macro
int main(){
	float c;
	int a=-6;
	float res;
	printf("%f",(float)a/10);
	c=(1+(float)a/10);
	printf("\n%f",c);
	res=(1+(float)a/10);
	printf("\n%f",res);
	
	printf("\n%d",((int)(res*100)));
	return 0;
	getch();
}
