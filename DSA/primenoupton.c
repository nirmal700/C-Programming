#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int primenum(int p);
void display(int flag,int *ptr);
int main()
{
    int index,size,flag=0;
    int *prime;
    printf("Enter to check for prime");
    scanf("%d",&size);
    prime = (int *)calloc(size, sizeof(int));
    for(index=2;index<=size;index++)
    {
        if(primenum(index)==1)
        {
            prime[flag]=index;
            flag++;
        }
    }
    display(flag,prime);
}
int primenum(int p)
{
    int a,c;
    c=0;
    for(a=2;a<=sqrt(p);a++)
    {
        if(p%a==0)
        {
            c=1;
            break;
        }
    }
    if(c==0)
        return 1;
    else
        return 0;
}
void display(int flag,int *ptr)
{
    int index;
    for(index=0;index<flag;index++)
    {
        printf("%d\n",*(ptr+index));
    }
}