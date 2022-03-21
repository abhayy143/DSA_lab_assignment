//C program for Insertion Sort
#include <stdio.h>
#include <stdlib.h>

void asc_ordr(int arr[20], int n);
void desc_ordr(int arr[20], int n);
void display(int arr[20], int n);
int check;

int main()
{
    printf("\"Insertion Sort\"\n");
    int arr[20], size, oprtn;
    printf("Enter the size of array:- ");
    scanf("%d",&size);
    printf("Input the %d elements:\n",size);
    for(int i=0; i<size; i++)
    {
	scanf("%d",&arr[i]);
    }
    printf("\n");

    while(1)
    {
	printf("Choose what operation you want to operate:\n");
	printf("(1) for sorting in ascending order\n(2) for sorting in descending order\n(3) for exit\n");
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
    int temp,j;
    check = 1;
    for(int i=1; i<n; i++)
    {
	temp = arr[i];
	j = i-1;
	while(j>=0 && arr[j]>temp)
	{
	    arr[j+1] = arr[j];
	    j--;
	}
	arr[j+1] = temp;
    }
}

void desc_ordr(int arr[20], int n)
{
    int temp,j;
    for(int i=1; i<n; i++)
    {
	temp = arr[i];
	j = i-1;
   	 while(j>=0 && arr[j]<temp)
    	{
	    arr[j+1] = arr[j];
	    j--;
    	}
    	    arr[j+1] = temp;
    }
}

void display(int arr[20], int n)
{
    if(check==1)
    {
	printf("After sorting in ascending order using Insertion Sort\n");
    }
    else
    {
	printf("After sorting in descending order using Insertion Sort\n");
    }
    printf("{");
    for(int i=0; i<n; i++)
    {
	printf("%d,",arr[i]);
    }
    printf("\b}\n\n");
}






