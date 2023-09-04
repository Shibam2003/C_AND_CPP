//WAP to display how to copy the context of one file to another 
#include<stdio.h>
#include<stdlib.h>//for exit(0) function
int main(){
	FILE *fp1,*fp2;
	char ch;
	fp1 = fopen("f1.txt","r");//opening the text file in read mode
	if(fp1==NULL){
		printf("There is error in opening the file");
		exit(0);
	}
	fp2 = fopen("abc.txt","w");//opening the abc file in write mode
	if(fp2==NULL){
		printf("There is error in opening the file");
		exit(0);
	}
	
	while(!feof(fp1))//checking whether the end of file marker has been reached or not
	{
		ch = getc(fp1);//the getc method is used to extract a character from the file
		putc(ch,fp2);//the putc method is used to write the character to a file 
		
	}
	fclose(fp1);
	fclose(fp2);//closing the file references 
	
	
	return 0;
}
