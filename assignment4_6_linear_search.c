/* Program to enter the number in an array and check using linear search algorithm*/
/*Name:- Nirmal Kumar Roll No:- C2_07*/
#include <stdio.h>
int main()
{
    int arr[50],n,key,ei,a;
    printf("Enter how many elements you want to input");
    scanf("%d",&n);
    printf("Enter the elements \t:");
    for(a=0;a<n;a++)
    {
        scanf("%d",&arr[a]);
    }
    printf("Enter the element you want to find\t:");
    scanf("%d",&key);
    for(a=0;a<n;a++)
    {
        if(arr[a]==key)
        {
        ei=a;
        break;
        }
    }
    if(a==n)
    printf("no element exist");
    else
    printf("The element is found with %d index and is present in %d",ei,ei+1);
    return 0;
}