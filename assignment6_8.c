#include <stdio.h>
int factorial(int n);
int main()
{
    int res, n;
    printf("Enter the number to find the factorial");
    scanf("%d", &n);
    res = factorial(n);
    printf("The factorial of the number is :%d", res);
}
int factorial(int n)
{
    if (n == 0)
        return 1;
    else
    {
        return n * factorial(n - 1);
    }
}