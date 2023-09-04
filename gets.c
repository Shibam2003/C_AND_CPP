#include<stdio.h>
int main(){
	char arr[100];
	printf("Enter the string:");
	gets(arr);//here & sign is not required
	printf("The entered string is %s",arr);
	return 0;
}
