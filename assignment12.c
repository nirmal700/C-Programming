/* Program to calculate the simple intrest input by the user*/
/*Name:- Nirmal Kumar Roll No:- C2_07*/
#include<stdio.h>
int main()
{
    float p,t,r,si;
    si=0;
    printf("Enter the principal amount :");
    scanf("%f",&p);
    printf("Enter the time period :");
    scanf("%f",&t);
    printf("Enter the rate of intrest :");
    scanf("%f",&r);
    si=(p*t*r)/100;
    printf("The Simple Intrest is : %f",si);
    return 0;
}
