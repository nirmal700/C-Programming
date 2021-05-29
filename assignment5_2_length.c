/*Program to input an array and print the length of an array*/
/*Name:K Nirmal Kumar Roll No.:C2_07*/
#include <stdio.h>
int main()
{
      char str[20];
      int len = 0;
      printf("Enter the string :\t");
      scanf("%[^\n]", str);
      while (str[len] != '\0')
            len++;
      printf("\n Length of the string is:    	%d", len);
      return 0;
}