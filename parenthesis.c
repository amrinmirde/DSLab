#include<stdio.h>
#include<ctype.h>

typedef struct conversion
{
char a[30];
int top;
}stack;
void push(stack*s,char c);
char pop(stack*s);
void checkcontinuity(char exp[]);
{
	int i,c;
	stack s;
	s.top=-1;
	for(i=0;exp[i]!='\0';i++)
	{
		if(exp[i]=='('||'{'||'[')
			push(stack,exp[i]);
		else
		{
			if(s.top==-1)
				printf("EXPRESSION IS INVALID");
				else
				return pop(&s);
				if(is matching pair(c,exp[i])
				continue;
				else
				prinf("EXPRESSION IS INVALID");
				
		}
	}
}	
void is matching pair(char left,right);
{
	switch(left)
	{
		case'(':if(right==')')
		return 1;
		else return 0;
		break;
		case '{':if(right=='}')
		return 1;
		else return 0;
		break;
		case'[':if(right==']')
		return 1;
		else return 0;
		break;
	}
	
		
		
int priority(char);

int main()
{
char exp[30];
printf("ENTER EXPRESSION CONTAINING BRACKETS\n");
scanf("%s",exp);
check continuity(exp[i]);
}

void convert(char in[],char post[])
{
char opr;
stack s1;
int j=0,i;
s1.top=-1;
for(i=0;in[i]!='\0';i++)
{
if(isalpha(int[]))
post j++=in[i];
if(in[i]==in[i];
while(priority(opr)>=priority
post[j++]=opr;
opr=pop(&s1);
}
push(&s1,opr);
push(&s1,in[i]);
}
else
push(&s1,in[i]);
}
if(in[i]
