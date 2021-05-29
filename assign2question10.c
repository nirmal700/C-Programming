/* Program to input the radius and calculate the radius and circumference as per user's choice*/
/*Name:- Nirmal Kumar Roll No:- C2_07*/
#include <stdio.h>
int main()
{
    float r,a,c;
    int ch;
    printf("Enter the radius of the circle\t:");
    scanf("%f",&r);
    printf("\nEnter 1 to calculate the area of the circle ");
    printf("\nEnter 2 to calculate the circumference of the circle ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        a=3.14*r*r;
        printf("\nThe area of the circle is %10.3f",a);
        break;
    case 2:
         c=2*3.14*r;
         printf("\nThe circumference of the circle is%10.3f\t:",c);
         break;
    default:
        printf("Wrong Entry");
        break;
    }
    
}