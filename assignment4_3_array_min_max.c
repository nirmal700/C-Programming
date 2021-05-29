/* Program to enter the number in array and check minimum & maximum*/
/*Name:- Nirmal Kumar Roll No:- C2_07*/
#include <stdio.h>
int main()
{
    int n,i,arr[50],min,max;
    printf("Enter the how many number's you want to check minimum / maximum");
    scanf("%d", &n);
    printf("Enter %d number's\t:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    min=arr[0];
    max=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]<min)
        min=arr[i];
        if(arr[i]>max)
        max=arr[i];
    }
    printf("\nThe minimum is %d",min);
    printf("\nThe maximum is %d",max);
}