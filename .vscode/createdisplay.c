#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node *start = NULL;
void display()
{
    struct node *temp;
    if (start == NULL)
    {
        printf("The list is empty\n");
    }
    else
    {
        temp = start;
        printf("The values are \n");
        while (temp != NULL)
        {
            printf("%d\t", temp->info);
            temp = temp->next;
        }
    }
}
void insertbegin()
{
    struct node *newnode;
    int item;
    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("Memory is not allocated\n");
    }
    else
    {
        printf("Enter the value to insert\n");
        scanf("%d", &item);
        newnode->info = item;
        newnode->next = NULL;
        if (start == NULL)
        {
            start = newnode;
        }
        else
        {
            newnode->next = start;
            start = newnode;
        }
    }
}
void insertend()
{
    struct node *newnode;
    struct node *temp;
    int item;
    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("Memory is not allocated\n");
    }
    else
    {
        printf("Enter the value to insert\n");
        scanf("%d", &item);
        newnode->info = item;
        newnode->next = NULL;
        if (start == NULL)
        {
            start = newnode;
        }
        else
        {
            temp = start;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }
}
void deletebegin()
{
    struct node *temp;
    if (start == NULL)
    {
        printf("The list is empty\n");
    }
    else
    {
        temp = start;
        start = temp->next;
        printf("The delete value is :%d", temp->info);
        free(temp);
    }
}
void deleteend()
{
    struct node *temp;
    struct node *ptr;
    if (start == NULL)
    {
        printf("The list is empty\n");
    }
    else
    {
        temp = start;
        ptr = start;
        while (temp->next != NULL)
        {
            ptr = temp;
            temp = temp->next;
        }
        printf("The delete value is :%d", temp->info);
        ptr->next = NULL;
        free(temp);
    }
}
int main()
{
    int choice;
    while (1)
    {
        printf("1.To Display\n");
        printf("2.To Insert begin\n");
        printf("3.To Insert at end\n");
        printf("4.To Delete from begining\n");
        printf("5.To Delete from end\n");
        printf("6.To exit");
        printf("\nEnter the operation you want to perform  :\t ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            display();
            break;
        case 2:
            insertbegin();
            break;
        case 3:
            insertend();
            break;
        case 4:
            deletebegin();
            break;
        case 5:
            deleteend();
            break;
        case 6:
            exit(0);
            break;
        default:
            printf("Wrong input");
        }
    }
}
