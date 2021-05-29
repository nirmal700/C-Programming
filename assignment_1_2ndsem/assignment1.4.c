#include<stdio.h>
int main()
{
    int arr[50],size,index,min;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    printf("Enter the value: ");
    for(index=0;index<size;index++)
    {
        scanf("%d",&arr[index]);
    }
    min=arr[0];
    for(index=0;index<size;index++)
    {
        if(min>arr[index])
        min=arr[index];
    }
    printf("\nThe smallest no is %d",min);
}
