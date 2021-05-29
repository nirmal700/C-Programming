#include <stdio.h>
int power(int x, int n);
int main()
{
    int x, n, p;
    printf("Enter the vlaue for x,n i.e. X^N ");
    scanf("%d", &x);
    scanf("%d", &n);
    p = power(x, n);
    printf("The sum of X^n is :%d", p);
}
int power(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return x * power(x, n - 1);
    }
}