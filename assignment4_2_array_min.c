/* Program to enter the number in array and check minimum*/
/*Name:- Nirmal Kumar Roll No:- C2_07*/
#include <stdio.h>
int main()
{
    int n,i,arr[50],min;
    printf("Enter the how many number's you want to check minimum");
    scanf("%d", &n);
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
    { 
        scanf("%d", &arr[i]);
    }
    min=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]<min)
        min=arr[i];
    }
    printf("The minimum is %d",min);
}