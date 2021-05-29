/* Program to check the greatest out of two numbers */
/*Name:- Nirmal Kumar Roll No:- C2_07*/
#include <stdio.h>
int main()
{
    int a,b;
    printf("Input a number ");
    scanf("%d",&a);
    printf("Input a number");
    scanf("%d",&b);
    if(a>b)
    printf("%d is greater than %d",a,b);
    if(a<b)
    printf("%d is greater than %d",b,a);
    if(a==b)
    printf("Both the numbers are equal");
    return 0;
}
