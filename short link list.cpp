/*Implementing a singly linked list*/
#include<stdio.h>
#include<malloc.h>
typedef struct record
{
	int value;
	struct record *next;
}NODE;
void append(int data);
void display();
NODE *start=NULL;
int main()
{
	int prompt,data;
	do{printf("\nEnter<1> to addnew node,<0> to end list: ");
	scanf("%d",&prompt);
	if(prompt==1)
	{printf("\n Enter data: ");
	scanf("%d",&data);
	append(data);
	}
	}while(prompt!=0);
	display();
}
void append(int data)
{
	NODE *temp,*curr;
	temp=(NODE*)malloc(sizeof(NODE));
	temp->value=data;
	temp->next=NULL;
	if(start==NULL)
	start=temp;
	else
	{	curr=start;
	while(curr->next!=NULL)
	{
		curr=curr->next;
	}
	curr->next=temp;
	}
}
void display()
{
	int count=0;
	NODE* curr=start;
	printf("\n Current list: ");
	while(curr!=NULL)
	{
		printf("Data%d= %d\n",++count,curr->value);
		curr=curr->next;
	}
}
