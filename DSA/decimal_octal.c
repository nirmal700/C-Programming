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
        rem=num%8;
        push(rem);
        num=num/8;
    }
    while(top!=-1)
    {
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