/*Program to accept a temperature in fahrenheit and print in celcius*/
/*Name:- Nirmal Kumar Roll No:- C2_07*/
#include <stdio.h>
int main()
{
    float c, f;
    printf("Enter the temperature in fahrenheit :");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("The temperature in celcuis is : %f",c);
    return 0;
}