/* Program to enter a value in seconds and convert into hours, min, sec*/
/*Name:- Nirmal Kumar Roll No:- C2_07*/
#include <stdio.h>
int main()
{
    int s1,h,s,m;
    s1=79852;
    h=(s1/3600);
    m=(s1-(3600*h))/60;
    s=(s1-(3600*h)-(m*60));
    printf("\n HH:MM:SS  %i:%i:%i",h,m,s);
    return 0;
}
