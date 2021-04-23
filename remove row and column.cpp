#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[4][4],i,j;
	printf("enter the element\n");
	for (i=0;i<4;i++)
	{
		for (j=0;j<4;j++)
		{
			scanf("%d",&arr[i][j]);
		}
    }
	printf("\ndisplaying the inpt mat\n");
	for (i=0;i<4;i++)
	{
		for (j=0;j<4;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	printf("\noutput\n");
	int x;
	printf("enter the value to remove row and column\n");
	scanf("%d",&x);
	int temp;
	printf("\ndisplaying the output mat\n");
	for (i=x;i<4;i++)
	{
		for (j=x;j<4;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
