/* Program to enter the number and sort using linear search */
/*Name:- Nirmal Kumar Roll No:- C2_07*/
#include <stdio.h>
int main()
{
    int arr[100],i,n,j,k,p,s;
    printf("Enter how many numbers you want to input\t:");
    scanf("%d",&n);
    printf("Enter the number's to sort\t:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        s=arr[i];
        p=i;
        for(j=i+1;j<n;j++)
        {
            if(s>arr[j])
            {
                s=arr[j];
                p=j;
            }
        }
        k=arr[i];
        arr[i]=arr[p];
        arr[p]=k;
    }
    printf("The new array is\t:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}