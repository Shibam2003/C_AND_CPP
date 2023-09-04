//pointer with strinhg
//WAP to display use of string with pointer 
#include<stdio.h>
int main(){
	char arr[100];
	char *p;
	printf("Enter the string:");
	gets(arr);
	p=arr;//assigning a string to a pointer variable
	printf("%s",p);//here the entire content of the string will be displayed
	printf("\n%c",*p);//here the content of the address is displayed which the pointer holds
	p++;//increasing the value of the pointer variable to point to the next address of the string 
	printf("\n%s",p);
	printf("\n%c",*p);
	
	return 0;
}
