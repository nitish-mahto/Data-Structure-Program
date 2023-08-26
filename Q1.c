//write a program to implement stack with push,pop,peep and update operation.
#include<stdio.h>
#include<conio.h>
#define n 5
int top=-1;
int s[n];

void push(int data)
{
	if(top==n-1)
	{
		printf("\n\t\tStack is overflow");
		return;
	}
	top++;
	s[top]=data;
}
int pop()
{
	int data;
	if(top==-1)
	{
		printf("\n\t\tStack is underflow");
		return 0;
	}
	data=s[top];
	top--;
	return data;
}
int peep(int p)
{
	if(top-p+1<0)
	{
		printf("\n\t\tStack is underflow in peep");
		return 0;
	}
	else
		return s[top-p+1];
}
void update(int p,int data)
{
	 if(top-p+1<0)
	 {
		printf("\n\t\tStack is underflow in update");
		return;
	 }
	 else
		s[top-p+1]=data;
}
void disp()
{
	int i;
	for(i=top;i>=0;i--)
		printf("\n%d",s[i]);
}
void main()
{
	int e,ch,p;
	clrscr();
	printf("\n\tstack implimentation");
	printf("\n\t1.PUSH");
	printf("\n\t2.POP");
	printf("\n\t3.PEEP");
	printf("\n\t4.UPDATE");
	printf("\n\t5.DISPLAY");
	printf("\n\t6.EXIT");
	do
	{
	printf("\n\tEnter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("\nEnter a data:");
			scanf("%d",&e);
			push(e);
			break;
		case 2:
			e=pop();
			if(e!=0)
				printf("\nDeleted no is %d",e);
			break;
		case 3:
			printf("\nEnter position betwee 1 to %d:",top+1);
			scanf("%d",&p);
			e=peep(p);
			if(e!=0)
				printf("\n no is %d",e);
			break;
		case 4:
			printf("\nEnter position:");
			scanf("%d",&p);
			printf("Enter data to change:");
			scanf("%d",&e);
			update(p,e);
			break;
		case 5:
			disp();
			break;
		case 6:
			printf("\nBYE BYE");
			break;
		default:
			printf("\nPLEASE ENTER VALID CHOICE");
	}
	}while(ch!=6);
getch();
}
