
#include<stdio.h>
#define MAX_SIZE 10

int queue[MAX_SIZE],front=-1,rear=-1;

int isFull(){
	//returns 1 if stack is full else returns -1
	if(rear==MAX_SIZE-1)
	return 1;
	else return 0;
	
}

int isEmpty(){
//return 1 if stack is empty else returns -1
if rear==-1&&front==-1
return 1;
else return 0;
}

int peek(){
int i;
if
if (MAX_SIZE=1)
return queue[front];
}
void insertqueue(int d){
	//inserts an element into queue
if(!isFull())
{
	//return 1 if queue is empty else return-1
	if(isEmpty())
	front++;
}
else{
printf("Queue is full element cannot be inserted");
}
}
void deletequeue(){
	int d=queue[front];
	if(front==rear)
	front=rear=-1;
	if(~isEmpty())
	else
	front++;
		printf("Element deleted is%d",d);
	}
	int main(){
		int choice,e;
		do
		{
			printf("ENTER\n1.PEEK\n2.INSERT\n3.DELETE\n4.EXIT\n");
			printf("enter your choice");
			take input in choice variable
			switch(choice){
				case 1:
				//call peek function#include<stdio.h>
#define MAX_SIZE 10

int queue[MAX_SIZE],front=-1,rear=-1;

int isFull(){
	//returns 1 if stack is full else returns -1
	if(rear==MAX_SIZE-1)
	return 1;
	else return 0;
	
}

int isEmpty(){
//return 1 if stack is empty else returns -1
if rear==-1&&front==-1
return 1;
else return 0;
}

int peek(){
int i;
if
if (MAX_SIZE=1)
return queue[front];
}
void insertqueue(int d){
	//inserts an element into queue
if(!isFull())
{
	//return 1 if queue is empty else return-1
	if(isEmpty())
	{
	front++;
}
}
rear++;
queue[rear]=d;
printf("%d successfully inserted",d);
}
else{
printf("Queue is full element cannot be inserted");
}
}
void deletequeue(){
	int d=queue[front];
	if(front==rear)
	front=rear=-1;
	if(~isEmpty())
	else
	front++;
		printf("Element deleted is%d",d);
	}
	int main(){
		int choice,e;
		do
		{
			printf("ENTER\n1.PEEK\n2.INSERT\n3.DELETE\n4.EXIT\n");
			printf("enter your choice");
			take input in choice variable
			switch(choice){
				case 1:
				//call peek function
				e=peek();
				printf("Element at the front of queue is:%d",e);
				break;
				case 2:
				//call 	insert function
				printf("Enter the data to be inserted");
				scanf("%d",&e);
				insertqueue(e)
				break;
				case 3:
				//call delete function
				delete();
				break;
				case 4:
				exit(0);
				break;
				default:
				printf(\n"Invalid choice"); //Invalid choice
				break;
			}
		}while(1);
		return 0;
	}
				
				
				
				
				
				
			
			

				e=peek();
				printf("Element at the front of queue is:%d",e);
				break;
				case 2:
				//call 	insert function
				printf("Enter the data to be inserted");
				scanf("%d",&e);
				insertqueue(e)
				break;
				case 3:
				//call delete function
				delete();
				break;
				case 4:
				exit(0);
				break;
				default:
				printf(\n"Invalid choice"); //Invalid choice
				break;
			}
		}while(1);
		return 0;
	}
				
				
				
				
				
				
			
			
