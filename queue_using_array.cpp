// queue using array 
#include<stdio.h>
#define MAX 10
int queue[MAX], front=-1,rear=-1;
void store(int x);
int retrieve();

int main(){
	int val,prompt;
	do{
		printf("press <1> to enter a value:\n");
		printf("Press <2> to pop a value from the stack:\n");
		printf("Press <0> to end:\n");
		scanf("%d",&prompt);
		switch(prompt){
			case 1: printf("Enter the value to store:");
					scanf("%d",&val);
					store(val);
					break;
			case 2: printf("\npopped value is %d",retrieve());
					break;
			case 0: break;
			default: printf("Enter the correct choice:");
			
		}
	}while(prompt!=0);
	
	return 0;
}

/*void push(int x){
	if(top==MAX-1){
		printf("\n the stack is full !!!!");
	}
	else 
	{
		top=top+1;
		stack[top]=x;
	}
}
int pop(){
	if(top==-1){
		printf("The stack is empty !!!");
		return 0;
	}
	else{
		return stack[top--];
	}
}
*/
void store(int x){
	if(rear==MAX-1)
	printf("\n the queue is full !!!!");
	else{
		if(rear==-1)
		++front;
		rear=rear+1;
		queue[rear]=x;
	}
}
int retrieve(){
	int val;
	if(front==-1){
		printf("queue is empty!!!");
		return 0;
	}
	val=queue[front];
	if(front== rear){
		front=-1;
		rear=-1;
	}
	else{
		++front;
		return val;
	}
	
}


