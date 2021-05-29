#include<stdio.h>

int stack[30],top=-1;
void push(char);
char pop();

main()
{
    char name[20];
    int index=0;
    printf("enter name : ");
    scanf("%[^\n]",name);

    while(name[index]!='\0')
    {
        push(name[index]);
        index++;
    }
    while(top!=-1)
    {
        printf("%c",pop());
        top--;
    }
}

void push(char item)
{
    top++;
    stack[top]=item;
}
char pop()
{
    return(stack[top]);
}