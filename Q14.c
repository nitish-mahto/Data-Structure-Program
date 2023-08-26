//write a program to create two singly link list and then merge them and sort them.

#include<stdio.h>
 #include<conio.h>
 #include<alloc.h>

 struct node
 {
	int data;
	struct node *next;
 }*head,*head1,*head2,*q,*newnode;

  void create()
 {
	char ch='y';
	int e;
	head=NULL;
	do
	{
		printf("\nEnter data:");
		scanf("%d",&e);

		newnode=(struct node*)malloc(sizeof(struct node));

		newnode->data=e;
		if(head==NULL)
			head=newnode;
		else
			q->next=newnode;
		q=newnode;
		printf("\ndo you want to continue?\nenter your choice:");
		flushall();
		scanf("%c",&ch);
	}while(ch=='y');
	newnode->next=NULL;
}
 void display()
 {
	q=head1;
	do
	{
		printf("\n\t|%d|%d|",q->data,q->next);
		q=q->next;
	}while(q!=NULL);
 }
 void merge()
 {
	q=head1;
	while(q->next!=NULL)
	{
		q=q->next;
	}
	q->next=head2;
	printf("\nAfter merging\n");
	display();
 }
 void sort()
 {
	int i,j,temp;
	struct node *t;
	q=head1;
	while(q!=NULL)
	{
		t=q->next;
		while(t!=NULL)
		{
			if(t->data<q->data)
			{
				temp=q->data;
				q->data=t->data;
				t->data=temp;
			}
			t=t->next;
		}
		q=q->next;
	}
 }
 void main()
 {
	int ch;
	clrscr();
	create();
	head1=head;
	display();
	create();
	head2=head;
	do
	{
		printf("\n1.merge");
		printf("\n2.sort");
		printf("\n3.display");
		printf("\n4.exit");
		printf("\nenter your choice:");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
				merge();
				break;
			case 2:
				sort();
				break;
			case 3:
				display();
				break;
			case 4:
				break;
		}
	}while(ch!=4);
	getch();
 }
