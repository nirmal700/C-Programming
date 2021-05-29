/* Program to check wether the entered number is odd or even*/
/*Name:- Nirmal Kumar Roll No:- C2_07*/
#include <stdio.h>
int main()
{
    int a;
    printf("\nEnter a number to check whether it is even or not");
    scanf("%i",&a);
    if(a%2==0)
    printf("\nThe entered number is even ");
    else
    printf("\nThe entered number is odd");
    return 0;
}