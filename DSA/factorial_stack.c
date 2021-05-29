#include<stdio.h>

int stack[30],fact=1;
int top=-1;
void push(int);
int pop();

main()
{
    int num;
    printf("enter number : ");
    scanf("%d",&num);

    while(num!=0)
    {
        push(num);
        num--;
    }
    while(top!=-1)
    {
        fact=fact*pop();
        top--;
    }
    printf("the factorial of number is %d",fact);
}

void push(int item)
{
    top++;
    stack[top]=item;
}
int pop()
{
    return stack[top];
}