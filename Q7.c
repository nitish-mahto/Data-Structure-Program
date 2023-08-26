//Write a menu driven program to implement circular singly link list with all operation.
#include<stdio.h>
 #include<conio.h>
 #include<alloc.h>

 struct node
 {
	int data;
	struct node *next;
 }*head,*q,*newnode,*last,*temp;

 void create()
 {
	char ch='y';
	int e;
	head=NULL;
	do
	{
		printf("\nEnter data:");
		flushall();
		scanf("%d",&e);

		newnode=(struct node*)malloc(sizeof(struct node));

		newnode->data=e;
		if(head==NULL)
			head=newnode;
		else
			{
				q->next=newnode;
			}
			q=newnode;
			printf("\nDo you want to continue?\nEnter your choice:");
			flushall();
			scanf("%c",&ch);
	}while(ch=='y');
	newnode->next=head;
	last=newnode;
 }
 void display()
 {
	q=head;
	do
	{
		printf("\n\t|%d|%d|",q->data,q->next);
		q=q->next;
	}while(q!=head);
 }
 void add_begin()
 {
	int e;
	printf("\nEnter data:");
	scanf("%d",&e);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=e;
	last->next=newnode;
	newnode->next=head;
	head=newnode;
 }
 void add_end()
 {
	int e;
	printf("\nEnter data:");
	scanf("%d",&e);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=e;
	last->next=newnode;
	newnode->next=head;
	last=newnode;
 }
 void add_middle()
 {
	int p,e,i;
	printf("\nEnter position:");
	scanf("%d",&p);
	printf("\nEnter data:");
	scanf("%d",&e);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=e;
	q=head;
	for(i=1;i<=p-2;i++)
	{
		q=q->next;
	}
	newnode->next=q->next;
	q->next=newnode;
 }
 void del_begin()
 {
	temp=head;
	head=head->next;
	last->next=head;
	free(temp);
 }
 void del_end()
 {
	q=head;
	do
	{
		q=q->next;
	}while(q->next->next!=head);
	temp=q->next;
	q->next=head;
	last=q;
	free(temp);
 }
 void del_middle()
 {
	int i,p;
	printf("\nEnter position:");
	scanf("%d",&p);
	q=head;
	for(i=1;i<=p-2;i++)
	{
		q=q->next;
	}
	temp=q->next;
	q->next=q->next->next;
	free(temp);
 }

 void main()
 {
	int ch;
	clrscr();
	create();
	display();
	do
	{
		printf("\n1.add begin");
		printf("\n2.add end");
		printf("\n3.add middle");
		printf("\n4.del begin");
		printf("\n5.del end");
		printf("\n6.del middle");
		printf("\n7.display");
		printf("\n8.exit");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				add_begin();
				break;
			case 2:
				add_end();
				break;
			case 3:
				add_middle();
				break;
			case 4:
				del_begin();
				break;
			case 5:
				del_end();
				break;
			case 6:
				del_middle();
				break;
			case 7:
				display();
				break;
			case 8:
				printf("\nBYE BYE");
				break;
		}
	}while(ch!=8);
	getch();
 } 
