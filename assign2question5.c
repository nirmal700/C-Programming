/* Program to calculat the incentive poilcy */
/*Name:- Nirmal Kumar Roll No:- C2_07*/
#include <stdio.h>
int main()
{
    float ab,in,fin,fb;
    char gen;
    printf("Enter Your Account balance");
    scanf(" %f",&ab);
    printf("\nEnter your gender i.e m for male and f for female");
    scanf(" %c",&gen);
    in=ab*0.05;
    fb=ab+in;
    if(gen=='f')
    if(ab>=10000.0)
    {
        fin=ab*0.1;
        fb=ab+fin+in;
    }
    printf("\nYour account balance including incentive is:\t%f",fb);
    return 0;
}
