#include <stdio.h>
#include <stdlib.h>
void insert();
void delete ();
void display();
int queue[50], size, front = -1, rear = -1;

main()
{
    int choice;
    printf("Enter the size of the queue:\n");
    scanf("%d", &size);
    while (1)
    {
        printf("\n1.Insert\n");
        printf("\n2.Delete\n");
        printf("\n3.Display\n");
        printf("\n4.Exit\n");
        printf("\nEnter your choice:");
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
            printf("Wrong choice");
            break;
        }
    }
}
void insert()
{
    int item;
    if (rear == size - 1)
    {
        printf("Queue overflow\n");
    }
    else
    {
        printf("Enter item: ");
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
    if (front == -1)
    {
        printf("Queue underflow");
    }
    else
    {
        item = queue[front];
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front++;
        }
        printf("Deleted item is %d", item);
    }
}
void display()
{
    int index;
    if (front == -1 || front == rear + 1)
    {
        printf("Queue Underflow");
    }
    else
    {
        printf("The values of queue :\n");
        index = front;
        while (index <= rear)
        {
            printf("%d\n", queue[index]);
            index++;
        }
    }
}