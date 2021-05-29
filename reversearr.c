#include <stdio.h>
main()
{
    int arr[50],index,size,k,n;
    printf("Enter the size of the array");
    scanf("%d",&size);
    n=size-1;
    printf("Enter the elements of the array");
    for(index=0;index<size;index++)
    {
        scanf("%d",&arr[index]);
    }
    for(index=0;index<size/2;index++)
    {
        k=arr[index];
        arr[index]=arr[n];
        arr[n]=k;
        n--;
    }
    for(index=0;index<size;index++)
    {
        printf("%d",arr[index]);
    }
}