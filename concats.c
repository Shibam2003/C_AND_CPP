//WAP to display use of strcat() function
#include<stdio.h>
#include<string.h>
int main(){
	char arr1[100],arr2[100];
	printf("Enter the string1:");
	gets(arr1);
	printf("Enter the string2:");
	gets(arr2);
	strcat(arr1,arr2);
	printf("after concatinate the string is %s",arr1);
	return 0;
}
