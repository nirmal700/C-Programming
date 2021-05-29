#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int primenum(int p);
void display(int flag, int arr[50]);
int main()
{
    int index, size, flag = 0;
    int prime[50];
    printf("Enter the number upto which you want to check for prime :   ");
    scanf("%d", &size);
    for (index = 2; index <= size; index++)
    {
        if (primenum(index) == 1)
        {
            prime[flag] = index;
            flag++;
        }
    }
    printf("The prime number's upto %d are  :", size);
    display(flag, prime);
}
int primenum(int p)
{
    int a, c;
    c = 0;
    for (a = 2; a <= sqrt(p); a++)
    {
        if (p % a == 0)
        {
            c = 1;
            break;
        }
    }
    if (c == 0)
        return 1;
    else
        return 0;
}
void display(int flag, int arr[50])
{
    int index;
    for (index = 0; index < flag; index++)
    {
        printf("%d\t", arr[index]);
    }
}