#include<stdio.h>
#include<malloc.h>
typedef struct record
{
	int value;
	struct record *next;
}NODE;
void append(int data);
void add_begin(int data);
void add_after_node(int data,int pos);
void del_begin();
void del_last();
void del_node(int pos);
void search(int data);
void display();
void reverse_list();
NODE *start=NULL;
int main()
{
	int prompt,data,num,pos;
	do
	{
		printf("\n <1> to add a new node to list");
		printf("\n <2> to add a new node to list at first");
		printf("\n <3> to add a new node after a node");
		printf("\n <4> to delete a node of list at first");
		printf("\n <5> to delete a node of list at last");
		printf("\n <6> to delete a node of list at a position");
		printf("\n <7> to reverse the list");
		printf("\n <8> to search data");
		printf("\n <11> to display the list");
		printf("\n <0> to end operation");
		printf("\n enter choice:");
		scanf("%d",&prompt);
		switch(prompt)
		{
			case 1: printf("\n enter data:");
					scanf("%d",&data);
					append(data);
					break;
			case 2: printf("\n enter data:");
					scanf("%d",&data);
					add_begin(data);
					break;
			case 3: printf("\n enter a data and postion :");
					scanf("%d%d",&data,&pos);
					add_after_node(data,pos);
					break;		
			case 4: del_begin();
					break;
			case 5: del_last();
					break;
			case 6: printf("\n enter a  postion :");
					scanf("%d",&pos);
					del_node(pos);
					break;
			case 7:reverse_list();
					break;
			case 8: printf("\n enter a data to search");
					scanf("%d",&data);
					search(data);
					break;										
			case 11: display();
					 break;
			case 0: break;
			default: printf("\n enter right choice!");				 		
		}
	}while(prompt!=0);
	return 0;
}
void append(int data)
{
	NODE *temp,*curr;
	temp=(NODE*)malloc(sizeof(NODE));
	temp->value=data;
	temp->next=NULL;
	if(start==NULL)
	{
		printf("\n****FIRST NODE OF THE LIST CREATED***\n");
		start=temp;
	}
	else
	{
		curr=start;
		while(curr->next!=NULL)
		{
			curr=curr->next;
		}
		curr->next=temp;
	}
	}
void add_begin(int data)
{
	NODE *temp;
	temp=(NODE*)malloc(sizeof(NODE));
	temp->value=data;
	temp->next=start;
	start=temp;
}
void add_after_node(int data,int pos)
{
	NODE *curr,*temp;
	temp=(NODE*)malloc(sizeof(NODE));
	curr=start;
	if(curr==NULL)
	{
		printf("\n the node is outside of the list");
		return;
	}
	else
	{
		while((pos>1)&&(curr!=NULL))
		{
			curr=curr->next;
			pos--;
		}
	}
	temp->value=data;
	temp->next=curr->next;
	curr->next=temp;
}
void del_begin()
{
	NODE *temp;
	temp=start;
	start=start->next;
	free(temp);
}
void del_last()
{
	NODE *temp,*curr;
	curr=start;
	while(curr->next->next !=NULL)
	{
		curr=curr->next;
		
	}
	temp=curr->next;
	curr->next=NULL;
	free(temp);
}
void del_node(int pos)
{
	NODE *curr,*temp;
	curr=start;
	

		while(((pos-1)>1)&&(curr!=NULL))
		{
			curr=curr->next;
			pos--;
		}
		if(curr==NULL)
	{
		printf("\n the node is outside of the list");
		return;
	}
	
	temp=curr->next;
	curr->next=temp->next;
	free(temp);
}
void search(int data)
{
	NODE *curr;
	int count=0,check=0;
	curr=start;
	while(curr!=NULL)
	{
			if(curr->value==data)
		{
			printf("\n %d is found at %d position",data,count);
			check++;
		}
		curr=curr->next;
	}
	if(check==0)
	printf("\n value not found in list");
	}	
void display()
{
	int count=0;
	NODE* curr=start;
	printf("\n CURRENT LIST");
	if(curr==NULL)
		printf("\n EMPTY LIST");
	while(curr!=NULL)
	{
		printf("\n data%d=%d",++count,curr->value);
		curr=curr->next;
	}
}
void reverse_list()
{
	NODE *curr,*prev,*temp;
	curr=start;
	if(curr==NULL)
	printf("You have not created a linked list till now");
	else{
		prev=NULL;
		temp=start;
		while(temp!=NULL){
			temp=temp->next;
			curr->next=prev;
			prev=curr;
			curr=temp;
		}
		
			
		}
		}

