/* Program to input the average mark and display the grade of a student using switch case*/
/*Name:- Nirmal Kumar Roll No:- C2_07*/
#include <stdio.h>
int main()
{
    float am;
    char gr;
    printf("Enter the Average mark of a student");
    scanf("%f",&am);
    int ch;
    ch=am/10;
    switch (ch)
    {
    case 10:

    case 9:
       gr='O';
        break;
    case 8:
        gr='E';
        break;
    case 7:
        gr='A';
        break;
    case 6:
        gr='B';
        break;
    case 5:
        gr='c';
        break;
    default:
        gr='F';
        break;
    }
    printf("The grade is % c",gr);
}
