#include <stdio.h>
int main()
{
    int arr[50], size, index;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the value: ");
    for (index = 0; index < size; index++)
    {
        scanf("%d", &arr[index]);
    }
    printf("\nThe values are\n");
    for (index = 0; index < size; index++)
    {
        printf("%d \t ", arr[index]);
    }
}
