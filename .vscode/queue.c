#include <stdio.h>
#include <stdlib.h>
void insert();
void delete ();
void display();
int queue[50], rear = -1, front = -1, size;
int main()
{
    int choice;
    printf("enter the size of the queue");
    scanf("%d", &size);
    while (1)
    {
        printf("\n Enter 1 to insert");
        printf("\n Enter 2 to delete");
        printf("\n Enter 3 to display");
        printf("\n Enter 4 to exit");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            break;
        }
    }
}
void insert()
{
    int item;
    if (rear == size - 1)
    {
        printf("Queue Overflow");
    }
    else
    {
        printf("Enter the element:");
        scanf("%d", &item);
        if (rear == -1)
        {
            rear++;
            front++;
        }
        else
        {
            rear++;
        }
        queue[rear] = item;
    }
}
void delete ()
{
    int item;
    if (rear == -1 || front == rear + 1)
    {
        printf("Stack underflow");
    }
    else
    {
        item = queue[front];
        front++;
        printf("The deleted value is : %d", item);
    }
}
void display()
{
    int i;
    if (rear == -1 || front == rear + 1)
    {
        printf("Stack underflow");
    }
    else
    {
        for (i = front; i <= rear; i++)
        {
            printf("%d\n", queue[i]);
        }
    }
}