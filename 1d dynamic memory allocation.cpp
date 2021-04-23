#include<stdio.h>
#include<stdlib.h>
int main()
{
	int size=5;
	int *ptr=(int *)malloc(size*(sizeof(int)));
	int i;
	for (i=0;i<size;i++)
	{
		scanf("%d",&ptr[i]);
	}
	for (i=0;i<size;i++)
	{
		printf("%d\t",ptr[i]);
	}
	return 0;
}
