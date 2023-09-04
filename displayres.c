#include<stdio.h>
struct marks{
	int p;
	int c;
	int m;
};
struct student{
	int roll;
	float marks;
	char name[100];
	struct marks s1;
	int avg;
};

void main(){
	int i;
	struct student s[3];
	printf("\n--------- Enter the records of the student----------\n");
	printf("__________________________________________________________");
	for(i=0;i<3;i++){
		fflush(stdin);
		printf("\n Enter the name of the student:");
		gets(s[i].name);
		printf("\n Enter the roll no. of the student:");
		scanf("%d",&s[i].roll);
		printf("\n Enter the marks of the student:");
		printf("\nEnter the marks of phys:");
		scanf("%d",&s[i].s1.p);
		printf("\nEnter the marks of chem:");
		scanf("%d",&s[i].s1.c);
		printf("\nEnter the marks of math:");
		scanf("%d",&s[i].s1.m);
		s[i].avg=(s[i].s1.p+s[i].s1.c+s[i].s1.m)/3;
		
	}
	for(i=0;i<3;i++){
			printf("\t \tName: %s\n",s[i].name);
			printf("\t \tRoll no.: %d\n",s[i].roll);
			if(s[i].avg>=90 && s[i].avg<=100)
			printf("grade :outstanding\n");
			else if(s[i].avg>=80 && s[i].avg<90)
			printf("garde :Excellent\n");
			else if(s[i].avg>=70 && s[i].avg<80)
			printf("Grade :very good\n");
			else if(s[i].avg>=60 && s[i].avg<70)
			printf("Grade : good\n");
			else if(s[i].avg>=50 && s[i].avg<60)
			printf("Grade :average\n");
			else if(s[i].avg>=40 && s[i].avg<50)
			printf("Grade :normal\n");
			else
			printf("grade :fail\n");
	}
}
