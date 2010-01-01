#include<stdio.h>
#include<ctype.h>

typedef struct conversion
{
char a[30];
int top;
}stack;

void push(stack*char);

char pop(stack*);

void convert(char[],char[]);

int priority(char);

char infix[30],postfix[30];

int main()
{
char infix[30],postfix[30];
printf("ENTER INFIX EXPRESSION\n");
scanf("%s",infix);
convert(infix,postfix);
printf("\n\nPOSTFIX EXPRESSION\n%s",postfix);
return 0;
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
