/* Program to print the sum  and average of numbers from 1 to n where the n will be inputted by the user*/
/*Name:- Nirmal Kumar Roll No:- C2_07*/
#include <stdio.h>
int main()
{
    int a,sum,avg,n;
    sum=0;
    printf("Enter the value of  n");
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
        sum=sum+a;
    }
    avg=sum/n;
    printf("\nThe sum of the numbers upto N is:\t%d",sum);
    printf("\nThe average of the N numbers are:\t%d",avg);
}
