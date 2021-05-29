/* Program to enter the number in an array and check using binary search algorithm*/
/*Name:- Nirmal Kumar Roll No:- C2_07*/
#include <stdio.h>
int main()
{
    int arr[50],n,key,mid,a,l,h,c=0;
    printf("Enter how many elements you want to input\t:");
    scanf("%d",&n);
    printf("Enter the elements\t:");
    for(a=0;a<n;a++)
    {
        scanf("%d",&arr[a]);
    }
    printf("Enter the element you want to find\t:");
    scanf("%d",&key);
    l=0,h=n-1;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(arr[mid]==key)
        {
            c=1;
            break;
        }
        else if(arr[mid]<key)
            l=mid+1;
        else if(arr[mid]>key)
            h=mid-1;
    }
    if(c==1)
        printf("The element is found with %d index and is present in %d",mid,mid+1);
    else
        printf("The element is not found");
    return 0;
}