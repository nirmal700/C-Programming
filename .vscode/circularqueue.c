#include <stdlib.h>
#include <stdio.h>
int queue[50], front = -1, rear = -1, size;
void insert();
void delete ();
void display();
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
        printf("\n Enter 4 to exit\n");
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
    if (rear == size - 1 && front == 0 || front == rear + 1)
    {
        printf("Queue Overflow");
    }
    else
    {
        printf("Enter the item :\t");
        scanf("%d", &item);
        if (front == -1)
        {
            rear = 0;
            front = 0;
        }
        else if (rear == size - 1)
        {
            rear = 0;
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
    if (front == -1)
    {
        printf("Stack underflow");
    }
    else
    {
        item = queue[front];
        printf("The deleted value is : %d", item);
        if (front == rear)
        {
            rear = -1;
            front = -1;
        }
        else
        {
            if (front == size - 1)
            {
                front = 0;
            }
            else
                front++;
        }
    }
}
void display()
{
    int index;
    if (front == -1)
    {
        printf("Stack underflow");
    }
    else
    {
        if (front <= rear)
        {
            for (index = front; index <= rear; index++)
            {
                printf("%d\n", queue[index]);
            }
        }
        else
        {
            for (index = front; index < size; index++)
            {
                printf("%d\n", queue[index]);
            }

            for (index = 0; index <=rear; index++)
            {
                printf("%d\n", queue[index]);
            }
        }
    }
}
