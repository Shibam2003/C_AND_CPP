//WAP  to dispaly the use of Global variable
#include<stdio.h>
int a;//Global variable
void main(){
	
	void f1();
	printf("Enter the value of a\n");
	scanf("%d",&a);
	printf("the value of a before calling %d\n",a);
	f1();
	printf("the value of a after calling %d\n",a);
}
void f1(){
	printf("Enter a number:\n");
	scanf("%d",&a);
}
