//WAP to convert a upper case string to it's corresponding lower case
#include<stdio.h>
int main(){
	char arr1[100];
	int i;
	printf("Enter the string:");
	gets(arr1);
	for(i=0;arr1[i]!='\0';i++){
		if(arr1[i]>='A'&& arr1[i]<='Z'){
			arr1[i]=arr1[i]+32;
		}
	}
	printf("After converting the string is: %s",arr1);
	return 0;
}
