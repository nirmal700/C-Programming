#include <stdio.h>
#include <stdlib.h>
main()
{
    int size, index, tem,las;
    int *ptr;
    printf("Enter how many elements you want to input");
    scanf("%d", &size);
    ptr = (int *)calloc(size, sizeof(int));
    printf("Enter the elements \t:");
    for (index = 0; index < size; index++)
    {
        scanf("%d", ptr + index);
    }
    las=size-1;
    for (index = 0; index < size/2; index++)
    {
        tem=ptr[index];
        ptr[index]=ptr[las];
        ptr[las]=tem;
        las--;
    }
    printf("The element's in reverse order are \n");
    for (index = 0; index < size; index++)
    {
        printf("%d\n", *(ptr + index));
    }
}