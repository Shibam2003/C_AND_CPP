#include<stdio.h>
#include<stdlib.h>//for exit(0) function
int main(){
	char name1[20],name2[20];
	FILE *fp1,*fp2;
	int prompt;
	char ch;
	
	printf("\nEnter the 1st file name:");
	gets(name1);
	printf("\nEnter the 2nd file name:");
	gets(name2);
	
	fp1 = fopen(name1,"w");//opening the text file in write mode
	if(fp1==NULL){
		printf("There is error in opening the file");
		exit(0);
	}
	do{
		printf("--------For file1(%s)--------",name1);
		printf("\nEnter----------\n<1> to enter new character\n<0,or any key>for next file:");
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
	
	fp2 = fopen(name2,"w");//opening the text file in write mode
	if(fp2==NULL){
		printf("There is error in opening the file");
		exit(0);
	}
	do{
		printf("--------For file2(%s)--------",name2);
		printf("\nEnter-------\n<1> to enter new character\n <0,or any key>for next option:");
		scanf("%d",&prompt);
		switch(prompt){
			case 1:fflush(stdin);
					printf("Enter a character:");
					scanf("%c",&ch);
					putc(ch,fp2);
					break;
			case 0:break;
			default:printf("Enter right choice");
		}
	
	}while(prompt!=0);
	fclose(fp2);
	
	
	
	do{
		printf("\n ----------Enter your choice below----------");
		printf("\n <1> to append file1 in file2");
		printf("\n <2> to append file2 in file1");
		printf("\n <0> to stop the process:");
		scanf("%d",&prompt);
		switch(prompt){
			case 1:	fp1 = fopen(name1,"r");
					if(fp1==NULL){
					printf("There is error in opening the file");
					exit(0);
					}
					fp2 = fopen(name2,"a");
					if(fp2==NULL){
					printf("There is error in opening the file");
					exit(0);
					}
	
					while(!feof(fp1))
					{
						ch = getc(fp1);
						if(ch==EOF)
						break;
						putc(ch,fp2);
		
						}
						printf("append successful in file2(%s)",name2);
						break;
						
						
			case 2:fp2 = fopen(name2,"r");
					if(fp2==NULL){
					printf("There is error in opening the file");
					exit(0);
					}
					fp1 = fopen(name1,"a");
					if(fp1==NULL){
					printf("There is error in opening the file");
					exit(0);
					}
	
					while(!feof(fp2))
					{
						ch = getc(fp2);
						if(ch==EOF)
						break;
						putc(ch,fp1);
		
						}
						printf("append successful in file1(%s)",name1);
						break;
						
			default:printf("Enter right choice");
					break;
						
						
				}
	}while(prompt!=0);

	
	
	fclose(fp1);
	fclose(fp2);
	
	
	
	

	
	
	return 0;
}
