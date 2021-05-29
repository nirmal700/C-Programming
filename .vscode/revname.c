#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int stack[50],size,top=-1;
void push(char ch);
int pop();
int main()
{
    char name[50],index=0;
    printf("Enter your name\n");
    scanf("%[^\n]",name);
    while (name[index]!='\0')
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
void push(char ch)
{
    top++;
    stack[top]=ch;
}
int pop()
{
    return (stack[top]);
}