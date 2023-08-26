//write a program to convert infix into postfix expression using stack.
#include<stdio.h>
#include<conio.h>
#include<string.h>
#define n 20
int top=-1;
char s[n];
char infix[n],postfix[n];
void push(char data)
{
	if (top==(n-1))
	{
		printf("\n stack overflow");
		return ;
	}
	top++;
	s[top]=data;
}
char pop()
{
	char data;
	if(top==-1)
	{
		printf("\n stack underflow");
		return 0;
	}
	data=s[top];
	top--;
	return data;
}
void main()
{
	int i,j=-1;
	clrscr();
	printf("\nEnter infix expression : ");
	scanf("%s",infix);
	for(i=0;i<strlen(infix);i++)
	{
		switch (infix[i])
		{
			case '(':
				push(infix[i]);
				break;
			case ')':
				while (s[top]!='(')
				postfix[++j]=pop();
				pop();
				break ;
			case '^' :
				while(s[top]=='^')
				postfix[++j]=pop();
				push(infix[i]);
				break ;
			case '*' :
			case '/' :
				while((s[top]=='^')||(s[top]=='*')||(s[top]=='/'))
				postfix[++j]=pop();
				push(infix[i]);
				break ;
			case '+' :
			case '-' :
				while((s[top]=='^')||(s[top]=='*')||(s[top]=='/')||(s[top]=='+')||(s[top]=='-'))
				postfix[++j]=pop();
				push(infix[i]);
				break ;
			default :
				postfix[++j]=infix[i];
				break ;
		}

	}
	while(top!=-1)
	postfix[++j]=pop();
	postfix[++j]='\0';
	printf("postfix expression is %s",postfix);
	getch();
}
