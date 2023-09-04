//stack using array 
#include<stdio.h>
#define MAX 10
int stack[MAX], top=-1;
void push(int x);
int pop();

int main(){
	int val,prompt;
	do{
		printf("press <1> to enter a value:\n");
		printf("Press <2> to pop a value from the stack:\n");
		printf("Press <0> to end:\n");
		scanf("%d",&prompt);
		switch(prompt){
			case 1: printf("Enter the value to push:");
					scanf("%d",&val);
					push(val);
					break;
			case 2: printf("\npopped value is %d",pop());
					break;
			case 0: break;
			default: printf("Enter the correct choice:");
			
		}
	}while(prompt!=0);
	
	return 0;
}
void push(int x){
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



