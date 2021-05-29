//Write a program that will read n integers dynamically, add them and display the sum.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n, s,m=0,min;
    printf("Enter the size of the array you want to create\n");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n", i);
        scanf("%d", ptr + i);
    }
    min=*ptr;
    for (int i = 0; i < n; i++)
    {
        if(m<*(ptr + i))
        m=*(ptr+i);
        if(min>*(ptr + i))
        min=*(ptr+i);
    }
    printf("The Minimum %d", min);
    printf("The Maximum is %d", m);
    free(ptr);
    return 0;
}