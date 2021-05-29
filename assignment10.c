/* Program to calculate the area of the triangle*/
/*Name:- Nirmal Kumar Roll No:- C2_07*/
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s;
    float ar;
    s=ar=0;
    printf("Enter the length of side 1");
    scanf("%f",&a);
    printf("Enter the length of side 2");
    scanf("%f",&b);
    printf("Enter the length of side 3");
    scanf("%f",&c);
    s=(a+b+c)/2;
    ar=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of the traingle = %f \n",ar);
}
