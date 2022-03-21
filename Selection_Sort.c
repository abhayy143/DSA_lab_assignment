//C program for Selection Sort
#include <stdio.h>
#include <stdlib.h>

void asc_ordr(int arr[20], int n);
void desc_ordr(int arr[20], int n);
void swap(int *x, int *y);
void display(int arr[20], int n);
int check;

int main()
{
    printf("\"Selecton Sort\"\n");
    int arr[20], size, oprtn;
    printf("Enter the size of array:- ");
    scanf("%d",&size);

    printf("Input the %d elements:\n", size);
    for(int i=0; i<size; i++)
    {
	scanf("%d",&arr[i]);
    }
    printf("\n");

    while(1)
    {
	printf("Enter the operation you want to perform:\n");
     	printf("(1) for sort in ascending order\n(2) for sort in descending order\n(3) Exit\n");
	printf("I choose:- ");
	scanf("%d",&oprtn);
	switch(oprtn)
	{
	    case 1:
		asc_ordr(arr,size);
		display(arr, size);
		break;
	    case 2:
		desc_ordr(arr,size);
		display(arr, size);
		break;
	    case 3:
		exit(0);
	    default:
		printf("Invalid input! Try again\n\n");
	}
    }
}

void asc_ordr(int arr[20], int n)
{
    int min;
    check = 1;
    for(int i=0; i<n-1; i++)
    {
	min = i;
	for(int j=i+1; j<n; j++)
	{
	    if(arr[j]<arr[min])
	    {
		min = j;
	    }
	}
	if(min!=i)
	{
	    swap(&arr[min],&arr[i]);
	}
    }
}

void desc_ordr(int arr[20], int n)
{
    int min;
    check = 2;
    for(int i=0; i<n-1; i++)
    {
	min = i;
	for(int j=i+1; j<n; j++)
	{
	    if(arr[j]>arr[min])
	    {
		min = j;
	    }
	}
	if(min!=i)
	{
	    swap(&arr[min],&arr[i]);
	}
    }
}

void swap(int *x, int *y)
{
    int temp = *y;
    *y = *x;
    *x = temp;
}

void display(int arr[20], int n)
{
    if(check == 1)
    {
	printf("After sorting in ascending order using Selection Sort\n");
    }
    else
    {
	printf("After sorting in descending order using Selection Sort\n");
    }
    printf("{");
    for(int i=0; i<n; i++)
    {
	printf("%d,",arr[i]);
    }
    printf("\b}\n\n");
}




