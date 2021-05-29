/* Program to print the no. of digits in a number*/
/*Name:- Nirmal Kumar Roll No:- C2_07*/
#include <stdio.h>
int main()
{
    int n,a,r;
    a=n=r=0;
    int c=0;
    printf("Enter the number");
    scanf("%d",&n);
    a=n;
    while (n>0)
    {
        r=n%10;
        c++;
        n=n/10;
    }
    printf("The number of digits of the number %d is :\t%d",a,c);
    return 0;

}
