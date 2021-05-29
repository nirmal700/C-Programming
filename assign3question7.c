/* Program to read two integers and compute the GCD*/
/*Name:- Nirmal Kumar Roll No:- C2_07*/
#include <stdio.h>
int main()
{
    int a,b,r1,r2,r,gcd;
    printf("Input two number's to compute gcd");
    scanf("%d %d",&a,&b);
    r1=a,r2=b;
    while (r2>0)
    {
        r=r1%r2;
        r1=r2;
        r2=r;
    }
    printf("The gcd of %d and %d is :\t%d",a,b,r1);
}
