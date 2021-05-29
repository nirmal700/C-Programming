/* Program to find the roots of the equations*/
/*Name:- Nirmal Kumar Roll No:- C2_07*/
#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,r1,r2,d;
    d=r1=r2=0;
    printf("Enter the co-efficient of A");
    scanf("%f",&a);
    printf("Enter the co-efficient of B");
    scanf("%f",&b);
    printf("Enter the co-efficient of C");
    scanf("%f",&c);
    d=(b*b)-(4*a*c);
    if(a==0&&b==0)
    {
        printf("No solution:a&b both zero");
    }
    else if(d==0)
    {
    r1=r2=-b/(2*a);
    printf("The roots of the equation are %10.3f and %10.3f",r1,r2);
    printf("1 is executed");
    }
    else if(d>0)
    {
    r1=(-b+sqrt(d))/(2*a);
    r2=(-b-sqrt(d))/(2*a);
    printf("The roots of the equation are %10.3f and %10.3f",r1,r2);
    printf("2 is executed");
    }
    else if(d<0)
    {
    r1=-b/(2*a)+sqrt(-d)/(2*a);
    r2=-b/(2*a)-sqrt(-d)/(2*a);
    printf("The roots of the equation are %10.3f i and %10.3f i",r1,r2);
    printf("3 is executed");
    }
    return 0;
}
