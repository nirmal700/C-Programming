/*Program to input a string and calculate the no.of words*/
/*Name:K Nirmal Kumar Roll No.:C2_07*/
#include <stdio.h>
int main()
{
    char str1[50];
    int i = 0, c = 0;
    printf("Enter the string :\t");
    scanf(" %[^\n]", str1);
    //gets(str1);
    while (str1[i] != '\0')
    {
        if (str1[i] == ' ' && str1[i + 1] != ' ')
        {
            c++;
        }
        i++;
    }
    printf("The No of word is :%d\t", c + 1);
}