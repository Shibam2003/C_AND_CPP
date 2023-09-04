#include<stdio.h>
int main(){
	char arr1[100],arr2[100];
	int i,count=0,count1=0,co=0;
	printf("Enter the string1:");
	gets(arr1);
	printf("Enter the string2:");
	gets(arr2);
	for(i=0;arr1[i]!='\0';i++){
		count++;//counting the total no. of elements inside the string
	}
	for(i=0;arr2[i]!='\0';i++){
		count1++;//counting the total no. of elements inside the string
	}
	if(count==count1){
	
	for(i=0;arr2[i]!='\0';i++){
		if(arr1[i]!=arr2[i]){
			co=1;
			break;
		}
	}
	if(co==1)
	printf("Both the strings are not same ");
	else
	printf("Both the strings are  same ");
}
	else
	printf("Both the strings are not same ");
	return 0;
}
