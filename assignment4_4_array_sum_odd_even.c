/* Program to enter the number in array and check sum of maximum of the odd or even */
/*Name:- Nirmal Kumar Roll No:- C2_07*/
#include <stdio.h>
int main()
{
    int n,arr[50],sumo,sume,i;
    printf("Enter the how many number's you want to check");
    scanf("%d", &n);
    sumo=sume=0;
    printf("Enter %d number's\t:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        sume=sume+arr[i];
        else
        sumo=sumo+arr[i];
    }
    if(sume>sumo)
    printf("\nThe sum of even no is %d",sume);
    else
    printf("\nThe sum of odd no is is %d",sumo);
}