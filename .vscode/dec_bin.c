#include  <stdio.h>
#include <stdlib.h>
int stack[50],size,top=-1;
void push(int item);
int pop();
int main()
{
    int no,rem;
    printf("Enter the number\n");
    scanf("%d",&no);
    while (no!=0)
    {
        rem=no%2;
        push(rem);
        no=no/2;
    }
    printf("The binary no is\n");
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
    return (stack[top]);
}
