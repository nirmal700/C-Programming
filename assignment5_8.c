/*Program to input a string and reverse the string*/
/*Name:K Nirmal Kumar Roll No.:C2_07*/
#include <stdio.h>
int main()
{
     char str1[50], str2[50];
     int i, j = 0, len = 0;
     printf("Enter the string :\t");
     scanf(" %[^\n]", str1);
     //gets(str1);
     while (str1[len] != '\0')
          len++;
     printf("the length is %d ", len);
     j = len - 1;
     for (i = 0; i < len; i++)
     {
          str2[i] = str1[j];
          j = j - 1;
     }
     str2[len] = '\0';
     printf("The Reversed String is :\t %s", str2);
}
