/* Program to print the factorial of a number*/
/*Name:- Nirmal Kumar Roll No:- C2_07*/
#include <stdio.h>
int main()
{
    int a,n,f;
    n=0,f=1;
    printf("Enter the number to find the factorial");
    scanf("%d",&n);
     for(a=1;a<=n;a++)
        {
            f=f*a;
        }
    printf("The factorial of a number is:\t%d",f);
}
