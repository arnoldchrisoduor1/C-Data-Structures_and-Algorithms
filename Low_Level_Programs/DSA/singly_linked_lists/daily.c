#include <stdio.h>

int add_beg(int arr[],int n,int data)
{
	int i;
	for(i=n-1; i>=0; i--)
	{
		arr[i+1] = arr[i];
	}

	arr[0] = data;

	return i+1;
}

int main()
{
	int arr[5],data = 8,i,n;

	puts("How much data to input:");
	scanf("%d",&n);

	puts("Input the data:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	n = add_beg(arr,n,data);

	for(i=0; i<n; i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
