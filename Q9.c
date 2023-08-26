//write a program to implement dynamic stack.
#include<stdio.h>
 #include<conio.h>
 #include<alloc.h>

 struct node
 {
	int data;
	struct node *next;
 }*newnode,*head=NULL;
 void push()
 {
	int e;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter data:");
	scanf("%d",&e);
	newnode->data=e;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		newnode->next=head;
		head=newnode;
	}
 }
 void pop()
 {
	struct node *tmp;
	if(head==NULL)
	{
		printf("\nStack is underflow");
	}
	else
	{
		tmp=head;
		printf("\nPoped item is %d",tmp->data);
		head=head->next;
		free(tmp);
	}
 }
 void display()
 {
	struct node *tmp;
	tmp=head;
	if(head==NULL)
	{
		printf("\nStack is empty");
	}
	else
	{
		while(tmp!=NULL)
		{
			printf("%d\n",tmp->data);
			tmp=tmp->next;
		}
	}
 }
 void main()
 {
	int ch;
	clrscr();
	do
	{
		printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				break;
			default:
				printf("\nWrong choice");
		}
	}while(ch!=4);
	getch();
 }
