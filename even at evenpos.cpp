#include<stdio.h>
int main()
{
	int arr[6],i,j;
	printf("enter the element\n");
	for (i=0;i<6;i++)
	{
		scanf("%d",&arr[i]);
	}
	int temp=0,c=0,n=6;
	bool k=true;
	for (i=0;i<6;i++)
	{
		int even=0,odd=1;
		if (even<n && arr[even]%2==0)
		{
			even=even+2;
		}
		if (odd <n && arr[odd]%2==1)
		{
			odd=odd+2;
		}
		if (even <n && odd <n)
		{
			temp=arr[even];
			arr[even]=arr[odd];
			arr[odd]=temp;
		}
	}
	for (i=0;i<6;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}
