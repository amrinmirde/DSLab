
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
/*
import java.util.*;
class Feedback
{
public static void main(String []args)
{
Scanner sc=new Scanner();
int br,sem,cour,g,op;
char c1[15],c2[15],c3[15],c4[15],c5[15];
char url[30],usern[30],tprof[30],pprof[30]
System.out.println("\nEnter the URL:  ");
url=sc.nextLine();
System.out.println("\nEnter Username:  ");
usern=sc.nextLine();
System.out.println("\nEnter Password:  ");
scanf("%s",f.Passw);
System.out.println("\n\n\nLogin");
System.out.println("\n\n\n\n\n\n\n\n\n\n\n\nSelect your Branch");
System.out.println("1. HAS\n2. CO\n3. ME\n4. EE\n5. ET"):
br=sc.nextInt();
switch(br)
{
case 1: System.out.println("HAS");
break;
case 2: System.out.println("CO");
break;
case 3:System.out.println("ME");
break;
case 4:System.out.println("EE");
break;
case 5:System.out.println("ET");
break;
}
System.out.println("\nEnter your semester: ");
sem=sc.nextInt();
do
{
System.out.println("1. Course 1\n 2. Course 2\n 3.Course 3\n 4.Course 4\n 5. Course 5\n 6.Exit");
cour=sc.nextInt();
switch(cour)
{
case 1:System.out.println("\nEnter COURSE NAME");
System.out.println("Course 1");
System.out.println("\nEnter COURSE NAME");
c1=sc.next();
break;
case 2:System.out.println("\nEnter COURSE NAME");
System.out.println("Course 2");
c2=sc.next();
break;
case 3:System.out.println("\nEnter COURSE NAME");
System.out.println("Course 3");
c3=sc.next();
break;
case :System.out.println("\nEnter COURSE NAME");
System.out.println("Course 4");
c4=sc.next();
break;
case 5:System.out.println("\nEnter COURSE NAME");
System.out.println("Course 5");
c5=sc.next();
break;
case 6:System.out.println("\nEnter COURSE NAME");
System.out.println("Course 6");
c6=sc.next();
break;
case 7:System.out.println("\nEnter COURSE NAME");
System.out.println("Exit");
break;
}
do
{
System.out.println("1.Theory\n 2. Practicals\n 3.Exit");
g=sc.nextInt();
switch(g)
{
case 1:System.out.println("**Theory**");
System.out.println("\nEnter Professor's Name: ");
tprof=sc.nextLine();
Questions r=new Questions();
r.q1();
opt();
r.q2();
opt();
r.q3();
opt();
r.q4();
opt();
r.q5();
opt();
r.q6();
opt();
break;
case 2:System.out.println("Practicals");
System.out.println("\nEnter Professor's Name: ");
pprof=sc.nextLine();										
r.q1();
opt();
r.q2();
opt();
r.q3();
opt();
r.q4();
opt();
r.q5();
opt();
r.q6();
opt();
break;
}
System.out.println("\nEnter your suggestions for improvement");
sugg=sc.nextLine();
System.out.println("1.Submit answers\n 2.Cancel");
op=sc.nextInt();
switch(op)
{
case 2:System.out.println("Submit answers");
break;
case 1:System.out.println("Cancel");
break;
}
}while(op!=2);
System.out.println("\nYour answers have been saved");
}while(cour!=7);
} */
