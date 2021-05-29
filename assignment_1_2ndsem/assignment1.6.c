#include <stdio.h>
#include <stdlib.h>
main()
{
    int size, index, tem, las;
    int arr[50];
    printf("Enter how many elements you want to input");
    scanf("%d", &size);
    printf("Enter the elements \t:");
    for (index = 0; index < size; index++)
    {
        scanf("%d", &arr[index]);
    }
    las = size - 1;
    for (index = 0; index < size / 2; index++)
    {
        tem = arr[index];
        arr[index] = arr[las];
        arr[las] = tem;
        las--;
    }
    printf("The element's in reverse order are \n");
    for (index = 0; index < size; index++)
    {
        printf("%d\t", arr[index]);
    }
}