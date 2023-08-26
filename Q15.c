//write a program to implement binary search.
#include<conio.h>
#include<stdio.h>
#include<alloc.h>
void binary_search(int k[],int n,int x)
{
	int beg,mid,end;
	beg=0;
	end=n-1;
	mid=(beg+end)/2;
	while(beg<=end && x!=k[mid])
	{
		if(x>k[mid])
		{
			beg=mid+1;
		}
		else
		{
			end=mid-1;
		}
		mid=(beg+end)/2;
	}
	if(x==k[mid])
	{
		printf("\nSuccessful search \nelement found at %d position",mid+1);
	}
	else
	{
		printf("\nUnsuccessful search");
	}
}
void main()
{
	int n,i,*k,x;
	clrscr();
	printf("\nHow many no do you want? :");
	scanf("%d",&n);
	k=(int*)malloc((n)*sizeof(int));
	printf("\nEnter element in accending order\n");
	for(i=0;i<=n-1;i++)
	{
		printf("\nEnter number %d :",i+1);
		scanf("%d",&k[i]);
	}
	printf("\nEnter element to be searched :");
	scanf("%d",&x);
	binary_search(k,n,x);
	getch();
}
