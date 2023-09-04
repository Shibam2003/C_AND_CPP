//finding out length of the string without using strlen() function
#include<stdio.h>
int main(){
	char arr1[100];
	int i,count=0;
	printf("Enter the string:");
	gets(arr1);
	for(i=0;arr1[i]!='\0';i++){
		count++;
	}
	printf(" No. of elements inside string is %d",count);
	return 0;
}
