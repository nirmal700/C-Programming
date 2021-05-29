/* Program to input the average mark and display the grade of a student*/
/*Name:- Nirmal Kumar Roll No:- C2_07*/
#include <stdio.h>
int main()
{
    float am;
    char gr;
    printf("Enter the average mark of a student");
    scanf("%f",&am);
    if(am>=90)
    gr='O';
    else if(am>=80)
    gr='E';
    else if(am>=70)
    gr='A';
    else if(am>=60)
    gr='B';
    else if(am>=50)
    gr='C';
    else
    {
        gr='F';
    }
    printf("\nThe grade of a student is %c\t",gr);
}