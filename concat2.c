//WAP to accept two string and concatinate without using strcat() function
#include<stdio.h>
int main(){
	char arr1[100],arr2[100];
	int i,count=0,j;
	printf("Enter the string1:");
	gets(arr1);
	printf("Enter the string2:");
	gets(arr2);
	for(i=0;arr1[i]!='\0';i++){
		count++;//counting the total no. of elements inside the string
	}
	for(i=count,j=0;arr2[j]!='\0';i++,j++){
		arr1[i]=arr2[j];
	}
	arr1[i]='\0';
	printf("%s",arr1);
	return 0;
}
