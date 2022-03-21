//C program for Traditional Bubble Sort
#include <stdio.h>
#include <stdlib.h>

void asc_ordr(int arr[20], int n);
void desc_ordr(int arr[20], int n);
void display(int arr[20], int n);
int check = 0;

int main()
{
    printf("\n\"Traditional Bubble Sort\"\n");
    int arr[20],size,oprtn;
    printf("Enter the number of elements:- ");
    scanf("%d",&size);

    printf("Input the %d elements:\n",size);
    for(int i=0; i<size; i++)
    {
    	scanf("%d",&arr[i]);
    }
    printf("\n");
    while(1)
    {
	printf("Enter the operation you want to perform:\n");
	printf("(1) for sorting in Ascending Order\n(2) for sorting in Descending\n(3) for Exit\n");
	printf("I want to perform:- ");
	scanf("%d",&oprtn);
	switch(oprtn)
	{
	    case 1:
		asc_ordr(arr, size);
		display(arr, size);
		break;
	    case 2:
		desc_ordr(arr, size);
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
    int temp;
    check = 1;
    for(int i=0; i<n-1; i++)
    {
	for(int j=0; j<n-1-i; j++)
	{
	    if(arr[j]>arr[j+1])
	    {
		temp = arr[j];
		arr[j] = arr[j+1];
		arr[j+1] = temp;
	    }
	}
    }
    printf("Successfully sorted in Ascending Order\n");
}

void desc_ordr(int arr[20], int n)
{
    int temp;
    check = 2;
    for(int i=0; i<n-1; i++)
    {
	for(int j=0; j<n-1-i; j++)
	{
	    if(arr[j]<arr[j+1])
	    {
		temp = arr[j];
		arr[j] = arr[j+1];
		arr[j+1] = temp;
	    }
	}
    }
    printf("Successfully sorted in Descending Order\n");
}

void display(int arr[20], int n)
{
    if(check==1)
    {
	printf("After sorting in ascending order using Traditional Bubble Sort:\n");
    }
    else if(check==2)
    {
	printf("After sorting in descending order using Traditional Bubble Sort:\n");
    }
    printf("{");
    for(int i=0; i<n; i++)
    {
        printf("%d,",arr[i]);
    }
    printf("\b}\n\n");
}
