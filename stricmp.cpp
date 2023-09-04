//program to display stricmp() function
#include<stdio.h>
#include<string.h>
int main(){
	char arr1[100],arr2[100];
	int r;
	printf("Enter the string1:");
	gets(arr1);
	printf("Enter the string2:");
	gets(arr2);
	r=stricmp(arr1,arr2);
	if(r==0)
	printf(" Both the string are equal");
	else 
	printf(" Both the string are not equal");
	printf("\n %d",r);
	return 0;
}
