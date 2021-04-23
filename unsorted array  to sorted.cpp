#include<stdio.h>
#include<stdlib.h>
void *create(int arr[],int size);
void *display(int arr[],int size);
void *realloc(int arr[],int size);
int main()
{
	int size;
	printf("enter the size of the array\n");
	scanf("%d",&size);
	int *ptr=(int *)malloc(size*(sizeof(int)));
	create(ptr,size);
	display(ptr,size);
	int *arrr=(int *)realloc(ptr,2*size*(sizeof(int )));
	//realloc(arr,size);
	//display(arr,size);
	return 0;
}
void *create(int arr[],int size)
{
	printf("enter the element\n");
	int i;
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
}
void *display(int arr[],int size)
{
	int i;
	for (i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
}
void *realloc(int arr[],int size)
{
	for (int i=size+1;i>0;i--)
	{
		arr[i]=arr[i-1];
	}
	int data;
	printf("enter the data to be inserted\n");
	scanf("%d",&data);
	arr[0]=data;
	
}
