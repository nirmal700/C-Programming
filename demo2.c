/*Program to input a string and concatenate the string*/
/*Name:K Nirmal Kumar Roll No.:C2_07*/
#include <stdio.h>
int main()
{
     char str1[50], str2[50];
     int c = 0, len1 = 0, i,n;
     printf("Enter the first string :\t");
     scanf(" %[^\n]", str1);
     //gets(str1);
     while (str1[len1] != '\0')
          len1++;
     printf("Enter the string to concatinate :\t");
     scanf(" %[^\n]", str2);
     printf("Enter the no. of character to concat");
     scanf("%d",&n);
     for (i = 0; i<n; i++, len1++)
     {
          str1[len1] = str2[i];
     }
     printf("%s", str1);
}
