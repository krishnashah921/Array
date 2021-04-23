#include<stdio.h>
#include<stdlib.h>
int main()
{
	int row,column;
	printf("enter the row and column\n");
	scanf("%d%d",&row,&column);
	int **ptr=(int **)malloc(row*(sizeof(int *)));
	int i,j;
	for (i=0;i<row;i++)
	{
		ptr[i]=(int *)malloc (column*(sizeof(int )));
	}
	for (i=0;i<row;i++)
	{
		for (j=0;j<column;j++)
		{
			scanf("%d",&ptr[i][j]);
		}
	}
	for (i=0;i<row;i++)
	{
		for (j=0;j<column;j++)
		{
			printf("%d\t",ptr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
