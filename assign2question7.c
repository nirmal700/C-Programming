/* Program to find the electricity bill of a consumer*/
/*Name:- Nirmal Kumar Roll No:- C2_07*/
#include <stdio.h>
int main()
{
    int cn,ac,un ;
    float as,tc,c;
    ac=100;
    printf("Enter your consumer number ");
    scanf(" %d",&cn);
    printf("\nEnter the nuber of units");
    scanf(" %d",&un);
    if(un<=200)
    c=1*un;
    else if(un<300)
    c=(200+(un-200)*2);
    else
    c=200+200+(un-300)*3;
    if(c>=600)
    {
        as=c*0.15;
    }
    tc=c+as+ac;
    printf("\nYour consumer no is :\t%d",cn);
    printf("\n Your total bill amount is:\t%f",tc);
    return 0;

}
