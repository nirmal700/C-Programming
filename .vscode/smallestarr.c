#include <stdio.h>
#include <stdlib.h>
main()
{
    int size,min,index;
    int *ptr;
    printf("Enter how many elements you want to input");
    scanf("%d",&size);
    ptr=(int*)calloc(size,sizeof(int));
    printf("Enter the elements \t:");
    for(index=0;index<size;index++)
    {
        scanf("%d",ptr+index);
    }
    min=ptr[0];
    for(index=0;index<size;index++)
    {
        if(ptr[index]<min)
        {
        min=ptr[index];
        }
    }
    printf("The minimum element in the array is %d ",min);
}