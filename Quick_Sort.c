// C program for Quick Sort
#include <stdio.h>
#include <stdlib.h>

void quick_sort(int arr[20], int lb, int ub);
int partision(int arr[20], int lb, int ub);
void swap(int *x, int *y);
void display(int arr[20], int n);

int main()
{
    printf("\"Quick Sort\"\n");
    int arr[20], size, oprtn;
    printf("Enter the size of array:- ");
    scanf("%d",&size);
    printf("Input the %d elements:\n",size);
    for(int i=0; i<size; i++)
    {
	scanf("%d",&arr[i]);
    }
    printf("\n");

    quick_sort(arr, 0, size-1);
    display(arr, size);
}

void quick_sort(int arr[20], int lb, int ub)
{
    if(lb<ub)
    {
    	int pvidx = partision(arr, lb, ub);
    	quick_sort(arr, lb,  pvidx-1);
    	quick_sort(arr, pvidx+1, ub);
    }
}

int partision(int arr[20], int lb, int ub)
{
    int pivot = arr[lb];
    int start = lb;
    int end = ub;
    while(start<end)
    {
	while(arr[start]<=pivot)
	{
	    start++;
	}
	while(arr[end]>pivot)
	{
	    end--;
	}
	if(start<end)
	{
	    swap(&arr[start],&arr[end]);
	}
    }
    swap(&arr[lb],&arr[end]);
    return end;
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void display(int arr[20], int n)
{
    printf("After sorting in ascending order:\n");
    printf("{");
    for(int i=0; i<n; i++)
    {
	printf("%d,",arr[i]);
    }
    printf("\b}\n");
}
