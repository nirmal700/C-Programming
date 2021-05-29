#include <stdio.h>
int main()
{
    int x, y, res, *ptr1, *ptr2;
    x = 20, y = 50;
    ptr1 = &x;
    ptr2 = &y;
    printf("\nThe value of ptr1 is %d and the value of ptr2 is %d", ptr1, ptr2);
    //res=ptr1+ptr2;
    //printf("\nThe value of ptr1+ptr2 is :%d",res);
    res = ptr1 - ptr2;
    printf("\nThe value of ptr1-ptr2 is :%d", res);
    //res=ptr1*ptr2;
    //printf("\nThe value of ptr1*ptr2 is :%d",res);
    //res=ptr1/ptr2;
    //printf("\nThe value of ptr1/ptr2 is :%d",res);
    printf("\nThe value of ptr1 is %d and ptr2 is %d", ++ptr1, ++ptr2);
    printf("\nThe value of ptr1 is %d and ptr2 is %d", --ptr1, --ptr2);
    return 0;
}
