/* Program to check wether the inputted number is a palindrome number or not */
/*Name:- Nirmal Kumar Roll No:- C2_07*/
#include <stdio.h>
int main()
{
    int n,a,r,s;
    printf("Enter the number");
    scanf("%d",&n);
    a=n;
    while (n>0)
    {
        r=n%10;
        s=s+(r*r*r);
        n=n/10;
    }
    if(a==s)
    printf("%d is a Armstrong  no. ",a);
    else
    {
        printf("%d is not a Armstrong no. ",a);
    }

    return 0;

}
