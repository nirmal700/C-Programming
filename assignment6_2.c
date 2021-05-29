#include <stdio.h>
int factorial(int n);
int main()
{
    int x, f1;
    printf("Enter the number to find the factorial");
    scanf("%d", &x);
    f1 = factorial(x);
    printf("The factorial of a number is:\t%d", f1);
    return 0;
}
int factorial(int n)
{
    int i, f;
    f = 1;
    for (int i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}