//Write a menu driven program to implement output restricted D-queue with all operation.
#include<stdio.h>
#include<conio.h>
#define n 5
int q[n];
int f=-1,r=-1;
void dq_insert_right(int data)
{
	if(r==(n-1))
	{
		printf("\nD-queue is full from right");
		return;
	}
	r++;
	q[r]=data;
	if(f==-1)
		f=0;
}
void dq_insert_left(int data)
{
	if(f==0)
	{
		printf("\nD-queue is full from left");
		return;
	}
	if(f==-1)
	{
		f=n-1;
		r=n-1;
	}
	else
		f--;
	q[f]=data;

}
int dq_delete_left()
{
	int data;
	if(f==-1)
	{
		printf("Queue is empty");
		return 0;
	}
	data=q[f];
	q[f]=0;
	if(f==r)
		f=r=-1;
	else if(f==(n-1))
		f=0;
	else
		f++;
	return data;
}
int dq_delete_right()
{
	int data;
	if(r==-1)
	{
		printf("Queue is empty");
		return 0;
	}
	data=q[r];
	q[r]=0;
	r=r-1;
	if(f>r)
	{
		r=f=-1;
	}
	return data;
}
void display()
{
	int i;
	for(i=f;i<=n-1;i++)
	{
		if(q[i]!=0)
		{
			printf("\t%d |",q[i]);
		}
	}
}
void main()
{
	int ch,e,ich;
	a:
	clrscr();
	printf("\n1.insert from right");
	printf("\n2.insert from left");
	printf("\n3.exit");
	printf("\nenter your choice:");
	scanf("%d",&ich);

	if(ich==3)
		goto b;
	do
	{
	switch(ich)
	{
		case 1:
			printf("\n1.insert from right");
			printf("\n2.delete from right");
			printf("\n3.display");
			printf("\n4.exit");
			printf("\nenter your choice:");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
					printf("Enter element");
					scanf("%d",&e);
					dq_insert_right(e);
					break;
				case 2:
					e=dq_delete_right();
					printf("Deleted element is %d",e);
					break;
				case 3:
					display();
					break;
				case 4:
					ch=5;
					break;
			}
			break;
		case 2:
			printf("\n1.insert from left");
			printf("\n2.delete from right");
			printf("\n3.display");
			printf("\n4.exit");
			printf("\nenter your choice:");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
					printf("enter element");
					scanf("%d",&e);
					dq_insert_left(e);
					break;
				case 2:
					e=dq_delete_right();
					printf("deleted element is %d",e);
					break;
				case 3:
					display();
					break;
				case 4:
					ch=5;
					break;
			}
			break;
		case 3:
			break;
		}
		if((f==-1)&&(r==-1))
		{
			printf("\nQueue is empty");
			goto a;
		}
	}while(ch!=5);
	b:
	getch();
}
