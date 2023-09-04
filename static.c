//WAP to display use of static variable
#include<stdio.h>
void main(){
	void f1();
	f1();
	f1();
	f1();
	f1();
	
}
void f1(){
	static int a;
	a++;
	printf("The value of a is %d\n",a);
}
