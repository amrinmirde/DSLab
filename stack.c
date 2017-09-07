#include<stdio.h>
#define MAX_SIZE 10

int stack[MAX_SIZE],top=-1;

int isFull(){
	//returns 1 if stack is full else returns -1
	if MAX_SIZE=1
	return 1;
	else return -1;
	
}

int isEmpty()
//return 1 if stack is empty else returns -1
if MAX_SIZE=1
return 1;
else return -1;
}

int peek(){
	//return element at the top of stack
if MAX_SIZE=1
return top of stack;
}


void push(int e){
	//inserts an element into stack
if(wether the stack is not full)
{
	increment the top 
	set top of stack equal e
	msg element e succ inserted
}
else{
	msg stack overflow
void pop(){
	int d;
	if(wether stack is empty)
	{
		d=top of stack
		decrement the top 
		msg element d successfully deleted
	}
	else{
		msg stack underflow
	}
	int main(){
		int choice,e;
		do
		{
			printf("enter your choice");
			take input in choice variable
			switch(choice){
				case 1:
				e=peek();//call peek function
                       printf("Enter at the top of the stack\n");
				break;
				case	2:printf("Enter the element to be inserted\n");
                                 scanf("%d",&e);
                                 push(e);//call push function
                               break;
                               case 3:
                                pop();//call pop function
                                 break;
                               case 4:
                                 exit(0);//call exit(0) function
                                 break;
                                default:
                                printf("Invalid option");
                                 break;
                       }
                  }while(1);
                  return 0;
       }              


