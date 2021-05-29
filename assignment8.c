/*Program to receive radius of circle and find the circumference and area of circle*/
/*Name:- Nirmal Kumar Roll No:- C2_07*/
#include <stdio.h>
int main()
{
    float a,c,r;
    printf("Enter the radius of the circle:");
    scanf("%f",&r);
    c=2*3.14*r;
    a=3.14*r*r;
    printf("\nThe circumference of the circle :%f", c);
    printf("\nThe area of the circle is :%f", a);
    return 0;
}