#include <stdio.h>

int add_beg(int arr[],int n,int data)
{
	int i;
	for(i=n-1;i>=0;i--)
	{
		arr[i+1] = arr[i];
	}

	arr[0] = data;

	return n+1;
}

int main()
{
	int arr[5],n,data = 8,i;

	puts("How many integers do you have:");
	scanf("%d",&n);

	puts("Give the number:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	n = add_beg(arr,n,data);

	for(i=0;i<n;i++)
	{
		printf("\n%d",arr[i]);
	}

	return 0;
}
