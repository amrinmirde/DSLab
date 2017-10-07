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
              

/*...OUTPUT OF THE PROGRAM...
ENTER
1.Peek
2.Push
3.Pop
4.Exit
Enter your choice2
Enter the element to be inserted
10
Your element 10 is successfully inserted
ENTER
1.Peek
2.Push
3.Pop
4.Exit
Enter your choice2
Enter the element to be inserted
20
Your element 20 is successfully inserted
ENTER
1.Peek
2.Push
3.Pop
4.Exit
Enter your choice2
Enter the element to be inserted
30
Your element 30 is successfully inserted
ENTER
1.Peek
2.Push
3.Pop
4.Exit
Enter your choice2
Enter the element to be inserted
40
Your element 40 is successfully inserted
ENTER
1.Peek
2.Push
3.Pop
4.Exit
Enter your choice2
Enter the element to be inserted
50
Your element 50 is successfully inserted
ENTER
1.Peek
2.Push
3.Pop
4.Exit
Enter your choice3
Your element 50 is successfully deleted
ENTER
1.Peek
2.Push
3.Pop
4.Exit
Enter your choice3
Your element 40 is successfully deleted
ENTER
1.Peek
2.Push
3.Pop
4.Exit
Enter your choice2
Enter the element to be inserted
25
Your element 25 is successfully inserted
ENTER
1.Peek
2.Push
3.Pop
4.Exit
Enter your choice2
Enter the element to be inserted
45
Your element 45 is successfully inserted
ENTER
1.Peek
2.Push
3.Pop
4.Exit
Enter your choice1
Enter at the top of the stack is 45
ENTER
1.Peek
2.Push
3.Pop
4.Exit
Enter your choice3
Your element 45 is successfully deleted
ENTER
1.Peek
2.Push
3.Pop
4.Exit
Enter your choice1
Enter at the top of the stack is 25
ENTER
1.Peek
2.Push
3.Pop
4.Exit
Enter your choice4*\


