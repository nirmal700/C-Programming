/* Program to input number between 1-4 and print the color*/
/*Name:- Nirmal Kumar Roll No:- C2_07*/
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a Integer between 1-4\t:");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("Red");
        break;
    case 2:
        printf("Green");
        break;
    case 3:
        printf("Blue");
        break;
    case 4:
        printf("Black");
        break;
    default:
        printf("Invalid Input");
        break;
    }
}
