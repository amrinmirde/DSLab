
#include<stdio.h>
#define MAX_SIZE 10

int queue[MAX_SIZE],front=-1,rear=-1;

int isFull()
{
	//returns 1 if stack is full else returns -1
	if(rear==MAX_SIZE-1)
	return 1;
	else
        return 0;    
	
}

int isEmpty()
{
//return 1 if stack is empty else returns -1
if(rear==-1&&front==-1)
return 1;
else 
return 0;
}

void display()
{
int i;
printf("Elements are:");
for(i=front;i<=rear;i++)
{
	printf("%d",queue[i]);
}
}
void insertqueue(int d)
{
	//inserts an element into queue
         if(!isFull())
{
	if(isEmpty())
front=0;
queue[++rear]=d;	//return 1 if queue is empty else return-1
	if(front=!rear)
	queue[rear]==-1;
	rear++;
	
}
else
{
printf("Queue is full element cannot be inserted");
}
}

void deletequeue()
{
	int d=queue[front];
	if(front==rear)
	front=rear=-1;
	
	else
	front++;
		printf("Element deleted is%d",d);
}
	int main()
	
	{
	
		int choice,e;
		do
		{
			printf("ENTER\n1.DISPLAY\n2.INSERT\n3.DELETE\n4.EXIT\n");
			printf("Enter your choice");
		scanf("%d",&choice);
			switch(choice){
				case 1:
				//call display function
				display();
				break;
				case 2:
				//call 	insert function
				printf("Enter the data to be inserted");
				scanf("%d",&e);
				insertqueue(e);
				break;
				case 3:
				//call delete function
				deletequeue();
				break;
				case 4:
				Exit(0); //call exit function or return 0
				break;
				default:
				printf("\nInvalid choice"); //Invalid choice
				break;
			}
		}while(1);
		return 0;
	}
				
				
				
				
				
				
			
			


