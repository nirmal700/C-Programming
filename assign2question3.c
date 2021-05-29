/* Program to display wether the input number is leap year or not. A year is a leap year if it is divisible by 4 but not divisible by 100
or only divisible by 400 */
/*Name:- Nirmal Kumar Roll No:- C2_07*/
#include <stdio.h>
int main()
{
    int y;
    printf("Enter the year to check for leap year");
    scanf("%d",&y);
    if(y%4==0)
    {
    if(y%100==0)
    {
    if(y%400==0)
        printf("%d is a leap year",y);
    else
        printf("%d is not a leap year",y);
    }
    else
        printf("%d is a leap year",y);
    }
    else
    printf("%d is not a leap year",y);
    return 0;
}
