#include<stdio.h>
#include<stdlib.h>//for exit(0) function
int main(){
	char name[20];
	FILE *fp1;
	int prompt;

	char ch;
	printf("Enter the file name:");
	gets(name);
	fp1 = fopen(name,"w");//opening the text file in write mode
	if(fp1==NULL){
		printf("There is error in opening the file");
		exit(0);
	}
	do{
		
		printf("Enter <1> to enter new character, <0>to stop the process:");
		scanf("%d",&prompt);
		switch(prompt){
			case 1:fflush(stdin);
					printf("Enter a character:");
					scanf("%c",&ch);
					putc(ch,fp1);
					break;
			case 0:break;
			default:printf("Enter right choice");
		}
	
	}while(prompt!=0);
	

	
	
	
	
	
	
	fclose(fp1);
	
	
	return 0;
}
