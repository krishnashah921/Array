#include<stdio.h>
#include<stdlib.h>
void create(int *a,int i);
void display(int *a,int i);
int maximum(int *a,int n);
void radixsort(int *a,int n);
void countsort(int *a,int n,int pos);
int main()
{
	int ch,k;
	int size;
	printf("enter the size of the array\n");
	scanf("%d",&size);
	int *ptr=(int *)malloc(size*(sizeof(int)));
	while (1)
	{
		printf("1.exit\n");
		printf("2.create\n");
		printf("3.display\n");
		printf("4.radix sort\n");
		scanf("%d",&ch);
		switch (ch)
		{
			case 1:
				exit(1);
				break;
			case 2:
				create(ptr,size);
				break;
			case 3:
				display(ptr,size);
				printf("\n");
				break;
			case 4:
				//maximum(ptr,size);
				radixsort(ptr,size);
			default:
				break;
		}
	}
	return 0;
}
void create(int *a,int i)
{
	int n;
	printf("enter the element\n");
	for (n=0;n<i;n++)
	{
		scanf("%d",&a[n]);
	}
}
void display(int *a,int i)
{
	int n;
	for (n=0;n<i;n++)
	{
		printf("%d\t",a[n]);
	}
}
int maximum(int *a,int n)
{
	int max=a[0];
	int i;
	for (i=1;i<n;i++)
	{
		if (max<a[i])
		{
			max=a[i];
		}
	}
	return max;
}
void radixsort(int *a,int n)
{
	int max=maximum(a,n);
	int pos;
	for (pos=1;max/pos >0;pos=pos*10)
	{
		countsort(a,n,pos);
	}
}

void countsort(int *a, int n, int pos) 
{ 
    int output[n]; // output array 
    int i, count[10] = { 0 }; 
  
    // Store count of occurrences in count[] 
    for (i = 0; i < n; i++) 
        count[(a[i] / pos) % 10]++; 
  
    // Change count[i] so that count[i] now contains actual 
    //  position of this digit in output[] 
    for (i = 1; i < 10; i++) 
        count[i] += count[i - 1]; 
  
    // Build the output array 
    for (i = n - 1; i >= 0; i--) { 
        output[count[(a[i] / pos) % 10] - 1] = a[i]; 
        count[(a[i] / pos) % 10]--; 
    } 
  
    // Copy the output array to arr[], so that arr[] now 
    // contains sorted numbers according to current digit 
    for (i = 0; i < n; i++) 
        a[i] = output[i]; 
} 

