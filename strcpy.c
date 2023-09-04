//WAP to display the use of strcpy() function
#include<stdio.h>
#include<string.h>
int main(){
	char arr1[100],arr2[100];
	printf("Enter the string1:");
	gets(arr1);
	printf("Enter the string2:");
	gets(arr2);
	strcpy(arr1,arr2);//copying the string2 in string1
	printf(" after copying the string is %s",arr1);
	return 0;
}
