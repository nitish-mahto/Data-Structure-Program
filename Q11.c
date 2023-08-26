//write a program to implement insertion sort.
#include<stdio.h>
 #include<conio.h>
 #include<alloc.h>

 void insertion_sort(int a[],int n)
 {
	int i,j,t;
	for(i=1;i<=n-1;i++)
	{
		t=a[i];
		j=i-1;
		while(t<a[j]&&j>=0)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=t;
	}
	printf("\nThe sorted result is:\n");
	for(i=0;i<=n-1;i++)
	{
		printf("\n\t%d",a[i]);
	}
 }

 void main()
 {
	int *a,n,i;
	clrscr();
	printf("\nHow many no.s do you want:");
	scanf("%d",&n);
	a=(int *)malloc(n * sizeof(int));
	for(i=0;i<=n-1;i++)
	{
		printf("\nEnter number %d:",i+1);
		scanf("%d",&a[i]);
	}
	insertion_sort(a,n);
	getch();
 }
