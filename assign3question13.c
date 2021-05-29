/* Program to print the wether the number is prime numbe or not*/
/*Name:- Nirmal Kumar Roll No:- C2_07*/
#include <stdio.h>
#include <math.h>
int main()
{
    int a,n,c;
    c=0;
    printf("\n enter the number");
    scanf("%d",&n);
    for(a=2;a<=sqrt(n);a++)
    {
        if(n%a==0)
        {
            c=1;
            break;
        }
    }
    if(c==0)
        printf("\n%d is a prime number",n);
    else
        printf("\n%d is a composite number",n);
}
