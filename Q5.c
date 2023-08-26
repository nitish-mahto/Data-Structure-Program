//write a menu driven program to implment circular queue with all opertion.
#include<stdio.h>
#include<conio.h>
#define n 5
int q[n];
int f=-1,r=-1;
void cq_insert(int data)
{
	if((r==(n-1)&&f==0)||(r+1)==f)
	{
		printf("\nCircular queue is full");
		return;
	}
	if(r==(n-1))
		r=0;
	else
		r++;
	q[r]=data;
	if(f==-1)
		f=0;
}
int cq_delete()
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
void display()
{
	int i;
	if(r>f)
	{
		for(i=f;i<=r;i++)
			printf("\t%d |",q[i]);
	}
	else
	{
		for(i=f;i<=n-1;i++)
			printf("\t%d |",q[i]);
		for(i=0;i<=r;i++)
			printf("\t%d |",q[i]);
	}

}
void main()
{
	int ch,e;
	clrscr();
	printf("\n1.cq input");
	printf("\n2.cq delete");
	printf("\n3.display");
	printf("\n4.exit");
	do
	{
		printf("\n\tenter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter data");
				scanf("%d",&e);
				cq_insert(e);
				break;
			case 2:
				e=cq_delete();
				if(e!=0)
					printf("Delete element is %d",e);
				break;
			case 3:
				display();
				break;
			case 4:
				break;
			default:
				printf("TRY AGAIN");
				break;
			}
		}while(ch!=4);
	getch();
}
