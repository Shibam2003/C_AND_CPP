//Arrray of structure
#include<stdio.h>
struct student{
	int roll;
	float marks;
	char name[100];
};
void main(){
	int i;
	struct student s[3];
	printf("\n--------- Enter the records of the student----------\n");
	printf("__________________________________________________________");
	for(i=0;i<3;i++){
		printf("\n Enter the roll no. of the student:");
		scanf("%d",&s[i].roll);
		printf("\n Enter the marks of the student:");
		scanf("%f",&s[i].marks);
		fflush(stdin);
		printf("\n Enter the name of the student:");
		gets(s[i].name);
	}
	printf("\n ---------- The records of the students are----------\n");
	for(i=0;i<3;i++){
			printf("\t \tName: %s\n",s[i].name);
			printf("\t \tRoll no.: %d\n",s[i].roll);
			printf("\t \tMarks: %.2f\n",s[i].marks);
	}
	
}
