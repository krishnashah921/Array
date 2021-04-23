#include<stdio.h>
#include<stdlib.h>
void create(int **a,int row,int col);
void display(int **a,int row,int col);
int main()
{
	int row,col;
	printf("enter the row and the column\n");
	scanf("%d%d",&row,&col);
	int **ptr=(int **)malloc(row*(sizeof(int *)));
	int i,j;
	for (i=0;i<row;i++)
	{
		ptr[i]=(int *)malloc(col*(sizeof(int)));
	}
	create(ptr,row,col);
	printf("\n");
	display(ptr,row,col);
	return 0;
}
void create(int **a,int row,int col)
{
	printf("enter the element\n");
	for (int i=0;i<row;i++)
	{
		for (int j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}
void display(int **a,int row,int col)
{
	for (int i=0;i<row;i++)
	{
		for (int j=0;j<col;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
