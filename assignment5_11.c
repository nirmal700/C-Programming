/*Program to input a string and substring and calculate the no.of repetation of substring*/
/*Name:K Nirmal Kumar Roll No.:C2_07*/
#include <stdio.h>
#include <string.h>
int main()
{
  char str[50], str1[50], str3[50];
  int i, j, len = 0, len1 = 0, d = 0, c, flag = 0;
  printf("Enter the string :\t");
  scanf(" %[^\n]", str);
  while (str[len] != '\0')
    len++;
  printf("Enter the substring\t:");
  scanf(" %[^\n]", str1);
  len1 = strlen(str1);
  for (i = 0; i < len; i++)
  {
    c = 0;
    for (j = d; j < d + len1; j++)
    {
      str3[c] = str[j];
      c++;
    }
    str3[len1] = '\0';
    d = d + 1;
    if (strcmp(str3, str1) == 0)
    {
      flag++;
    }
  }
  printf("The no of repetation are %d", flag);
  return 0;
}
