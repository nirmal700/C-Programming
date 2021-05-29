#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void insert();
void delete ();
void display();
char queue[50][50];
int size, front = -1, rear = -1;

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
    char item[50];
    if (rear == size - 1)
    {
        printf("Queue overflow\n");
    }
    else
    {
        printf("Enter item: ");
        scanf(" %[^\n]", item);
        if (rear == -1)
        {
            rear++;
            front++;
        }
        else
        {
            rear++;
        }
        strcpy(queue[rear],item);
    }
}
void delete ()
{
    char item[50];
    if (front == -1)
    {
        printf("Queue underflow");
    }
    else
    {
        strcpy(queue[rear],item);
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front++;
        }
        printf("Deleted item is %s", item);
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
            printf("%s\n", queue[index]);
            index++;
        }
    }
}