//write a program to implement dynamic queue
#include<stdio.h>
 #include<conio.h>
 #include<alloc.h>

 struct node
 {
	int data;
	struct node *next;
 }*front=NULL,*rear=NULL,*newnode;
 void q_insert()
 {
	int e;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter Element:");
	scanf("%d",&e);
	newnode->data=e;
	newnode->next=NULL;
	if(front==NULL)
		front=newnode;
	else
		rear->next=newnode;
	rear=newnode;
 }
 void q_delete()
 {
	struct node *tmp;
	if(front==NULL)
		printf("\nQueue is empty");
	else
	{
		tmp=front;
		printf("\nDeleted item is %d",tmp->data);
		front=front->next;
		free(tmp);
	}
 }
 void display()
 {
	struct node *tmp;
	tmp=front;
	if(front==NULL)
		printf("\nQueue is empty");
	else
	{
		while(tmp!=NULL)
		{
			printf("\t%d|",tmp->data);
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
		printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				q_insert();
				break;
			case 2:
				q_delete();
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
