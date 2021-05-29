/* Program to calculate the gross salary of an employee*/
/*Name:- Nirmal Kumar Roll No:- C2_07*/
#include<stdio.h>
int main()
{
    float bs,da,hra,gs;
    printf("Enter the basic salary of an employee :");
    scanf("%f",&bs);
    da=bs*0.6;
    hra=bs*0.15;
    gs=bs+da+hra;
    printf("The gross salary of an employee : %f",gs);
}