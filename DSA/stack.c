#include<stdio.h>
#include<stdlib.h>

void push();
void pop();
void peep(); 
void display();
int stack[20],top=-1,size;

main()
{
    int choice;
    printf("enter the size of stack : ");
    scanf("%d",&size);

    while(1)
    {
        printf("\n1 PUSH\n2 POP\n3 DISPLAY\n4 PEEP\n5 EXIT\n");
        printf("enter your choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:push();
                break;
            case 2:pop();
                break;
            case 3:display();
                break;
            case 4:peep();
                break;
            case 5:exit(0);
            default: printf("wrong choice\n");
        }
    }
}

void peep()
{
    if(top==-1)
    {
        printf("stack underflow\n");
    }
    else
    {
        printf("%d\n",stack[top]);
    }
}

void push()
{
    int item;
    if(top==size-1)
    {
        printf("stack overflow\n");
    }
    else
    {
        printf("enter the item : ");
        scanf("%d",&item);
        top++;
        stack[top]=item;
    }
}

void pop()
{
    int item;
    if(top==-1)
    {
        printf("stack underflow\n");
    }
    else
    {
        item=stack[top];
        top--;
        printf("popped item = %d\n",item);
    }
}

void display()
{
    int index;
    if(top==-1)
    {
        printf("stack underflow\n");
    }
    else
    {
        printf("the values of stack are :\n");
        for(index=top;index>-1;index--)
        {
            printf("%d\n",stack[index]);
        }
    }
}