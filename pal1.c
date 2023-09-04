//To check whether a string is palindrome or not
#include<stdio.h>
#include<string.h>
int main(){
	char arr1[100],arr2[100];
	int r;
	printf("Enter the string:");
	gets(arr1);
	strcpy(arr2,arr1);
	strrev(arr1);
	r=strcmp(arr1,arr2);
	if(r==0)
	printf("The string is a palindrome ");
	else
	printf("The string is not a palindrome ");
	return 0;
}
