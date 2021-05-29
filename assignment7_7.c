//Write a program that will read n integers dynamically, add them and display the sum.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n, s;
    printf("Enter the size of the array you want to create\n");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n", i);
        scanf("%d", ptr + i);
    }
    for (int i = 0; i < n; i++)
    {
        s = s + *(ptr + i);
    }
    printf("The sum of the array is %d", s);
    free(ptr);
    return 0;
}