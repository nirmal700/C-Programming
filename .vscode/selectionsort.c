#include <stdio.h>
#include <stdlib.h>
main()
{
    int *ptr;
    int n, k, i, j, small;
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
        small = i;
        for (j = i + 1; j < n; j++)
        {
            if (ptr[j] < ptr[small])
            {
                small = j;
            }
        }
        if (i != small)
        {
            k = *(ptr + i);
            *(ptr + i) = *(ptr + small);
            *(ptr + small) = k;
        }
    }
    printf("The array after sorting is:\t");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", *(ptr + i));
    }
    free(ptr);
}