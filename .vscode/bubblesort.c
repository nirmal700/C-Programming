//Write a program that will read n integers dynamically and sort them in ascending order.
#include <stdio.h>
#include <stdlib.h>
main()
{
    int *ptr;
    int n, k, i, j;
    printf("Enter the size of the array you want to create\n");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    for (i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n", i);
        scanf("%d", ptr + i);
    }
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n - i - 1; j++) 
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
}