#include <stdio.h>
main()
{
    int arr[100], index, size, element, p;
    printf("Enter how many elements you want to input\t:");
    scanf("%d", &size);
    printf("Enter %d elements\t:", size);
    for (index = 0; index < size; index++)
    {
        scanf("%d", &arr[index]);
    }
    printf("Enter the number you want to delete\t:");
    scanf("%d", &element);
    for (index = 0; index < size; index++)
    {
        if (element == arr[index])
            p = index;
    }
    for (index = p; index <= size; index++)
    {
        arr[index] = arr[index + 1];
    }
    printf("The new array is \t:");
    for (index = 0; index < size - 1; index++)
    {
        printf("%d\t", arr[index]);
    }
}