//write a program to create two singly link list with following data empno, empname, dept and salary. Display the employee name and department whose salary is highest.
#include<stdio.h>
 #include<conio.h>
 #include<alloc.h>

 struct node
 {
	int empno,salary;
	char ename[30],dept[30];
	struct node *next;
 }*head,*q,*newnode;
 int count=0;

 void create()
 {
	char ch='y';
	int eno,sal;
	char name[30],edept[30];
	head=NULL;
	do
	{
		printf("\nEnter emp no:");
		scanf("%d",&eno);
		printf("\nEnter emp name:");
		scanf("%s",name);
		printf("\nEnter salary:");
		scanf("%d",&sal);
		printf("\nEnter department:");
		scanf("%s",edept);

		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->empno=eno;
		strcpy(newnode->ename,name);
		newnode->salary=sal;
		strcpy(newnode->dept,edept);

		if(head==NULL)
		{
			head=newnode;
			count++;
		}
		else
		{
			q->next=newnode;
			count++;
		}
			q=newnode;
			printf("\nDo you want to continue?\nEnter your choice:");
			flushall();
			scanf("%c",&ch);
	}while(ch=='y');
		newnode->next=NULL;
 }
 void display()
 {
	q=head;
	do
	{
		printf("\n|%d|%s|%d|%s",q->empno,q->ename,q->salary,q->dept);
		q=q->next;
	}while(q!=NULL);
 }
 void max()
 {
	int i,max;
	char a[30];
	q=head;
	max=q->salary;
	for(i=1;i<=count;i++)
	{
		if(q->salary>max)
		{
			max=q->salary;
		}
	q=q->next;
 }
 q=head;
 do
 {
	if(q->salary==max)
	{
		printf("\n\nName is %s",q->ename);
		printf("\nDepartment name is %s",q->dept);
	}
 q=q->next;
 }while(q!=NULL);
 }
 void main()
 {
	clrscr();
	create();
	display();
	max();
	getch();
 }
