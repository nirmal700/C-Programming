/* Program to print the sum of the digits in a number*/
/*Name:- Nirmal Kumar Roll No:- C2_07*/
#include <stdio.h>
int main()
{
    int n,a,r,s;
    a=n=r=s=0;
    printf("Enter the number");
    scanf("%d",&n);
    a=n;
    while (n>0)
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }
    printf("The sum of the number %d is :\t%d",a,s);

}
