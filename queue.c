
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
/* int main()
{
struct feedback f;
int br,sem,cour,g,op;
char c1[15],c2[15],c3[15],c4[15],c5[15];
printf("\nEnter the URL:  ");
scanf("%s",f.Url);
printf("\nEnter Username:  ");
scanf("%s",f.Username);
printf("\nEnter Password:  ");
scanf("%s",f.Passw);
printf("\n\n\nLogin");
printf("\n\n\n\n\n\n\n\n\n\n\n\nSelect your Branch");
printf("1. HAS\n2. CO\n3. ME\n4. EE\n5. ET"):
scanf("%d",&br);
switch(br)
{
case 1: printf("HAS");
break;
case 2: printf("CO");
break;
case 3:printf("ME");
break;
case 4:printf("EE");
break;
case 5:printf("ET");
break;
}
printf("\nEnter your semester: ");
scanf("%d",&sem);
do
{
printf("1. Course 1\n 2. Course 2\n 3.Course 3\n 4.Course 4\n 5. Course 5\n 6.Exit");
scanf("%d",&cour);
switch(cour)
{
case 1:printf("Course 1");
scanf("%s",c1);
break;
case 2:printf("Course 2");
scanf("%s",c2);
break;
case 3:printf("Course 3");
scanf("%s",c3);
break;
case 4:printf("Course 4");
scanf("%s",c4);
break;
case 5:printf("Course 5");
scanf("%s",c5);
break;
case 6:printf("Course 6");
scanf("%s",c6);
break;
case 7:printf("Exit");
break;
}
do
{
printf("1.Theory\n 2. Practicals\n 3.Exit");
scanf("%d",&g);
switch(g)
{
case 1:printf("Theory");
printf("\nEnter Professor's Name: ");
scanf("%s",tprof);
break;
q1();
opt();
q2();
opt();
q3();
opt();
q4();
opt();
q5();
opt();
q6();
opt();

case 2:printf("Practicals");
printf("\nEnter Professor's Name: ");
scanf("%s",pprof);			
break;							
q1();
opt();
q2();
opt();
q3();
opt();
q4();
opt();
q5();
opt();
q6();
opt();			
case 3:exit(0);         //call exit function or return 0
break;
}
printf("\nEnter your suggestions for improvement");
scanf("%s",sugg);
printf("1.Submit answers\n 2.Cancel");
scanf("%d",&op);
switch(op)
{
case 2:printf("Submit answers");
break;
case 1:printf("Cancel");
break;
}
}while(op!=2);
printf("\nYour answers have been saved");
}while(cour!=7);
return 0;
} */
