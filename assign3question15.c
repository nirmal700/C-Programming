/* Program to print the factorial of a number*/
/*Name:- Nirmal Kumar Roll No:- C2_07*/
#include <stdio.h>
int main()
{
    int a,n,f;
    float s;
    f=1,s=0;
    printf("Enter the number to find the factorial");
    scanf("%d",&n);
     for(a=1;a<=n;a++)
        {
            f=f*a;
            s=s+(float)1/f;
            printf("\nThe sum of is:\t%d",f);
            printf("The sum s is:\t%f",s);
        }
    printf("The sum  is:\t%f",s);
}

