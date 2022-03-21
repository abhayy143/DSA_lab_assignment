/*Insert after a node whose key information is given*/


#include<stdio.h>
#include<stdlib.h>
void Create();
void Insert_After_Keyvalue();
void Display();

struct Staff
{
    int info;
    struct Staff *link;
}*start=NULL, *temp, *ptr, *LOCP, *LOC;

int x;
int main()
{
    while(1)
    {
        printf("Enter the operation you want to perform:\n");
        printf("1 for create\n2 for insert_after_keyvalue\n3 for display\n4 for exit\n");
        int op;
        printf("Enter your Choice- ");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
               Create();
               break;
            case 2:
                Insert_After_Keyvalue();
                break;
            case 3:
                Display();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Invalid operation! Try again\n");
        }
    }
}

void Create()
{
    printf("Enter the information:- ");
    scanf("%d",&x);
    temp = (struct Staff*)malloc(sizeof(struct Staff*));
    temp->info = x;
    temp->link = NULL;
    if(start==NULL)
    {
        start = temp;
    }
    else
    {
        ptr = start;
        while(ptr->link!=NULL)
        {
            ptr = ptr->link;
        }
        ptr->link = temp;
    }
    printf("\n");
}
void Insert_After_Keyvalue()
{
    int a;
    printf("Enter the key value after which you want to insert:- ");
    scanf("%d",&a);
    ptr = start;
    while(ptr!=NULL && ptr->info!=a)
    {
        ptr = ptr->link;
    }
    if(ptr==NULL)
    {
        printf("The key value is not present\n");
    }
    else
    {
        printf("Enter the information:- ");
        scanf("%d",&x);
        temp = (struct Staff*)malloc(sizeof(struct Staff*));
        temp->info = x;
        temp->link = ptr->link;
        ptr->link = temp;
    }
    printf("\n");
}

void Display()
{
    temp = start;
    while(temp!=NULL)
    {
        printf("[%d->]",temp->info);
        temp = temp->link;
    }
    printf("[NULL]\n\n");
}
