//Write a menu driven program to implement doubly link list with all operation.
 #include<stdio.h>
 #include<conio.h>
 #include<alloc.h>

 struct node
 {
	int data;
	struct node *next;
	struct node *prev;
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
		newnode->prev=NULL;
		if(head==NULL)
			head=newnode;
		else
			{
				q->next=newnode;
				newnode->prev=q;
			}

			q=newnode;
			printf("\nDo you want to continue?:");
			flushall();
			scanf("%c",&ch);
	}while(ch=='y');
	newnode->next=NULL;
	last=newnode;
 }
 void display1()
 {
	q=head;
	do
	{
		printf("\n\t|%d|%d|",q->data,q->next);
		q=q->next;
	}while(q!=NULL);
 }
 void display2()
 {
	q=last;
	do
	{
		printf("\n\t|%d|%d|",q->data,q->next);
		q=q->prev;
	}while(q!=NULL);
 }
 void add_begin()
 {
	int e;
	printf("\nEnter data:");
	scanf("%d",&e);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=e;
	newnode->prev=NULL;
	newnode->next=head;
	head->prev=newnode;
	head=newnode;
 }
 void add_end()
 {
	int e;
	printf("\nEnter data:");
	scanf("%d",&e);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=e;
	newnode->next=NULL;
	last->next=newnode;
	newnode->prev=last;
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
		q=q->next;
	newnode->next=q->next;
	newnode->prev=q;
	q->next->prev=newnode;
	q->next=newnode;
 }
 void del_begin()
 {
	temp=head;
	head=head->next;
	head->prev=NULL;
	free(temp);
 }
 void del_end()
 {
	temp=last;
	last=last->prev;
	last->next=NULL;
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
	q->next->prev=q;
	free(temp);
 }

 void main()
 {
	int ch;
	clrscr();
	create();
	display1();
	do
	{
		printf("\n1.add begin");
		printf("\n2.add end");
		printf("\n3.add middle");
		printf("\n4.del begin");
		printf("\n5.del end");
		printf("\n6.del middle");
		printf("\n7.display F");
		printf("\n8.display R");
		printf("\n9.exit");
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
				display1();
				break;
			case 8:
				display2();
				break;
			case 9:
				printf("\nBYE BYE");
				break;

		}
	}while(ch!=9);
	getch();
 }
