#include <stdio.h>
#include <math.h>
int prime_composite(int n);
int main()
{
    int a, r;
    printf("Enter the number to check for prime or composite");
    scanf("%d", &a);
    r = prime_composite(a);
    printf("The result is :%d\t", r);
}
int prime_composite(int n)
{
    int a, c = 0;
    for (a = 2; a <= sqrt(n); a++)
    {
        if (n % a == 0)
        {
            c = 1;
            break;
        }
    }
    if (c == 0)
        return 1;
    else
        return -1;
}