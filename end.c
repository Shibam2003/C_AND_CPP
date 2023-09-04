//WAP to find reverse of a string without using library function strrev()
#include<stdio.h>
int main(){
	char arr1[100],arr2[100];
	int i,count=0,st,end,end2;
	printf("Enter the string:");
	gets(arr1);
	for(i=0;arr1[i]!='\0';i++){
		count++;//counting the total no. of elements inside the string
	}
	end=count-1;
	end2=end;
	for(st=0;st<=end2;st++){
		arr2[st]=arr1[end];
		end--;
	}
	arr2[st]='\0';
	printf("%s",arr2);
	return 0;
}
