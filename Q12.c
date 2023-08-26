//write a program to implement quick sort.
#include<conio.h>
#include<stdio.h>
#include<alloc.h>
void quick_sort(int a[],int low,int up)
{
	int v,temp,l,r;
	a1:
		l=low;
		r=up-1;
		v=up;
		if(low>=up)
		{
			return;
		}
		while(a[v]<=a[r])
		{
			r=r-1;
		}
		while(a[v]>=a[l])
		{
			l=l+1;
		}
		if(l<r)
		{
			temp=a[l];
			a[l]=a[r];
			a[r]=temp;
			goto a1;
		}
		else if(l>r)
		{
			temp=a[l];
			a[l]=a[v];
			a[v]=temp;
		}
		printf("\n");
		quick_sort(a,low,l-1);
		quick_sort(a,l+1,up);
}
void display(int a[],int low,int up)
{
	int i;
	for(i=low;i<=up;i++)
	{
		printf("\t%d",a[i]);
	}
}
void main()
{
	int *a,n,i;
	clrscr();
	printf("\nHow many no do you want? :");
	scanf("%d",&n);
	a=(int *)malloc(n* sizeof(int));
	for(i=0;i<=n-1;i++)
	{
		printf("\nEnter number %d :",i+1);
		scanf("%d",&a[i]);
	}
	printf("\nUnsorted list :");
	display(a,0,n-1);
	quick_sort(a,0,n-1);
	printf("\n\n\nSorted list :");
	display(a,0,n-1);
	getch();
}
