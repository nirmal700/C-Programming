/* Program to find the largest of two numbers*/
/*Name:- Nirmal Kumar Roll No:- C2_07*/
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a number");
    scanf("%i",&a);
    printf("Enter a number");
    scanf("%i",&b);
    printf("Enter a number");
    scanf("%i",&c);
    if(a>=b)
    {
        if(a>=c)
        printf("%d is largest",a);
        else 
        printf("%d is largest",c);
    }
    else
    {
        if(b>=c)
        {
            printf("%d is largest",b);
        }
        else
        {
            printf("%d is largest",c);
        }
    }
    return 0;
}   


    
