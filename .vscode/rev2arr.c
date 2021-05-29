#include <stdio.h>
#include <stdlib.h>
main()
{
    int size, index, re;
    int *ptr, *rev;
    printf("Enter how many elements you want to input");
    scanf("%d", &size);
    ptr = (int *)calloc(size, sizeof(int));
    rev = (int *)calloc(size, sizeof(int));
    printf("Enter the elements \t:");
    for (index = 0; index < size; index++)
    {
        scanf("%d", ptr + index);
    }
    re = size - 1;
    for (index = 0; index < size; index++)
    {
        rev[re] = ptr[index];
        re--;
    }
    printf("The element's in reverse order are \n");
    for (index = 0; index < size; index++)
    {
        printf("%d\n", *(rev + index));
    }
}