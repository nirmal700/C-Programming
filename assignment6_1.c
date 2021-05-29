#include <stdio.h>
void sum1(void);
int sum(int, int);
int main()
{
    int res, x, y;
    printf("Enter the two numbers ");
    scanf("%d", &x);
    scanf("%d", &y);
    res = sum(x, y);
    printf("The sum of two numbers by function call is %d", res);
    sum1();
    return 0;
}
int sum(int a, int b)
{
    int s = a + b;
    return s;
}
void sum1(void)
{
    int n1, n2;
    printf("Enter two numers");
    scanf("%d", &n1);
    scanf("%d", &n2);
    printf("The sum is %d", n1 + n2);
}