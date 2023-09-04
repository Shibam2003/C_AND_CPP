#include<stdio.h>
#include<malloc.h>
typedef struct node
{
	int data;
	struct node *next;
}node;
node *create();
void append(node**);
void add_begin(node**);
void del_begin(node**);
void del_last(node**);
void display(node**);
int main()
{
	node *head=NULL;
	int ch;
	while(1)
	{
		printf("\n <1> to add a new node to list at first");
		printf("\n <2> to add a new node to list at last");
		printf("\n <3> to delete a node of list at first");
		printf("\n <4> to delete a node of list at last");
		printf("\n <5> to display the list");
		printf("\n <0> to end operation");
		printf("\n enter choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: add_begin(&head);
					break;
			case 2: append(&head);
					break;		
			case 3: del_begin(&head);
					break;
			case 4: del_last(&head);
					break;					
			case 5: display(&head);
					 break;
			case 0: break;
			default: printf("\n enter right choice!");				 		
		}
	}
	return 0;
}
node *create()
{
	node *temp;
	temp=(node*)malloc(sizeof(node));
	printf("\n enter the number:");
	scanf("%d",&temp->data);
	temp->next=NULL;
	return temp;
}
void append(node** start)
{
	node *temp,*p;
	p=*start;
	temp=create();
	if(*start==NULL)
	*start=temp;
	else
	{
		while(p->next!=NULL)
		p=p->next;
		p->next=temp;
		temp->next=NULL;
	}
}
void add_begin(node** start)
{
	node *temp,*ptr;
	temp=create();
	if(*start=NULL)
	*start=temp;
	else
	{
		temp->next=*start;
		*start=temp;
	}
}
void del_begin(node** start)
{
	node *temp,*p;
	p=(*start);
	if(p==NULL)
	printf("\ndeletion is not possible");
	else if(p->next==NULL)
	{
		temp=(*start);
		*start=NULL;
		free(temp);
	}
	else
	{
		temp=(*start);
		*start=(*start)->next;
		free(temp);
	}
	
}
void del_last(node** start)
{
	node *temp,*curr;
	curr=*start;
	if(*start==NULL)
	printf("no deletion possible");
	else
	{
	while(curr->next->next !=NULL)
	{
		curr=curr->next;
		
	}
	temp=curr->next;
	curr->next=NULL;
	free(temp);
}
}
void display(node** start)
{
	node *ptr;
	ptr=*start;
	if(ptr==NULL)
	printf("linked list is empty");
	else
	{
		while(ptr!=NULL)
		{
			printf("%d\t",ptr->data);
			ptr=ptr->next;
		}
	}printf("\n");
}
