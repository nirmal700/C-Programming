
#include <stdio.h>
int main()
{
    int arr1[50], arr2[50], size, index, flag = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the value: ");
    for (index = 0; index < size; index++)
    {
        scanf("%d", &arr1[index]);
    }
    for (index = size - 1; index >= 0; index--)
    {
        arr2[flag] = arr1[index];
        flag++;
    }
    for (index = 0; index < size; index++)
    {
        printf("%d ", arr2[index]);
    }
}
