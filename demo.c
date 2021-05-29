#include <stdio.h>
int sum(int a, int b);
void div(int , int );
void mul();
int main()
{
    int s;
    s=sum(20,10);
    printf("The output is:\t%d",s);
}
int sum(int a,int b)
{
    int s;
    s=a+b;
    return s;
}
void div(int a, int b)
{
    int d;
    d=a/b;
    printf("The div is :\t%d",d);
}
void mul()
{
    int a=5,b=10;
    printf("The multiplication is :\t %d",a*b);
}