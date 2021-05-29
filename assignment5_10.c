/*Program to input a string and convert from upper case to lower case*/
/*Name:K Nirmal Kumar Roll No.:C2_07*/
#include <stdio.h>
int main()
{
    char str[50];
    int i, a, len = 0, mid, b, e;
    printf("Enter the string :\t");
    scanf(" %[^\n]", str);
    while (str[len] != '\0')
        len++;
    for (i = 0; i < len; i++)
    {
        if (str[i] == ' ')
        {
            str[i] = ' ';
        }
        else
        {
            a = str[i];
            str[i] = (char)(a + 32);
        }
    }
    printf("The new string is %s", str);
}