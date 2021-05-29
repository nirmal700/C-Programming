#include <stdio.h>
int main()
{
    int arr[50],index,size,rev[50],a=0;
    printf("Enter the size");
    scanf("%d",&size);
    printf("Enter the elements");
    for(index=0;index<size;index++)
    {
        scanf("%d",&arr[index]);
    }
    for(index=size-1;index>=0;index--)
    {
        rev[a]=arr[index];
        a++;
    }
    for(index=0;index<size;index++)
    {
        printf("%d\t",rev[index]);
    }

}