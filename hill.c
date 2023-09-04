#include<stdio.h>
#include<stdlib.h>//for exit(0) function
int main(){
	char str[80];
	int count=0;
	FILE *fp9;
	
	
	fp9=fopen("hill.txt","r");
	if(fp9==NULL){
		printf("There is error in opening the file");
		exit(0);
	}
	while(!feof(fp9)){
		fgets(str,80,fp9);
		count++;
	}
	printf("\n Total no. of lines in the file is : %d",count);
	
	fclose(fp9);	
	
	
	return 0;
	
	}
