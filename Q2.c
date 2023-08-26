//write a program to reverse the string using stack.
#include<stdio.h>
#include<conio.h>
#include<string.h>
#define n 20
int top=-1;
char s[n];
void push(char data)
{
	if (top==(n-1))
	{
		printf("\n stack is overflow :" );
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
		printf("\n Stack is underflow :");
		return 0;
	}
	data=s[top];
	top--;
	return data;
}
void main()
{
	char r[n],str[n];
	int i;
	clrscr();
	printf("\n Enter string :-");
	gets(str);
	for(i=0;i<strlen(str);i++)
	push(str[i]);
	for(i=0;i<strlen(str);i++)
	r[i]=pop();
	r[i]='\0';
	puts(r);
	getch();
}
