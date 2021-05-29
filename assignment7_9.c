#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void stringReverse(char *, int);
int main()
{
     char str1[50];
     int len = 0;
     printf("Enter the string :\t");
     scanf(" %[^\n]", str1);
     //gets(str1);
     while (str1[len] != '\0')
          len++;
     printf("the length is %d ", len);
     stringReverse(str1, len);
     return 0;
}
void stringReverse(char *str1, int len)
{
     int j, i;
     char str2[100];
     j = len - 1;
     for (i = 0; i < len; i++)
     {
          str2[i] = *(str1 + j);
          j = j - 1;
     }
     str2[len] = '\0';
     printf("The Reversed String is :\t %s", str2);
}