/* Program to insert an element in an array at certain position*/
/*Name:- Nirmal Kumar Roll No:- C2_07*/
#include <stdio.h>
main()
{
    int arr[100],index,size,element,p;
    printf("Enter how many elements you want to input\t:");
    scanf("%d",&size);
    printf("Enter the number you want to add\t:");
    scanf("%d",&element);
    printf("Enter in which position you want to add\t:");
    scanf("%d",&p);
    printf("Enter %d elements",size);
    for(index=0;index<size;index++)
    {
        scanf("%d",&arr[index]);
    }
    for(index=size;index>=p;index--)
    {
        arr[index]=arr[index-1];
    }
    arr[p]=element;
    printf("The new array is \t:");
    for(index=0;index<=size;index++)
    {
        printf("%d\t", arr[index]);
    }
}