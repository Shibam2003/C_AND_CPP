#include<stdio.h>
#include<string.h>
int main(){
	int len,i=0;
	char arr[100];
	char *p;
	printf("Enter the string:");
	gets(arr);
	p=arr;
	len=strlen(arr);
	while(i<len){
		printf("%s",p);
		p++;
		i++;
		printf("\n");
	}
	return 0;
}
