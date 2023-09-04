//program to display use of strupr() function
#include<stdio.h>
#include<string.h>
int main(){
	char arr1[100],arr2[100];
	int r;
	printf("Enter the string:");
	gets(arr1);
	strupr(arr1);
	printf("The string in uppercase is : %s",arr1);
	return 0;
}
