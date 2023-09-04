#include<stdio.h>
#include<stdlib.h>//for exit(0) function
int main(){
	int a;
	FILE *fp1;
	
	fp1=fopen("sum.txt","r");
	if(fp1==NULL){
		printf("There is error in opening the file");
		exit(0);
	}
	fscanf(fp1,"%d",&a);//read the content from the file and storing it into the variable a
	printf("The value recived is:%d",a);
	fclose(fp1);
	return 0;
}
