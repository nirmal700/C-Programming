/*Program to input a string and check wether the string is palindrome or not*/
/*Name:K Nirmal Kumar Roll No.:C2_07*/
#include <stdio.h>
int main()
{
     char str[50];
     int i, len = 0, mid, b, e, f = 0;
     printf("Enter the string :\t");
     scanf(" %[^\n]", str);
     //gets(str1);
     while (str[len] != '\0')
          len++;
     mid = len / 2;
     b = 0;
     e = len - 1;
     while (b < mid)
     {
          if (str[b] != str[e])
          {
               printf("%s is not a palindrome", str);
               f = 1;
               break;
          }
          b = b + 1;
          e = e - 1;
     }
     if (f == 0)
          printf("Its a palindrome string");
     else
          printf("Its not a palindrome");
}
