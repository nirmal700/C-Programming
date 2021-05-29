#include <stdio.h>
float sum(float, float);
float difference(float a, float b);
float product(float a, float b);
float division(float a, float b);
int main()
{
    int n;
    float res, x, y;
    printf("------------------------------------------------------------------------\n");
    printf("Enter 1 to calculate the sum\n");
    printf("Enter 2 to calculate the difference\n");
    printf("Enter 3 to calculate the product \n");
    printf("Enter 4 to calculate the division \n");
    scanf("%d", &n);
    printf("Enter two number's ");
    scanf("%f", &x);
    scanf("%f", &y);
    if (n == 1)
    {
        res = sum(x, y);
        printf("The sum of the two number's is :\t%f", res);
    }
    if (n == 2)
    {
        res = difference(x, y);
        printf("The difference of the two number's is :\t%f", res);
    }
    if (n == 3)
    {
        res = product(x, y);
        printf("The product of the two number's is :\t%f", res);
    }
    if (n == 4)
    {
        res = division(x, y);
        printf("The division of the two number's is :\t%f", res);
    }
    if (n >= 4)
    {
        printf("Invalid choice");
    }

    return 0;
}
float sum(float a, float b)
{
    float s;
    s = a + b;
    return s;
}
float difference(float a, float b)
{
    float s;
    s = a - b;
    return s;
}
float product(float a, float b)
{
    float s;
    s = a * b;
    return s;
}
float division(float a, float b)
{
    float s;
    s = a / b;
    return s;
}
