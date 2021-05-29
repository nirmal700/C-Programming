#include <stdio.h>
int main()
{
    int arr[50], size, index, temp, i, times;
    printf("Enter the array size: ");
    scanf("%d", &size);
    printf("Enter the element: ");
    for (index = 0; index < size; index++)
    {
        scanf("%d", &arr[index]);
    }
    printf("Enter the number of times to be rotated: ");
    scanf("%d", &times);
    for (i = 0; i < times; i++)
    {
        temp = arr[size - 1];
        for (index = 0; index < size - 1; index++)
        {
            arr[size - 1 - index] = arr[size - 2 - index];
        }
        arr[size - index - 1] = temp;
        printf("\nThe resultant of array rotated %d time's is :\n", (i + 1));
        for (index = 0; index < size; index++)
        {
            printf("%d ", arr[index]);
        }
    }
}
