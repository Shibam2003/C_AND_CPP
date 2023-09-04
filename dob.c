//program to display nesting of structre 
#include<stdio.h>
struct dob
{
	int DD;
	char MM[10];
	int YY;
};
struct student
{
	int roll;
	float marks;
	char name[30];
	struct dob s;
};
int main(){
	struct student s2;
	printf("Enter the roll :");
	scanf("%d",&s2.roll);
	printf("Enter the marks:");
	scanf("%f",&s2.marks);
	printf("Enter the dob:");
	printf("\nEnter the date:");
	scanf("%d",&s2.s.DD);
	fflush(stdin);
	printf("Enter the month:");
	gets(s2.s.MM);
	
	printf("Enter the year:");
	scanf("%d",&s2.s.YY);
	printf("\n roll:%d",s2.roll);
	printf("\n marks:%f",s2.marks);
	printf("\n date:%d",s2.s.DD);
	printf("\n month:%s",s2.s.MM);
	printf("\n year:%d",s2.s.YY);
}

