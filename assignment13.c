/* Program to swap the values of input by the user*/
/*Name:- Nirmal Kumar Roll No:- C2_07*/
#include <stdio.h>
int main()
{
    int a,b,c;
    a=b=c=0;
    printf("Enter a value");
    scanf("%i",&a);
    printf("Enter a value");
    scanf("%i",&b);
    printf("the values of A and b are %i %i",a,b);
    c=a;
    a=b;
    b=c;
    printf("\nThe values after swapping are %i %i",a,b);
    return 0;
}
