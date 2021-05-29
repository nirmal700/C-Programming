/* Program to print the reverse of a number*/
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
        s=s*10+r;
        n=n/10;
    }
    printf("The reverse of the number %d is :\t%d",a,s);
    return 0;

}
