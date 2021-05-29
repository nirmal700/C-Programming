#include <stdio.h>
int binarysearch(int[], int, int);
int main()
{
    int arr[50], size, index, item, pos;
    printf("Enter the size of the array\n");
    scanf("%d", &size);
    for (index = 0; index < size; index++)
    {
        printf("Enter the value :\n");
        scanf("%d", &arr[index]);
    }
    printf("Element's of the array are :\n ");
    for (index = 0; index < size; index++)
    {
        printf("%d\t", arr[index]);
    }
    printf("\nEnter the value to search\n");
    scanf("%d", &item);
    pos = binarysearch(arr, size, item);
    if (pos == -1)
    {
        printf("The Value is not present\n");
    }
    else
    {
        printf("The Value %d is present at %d index\n", item, pos);
    }
}
int binarysearch(int arr[], int size, int item)
{
    int lower, higher, middle;
    lower = 0;
    higher = size - 1;
    while (lower <= higher)
    {
        middle = (lower + higher) / 2;
        if (arr[middle] == item)
        {
            return middle;
        }
        else if (arr[middle] < item)
        {
            lower = middle + 1;
        }
        else if (arr[middle] > item)
        {
            higher = middle - 1;
        }
    }
    return -1;
}