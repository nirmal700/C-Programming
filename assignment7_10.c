#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int checkpalindrom(char *str, int len);
void read(char str[100]);
int length(char str[100]);
int main()
{
    char *str;
    int res, len1, n;
    printf("\n Enter the no. of characer u want to input:");
    scanf("%d", &n + 1);
    str = (char *)calloc(n + 1, sizeof(char));
    read(str);
    len1 = length(str);
    res = checkpalindrom(str, len1);
    printf("The result is :\t%d", res);
    free(str);
    return 0;
}

void read(char str[100])
{
    printf("Enter the String to check for palindrome :");
    scanf(" %[^\n]", str);
}
int length(char str[100])
{
    int len = 0;
    while (str[len] != '\0')
        len++;
    return len;
}
int checkpalindrom(char *str, int len)
{
    int i, mid, b, e, f = 0;
    mid = len / 2;
    b = 0;
    e = len - 1;
    while (b < mid)
    {
        if (str[b] != str[e])
        {
            f = 1;
            break;
        }
        b = b + 1;
        e = e - 1;
    }
    if (f == 0)
        return 1;
    else
        return -1;
}