#include<stdio.h>
#include<maths.h>
#define MAX_SIZE 10

int queue[MAX_SIZE],front=-1,rear=-1;

int isFull(){
	//returns 1 if stack is full else returns -1
	return ((rear==MAX_SIZE-1&&front==0)||(rear+1==front));

	
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
	if(isEmpty())
	{
	front++;
}
rear=(rear++)%MAX_SIZE;
queue[rear]=d;
printf("%d successfully inserted",d);

else{
printf("Queue is full element cannot be inserted");
}
}
void deletequeue(){
	int d;
	if(!isEmpty()){
		d=queue[front];
		if(front==rear)
			front=rear=-1;
		else
			front=(front+1)%(MAX_SIZE);
		printf("\nThe element deleted is %d",d);
		printf("\n%d-%d",front,rear);	
	}
	else
		printf("\nQueue is Empty");	
         	
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
				
				
				
				
				
				
			
			

