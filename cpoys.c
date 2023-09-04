#include<stdio.h>
int main(){
	char arr1[100],arr2[100];
	int i;
	printf("Enter the string1:");
	gets(arr1);
	printf("Enter the string2:");
	gets(arr2);
	for(i=0;arr2[i]!='\0';i++){
		arr1[i]=arr2[i];
	}
	arr1[i]='\0';
	printf("%s",arr1);
	return 0;
}
