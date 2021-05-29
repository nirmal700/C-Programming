#include <stdio.h>
int main()
{
    int arr[50], size, index, i, temp, times;
    printf("Enter the size of the array: ");
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
        temp = arr[0];
        for (index = 0; index < size - 1; index++)
        {
            arr[index] = arr[index + 1];
        }
        arr[index] = temp;
        printf("\nThe rotated array for %d times\n", (i + 1));
        for (index = 0; index < size; index++)
        {
            printf("%d ", arr[index]);
        }
    }
}
