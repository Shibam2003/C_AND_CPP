#include<stdio.h>
int main(){
	char arr[100];
	char *p;
	printf("Enter the string:");
	gets(arr);
	p=arr;
	while(*p!='\0'){
		printf("%s",p);
		p++;
		printf("\n");
	}
	return 0;
}
