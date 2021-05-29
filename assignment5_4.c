/*Program to input a string and replace'  , ' with ' ; ' in the string*/
/*Name:K Nirmal Kumar Roll No.:C2_07*/
#include <stdio.h>
int main()
{
    char str1[50];
    int i = 0;
    printf("Enter the string :\t");
    scanf(" %[^\n]", str1);
    //gets(str1);
    while (str1[i] != '\0')
    {
        if (str1[i] == ',')
        {
            str1[i] = ';';
        }
        i++;
    }
    printf("The New string is :%s\t", str1);
}