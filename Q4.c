//write a menu driven program to implment simple queue with all opertion.
#include<stdio.h>
#include<conio.h>
#define n 5
int q[n];
int f=-1,r=-1;
void q_insert(int data)
{
	if(r==(n-1))
	{
		printf("\n\tQueue is full");
		return;
	}
	r++;
	q[r]=data;
	if(f==-1)
		f=0;
}
int q_delete()
{
	int data;
	if(f==-1)
	{
		printf("\n\tQueue is empty");
		return 0;
	}
	data=q[f];
	q[f]=0;
	if(f==r)
		f=r=-1;
	else
		f++;
	return data;
}
void display()
{
	int i;
	if(f==-1)
	{
		printf("\tQueue is empty");
		return;
	}
	for(i=f;i<=r;i++)
		printf("\t%d",q[i]);
}
void main()
{
	int ch,e;
	clrscr();
	printf("\n1.input");
	printf("\n2.delete");
	printf("\n3.display");
	printf("\n4.exit");
	do
	{
		printf("\n\tEnter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter data");
				scanf("%d",&e);
				q_insert(e);
				break;
			case 2:
				e=q_delete();
				if(e!=0)
					printf("Delete element is %d",e);
				break;
			case 3:
				display();
				break;
			case 4:
				printf("THANK YOU");
				break;
			default:
				printf("WRONG DATA");
				break;
			}
		}while(ch!=4);
	getch();
}
