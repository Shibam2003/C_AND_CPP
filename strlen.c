//wap to display the use of strlen() function
#include<stdio.h>
#include<string.h>
int main(){
	char arr[100];
	int a;
	printf("Enter the string:");
	gets(arr);
	a=strlen(arr);
	printf("The entered string is %s\n",arr);
	printf("The total no. of characters prsent in side the string is %d",a);
	return 0;
}
