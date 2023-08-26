//write a program to ceate singly link list and then perform sorting on node using selection sot.
#include<conio.h>
#include<stdio.h>
#include<alloc.h>
struct node
{
	int data;
	struct node *next;
}*head,*q,*newnode;
void create()
{
	int e;
	char ch;
	head=NULL;
	do
	{
		printf("\nEnter data :");
		scanf("%d",&e);
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=e;
		if(head==NULL)
			head=newnode;
		else
			q->next=newnode;
		q=newnode;
		printf("\ncontine :");
		flushall();
		scanf("%c",&ch);
	}while(ch=='y');
	q->next=NULL;
}
void disp()
{
	q=head;
	while(q!=NULL)
	{
		printf("\t%d",q->data);
		q=q->next;
	}
}

void selection_sort(struct node *h)
{
	struct node *t,*pos,*loc;
	int min,temp;
	t=h;
	while(h!=NULL)
	{
		min=h->data;
		t=h->next;
		pos=h;
		loc=h;
		while(t!=NULL)
		{
			if(t->data<min)
			{
				min=t->data;
				loc=t;
			}
			t=t->next;
		}
		temp=pos->data;
		pos->data=loc->data;
		loc->data=temp;
		h=h->next;
		}
		disp();
	//}
}
void main()
{

	int ch;
	clrscr();
	printf("\n\t1.create\n\t2.display\n\t3.short\n\t4.exit");
	do
	{
		printf("\nEnter your choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				create();
				break;
			case 2:
				disp();
				break;
			case 3:
				selection_sort(head);
				break;
			case 4:
				printf("\n\n\t\tBYE BYE");
				break;
			default:
				printf("\n\tPlease Enter valid choice :");
		}
	}while(ch!=4);
	getch();
}
