/*Program to input a string and concatenate the string*/
/*Name:K Nirmal Kumar Roll No.:C2_07*/
#include <stdio.h>
int main()
{
     char str1[50], str2[50];
     int c = 0, len1 = 0, i;
     printf("Enter the string :\t");
     scanf(" %[^\n]", str1);
     //gets(str1);
     while (str1[len1] != '\0')
          len1++;
     printf("Enter the string :\t");
     scanf(" %[^\n]", str2);
     for (i = 0; str2[i] != 0; i++, len1++)
     {
          str1[len1] = str2[i];
     }
     printf("%s", str1);
}