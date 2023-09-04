#include<stdio.h>
struct student{
	int roll;
	float marks;
	char name[100];
};
void main(){
	struct student s1;
	printf("\n Enter the roll no. of the student:\n");
	scanf("%d",&s1.roll);
	printf("\n Enter the marks of the student:\n");
	scanf("%f",&s1.marks);
	fflush(stdin);
	printf("\n Enter the name of the student:\n");
	gets(s1.name);
	printf("Name: %s\n",s1.name);
	printf("Roll no.: %d\n",s1.roll);
	printf("Marks: %.2f\n",s1.marks);
}
