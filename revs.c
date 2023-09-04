//wap to display the use of strrev() function
#include<stdio.h>
#include<string.h>
int main(){
	char arr[100];
	printf("Enter the string:");
	gets(arr);
	strrev(arr);
	printf("The reverse string is %s",arr);
	return 0;
}
