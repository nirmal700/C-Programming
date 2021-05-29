/* Program to enter the number in array and add 1*/
/*Name:- Nirmal Kumar Roll No:- C2_07*/
#include <stdio.h>
int main()
{
    int n,arr[50],arr1[50],i;
    printf("Enter how many numbers you want to check");
    scanf("%d",&n);

        printf("Enter the number's\t:");
     
    for(i=0;i<n;i++)
    {
       scanf("%d", &arr[i]);
    }
    printf("The new array is ");
    for(i=0;i<n;i++)
    {
        arr1[i]=1+arr[i];
        printf("\t%d",arr1[i]);
    }
    return 0;
}