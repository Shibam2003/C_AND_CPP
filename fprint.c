#include<stdio.h>
#include<stdlib.h>//for exit(0) function
int main(){
	int a,b,c;
	FILE *fp1;
	
	printf("\nEnter the first no.:");
	scanf("%d",&a);
	printf("\nEnter the second no.:");
	scanf("%d",&b);
	c=a+b;
	fp1=fopen("sum.txt","w");
	if(fp1==NULL){
		printf("There is error in opening the file");
		exit(0);
	}
	fprint(fp1,"%d",c);//writing the content of c to the file
	fclose(fp1);
}
