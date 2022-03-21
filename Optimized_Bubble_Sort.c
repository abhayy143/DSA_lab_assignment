//C program for Advanced Bubble Sort
#include <stdio.h>
#include <stdlib.h>

void asc_ordr(int arr[20],int n);
void desc_ordr(int arr[20], int n);
void display(int arr[20], int n);
int check,count=0;

int main()
{
    printf("\"Advanced Buuble Sort\"\n");
    int arr[20], size, oprtn;
    printf("Enter the size of array(1-20):- ");
    scanf("%d",&size);

    printf("Input the %d elements\n",size);
    for(int i=0; i<size; i++)
    {
	scanf("%d",&arr[i]);
    }
    printf("\n");

    while(1)
    {
	printf("Enter the operation you want to perform:\n");
	printf("(1) for sorting in Ascending Order\n(2) for Descending Order\n(3) for exit\n");
    	printf("I choose:- ");
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
    int visit,temp;
    check = 1;
    count = 0;
    for(int i=0; i<n-1; i++)
    {
	count++;
	visit = 1;
	for(int j=0; j<n-1-i; j++)
	{
	    if(arr[j]>arr[j+1])
	    {
		temp = arr[j];
		arr[j] = arr[j+1];
		arr[j+1] = temp;
		visit = 0;
	    }
	}
	if(visit==1)
	{
	    break;
	}
    }
    printf("Successfully sorted in Ascending Order with total pass %d\n",count);
}

void desc_ordr(int arr[20], int n)
{
    int visit,temp;
    check = 2;
    count = 0;
    for(int i=0; i<n-1; i++)
    {
	count++;
	visit = 1;
	for(int j=0; j<n-1-i; j++)
	{
	    if(arr[j]<arr[j+1])
	    {
		temp = arr[j];
		arr[j] = arr[j+1];
		arr[j+1] = temp;
		visit = 0;
	    }
	}
	if(visit==1)
	{
	    break;
	}
    }
    printf("Successfully sorted in Descending Order with total pass %d\n",count);
}

void display(int arr[20], int n)
{
    if(check==1)
    {
	printf("After sorting in Ascending Order using Optimized Bubble Sort:\n");
    }
    else if(check==2)
    {
	printf("After sorting in Descending Order using Optimized Bubble Sort:\n");
    }
    printf("{");
    for(int i=0; i<n; i++)
    {
	printf("%d,",arr[i]);
    }
    printf("\b}\n\n");
}
