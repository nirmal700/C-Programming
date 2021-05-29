#include<stdio.h>

int stack[30],top=-1;
void push(int);
int pop();

main()
{
    int num,rem;
    printf("enter number : ");
    scanf("%d",&num);

    while(num!=0)
    {
        rem=num%16;
        push(rem);
        num=num/16;
    }
    while(top!=-1)
    {
        if(pop()==10)
            printf("A");
        else if(pop()==11)
            printf("B");
        else if(pop()==12)
            printf("C");
        else if(pop()==13)
            printf("D");
        else if(pop()==14)
            printf("E");
        else if(pop()==15)
            printf("F");
        else
            printf("%d",pop());
        top--;
    }
}

void push(int item)
{
    top++;
    stack[top]=item;
}
int pop()
{
    return(stack[top]);
}