/*IMPLEMENTATION OF STACK AS AN ARRAY
LEARNER:Amrin Mirde..SE-16co05
Date of performance:            */

#include<stdio.h>

#define MAX_SIZE 10

int stack[MAX_SIZE],front=-1,top=-1;

int isFull()
{
	
	int isFull(){
	//returns 1 if stack is full else returns -1
	if(top==MAX_SIZE-1)
	return 1;
	else return 0;
	
	
}

int isEmpty()
{
//return 1 if stack is empty else returns -1
return top==-1;
}

int peek()
{
	//return element at the top of stack
      return stack[top];
}


void push(int e)
{
	//inserts an element into stack
        if(!isFull())
       {
	top++; //increment the top 
	stack[top]=e;
	printf("Your element %d is successfully inserted",e);
       }
   else
       {
	//msg stack overflow
printf("ELement cannot be inserted.Stack overflow!");
       }
}   
void pop()
{
	int d;
	if(!isEmpty())
	{
		d=stack[top];  //d=top of stack
		top--;         //decrement the top
printf("Your element %d is successfully deleted",d);  //msg element successfully deleted		
        }
	else
        {
printf("Element cannot be deleted.Stack underflow");		//msg stack underflow
	}
}
	int main()
{
		int ch;
                int e;
		do
		{
                 //display menu 1.peek 2.push 3.pop 4.exit
                 printf("\nENTER\n1.Peek\n2.Push\n3.Pop\n4.Exit\n");
			printf("Enter your choice");
			scanf("%d",&ch);                         
			switch(ch)
                      {
				case 1:
				e=peek();//call peek function
                       printf("Enter at the top of the stack is %d",e);
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
              

/*...struct feedback
{
char Url[30];
char Username[30];
char Passw[20];
char Sugg[100];
};
void q1()                   //call q1 function....Question 1
{
printf("\nApproach and Efforts taken to clearly explain the topics");
}
void q2()                  //call q2 function....Question 2
{
printf("\nTimely conduction of Lectures and Practicals & checking of Assignments and journals");
}
void q3()                  //call q3 function....Question 3
{
printf("\nAudibility of Teacher");
}
void q4()                 //call q4 function...Question 4
{
printf("\nGestures and Class control");
}
void q5()                //call q5 function....Question 5
{
printf("\nKnowledge gained in college is making you ready for the Examination");
}
void q6()               //call q6 function....Question 6
{
printf("\nUse of Innovative ideas/methods in teaching.Effectiveness of the same for this subject"); 
}
void opt()
{
int option;
printf("Enter your choice: ");
printf("1.Need Improvement\n 2.Average\n 3.Good\n 4.Very Good\n 5.Excellent");
scanf("%d",&option);
switch(option)
{
case 1: printf("Need Improvement");
break;
case 2:printf("Average");
break;
case 3:printf("Good");
break;
case 4:printf("Very Good");
break;
case 5:printf("Excellent");
break;
}
}
