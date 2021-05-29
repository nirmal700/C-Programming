#include <stdio.h>
int main()
{
int a=10;
int **p;
int *ptr = &a;
p=&ptr;
printf("%d %u %d %d %x %x", a, ptr,*ptr,**p,p,*p);

}