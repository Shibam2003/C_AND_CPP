//program to display use of  union
#include<stdio.h>
union student{
	int roll;
	int marks; 
	char name[50];
};
void main(){
	union student s;
	printf("\nEnter the roll no. of the student:");
	scanf("%d",&s.roll);
	printf("\nThe roll no. of the student is:%d",s.roll);
	printf("\nEnter the marks of the student:");
	scanf("%d",&s.marks);
	printf("\nThe marks of the student is:%d",s.marks);
	fflush(stdin);
	printf("\nEnter the name of the student:");
	gets(s.name);
	printf("\nThe name of the student is:%s",s.name);
}
