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
int main(){
	int data,prompt;
	printf("Enter <1>to add new node to list,<0> to  end list, <2> to display the list\n  ");
	scanf("%d",&prompt);
	do{
	
	switch(prompt){
		case 1: printf("\nEnter the value:");
				scanf("%d",&data);
				append(data);
				break;
		case 2: display();
				break;
		case 0: break;
		default: printf("\nEnter the right choice:\n");
	}
}while(prompt!=0);

	return 0;
}
void append(int data){
	NODE *temp,*curr;
	temp=(NODE*) malloc(sizeof(NODE));
	temp->value=data;
	temp->next=NULL;
	if(start==NULL){
		start=temp;
	
	}
	else{
		curr=start;
		while(curr->next!=NULL){
			curr=curr->next;
		}
		curr->next=temp;
	}
	}
	void display(){
		if(start==NULL)
		printf("no list here");
		else
		{
			int count=0;
			NODE *curr=start;
			while(curr!=NULL){
				printf("data%d=%d\n",++count,curr->value);
				curr=curr->next;
			}
		}
	}




