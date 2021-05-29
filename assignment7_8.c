//Write a program that will read n integers dynamically and sort them in ascending order.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n, s, k;
    printf("Enter the size of the array you want to create\n");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n", i);
        scanf("%d", ptr + i);
    }
    for (int i = 0; i < n; i++) // used the bubble sort technique so started with zero
    {
        for (int j = 0; j < n - i - 1; j++) // used the bubble sort technique
        {
            if (*(ptr + j) > *(ptr + j + 1))
            {
                k = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = k;
            }
        }
    }
    printf("The array after sorting is:\t");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", *(ptr + i));
    }
    free(ptr);
    return 0;
}