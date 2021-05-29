#include <stdio.h>
#include <stdlib.h>
main()
{
    int size, key, ei, index;
    int *ptr;
    printf("Enter how many elements you want to input");
    scanf("%d", &size);
    ptr = (int *)calloc(size, sizeof(int));
    printf("Enter the elements \t:");
    for (index = 0; index < size; index++)
    {
        scanf("%d", ptr + index);
    }
    printf("Enter the element you want to find\t:");
    scanf("%d", &key);
    for (index = 0; index < size; index++)
    {
        if (ptr[index] == key)
        {
            ei = index;
            break;
        }
    }
    if (index == size)
        printf("No element exist");
    else
        printf("The element is found with %d index and is present in %d position", ei, ei + 1);
}