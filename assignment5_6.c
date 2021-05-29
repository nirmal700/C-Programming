/*Program to input a string and calculate the no.of vowels, consonants and other characters*/
/*Name:K Nirmal Kumar Roll No.:C2_07*/
#include <stdio.h>
int main()
{
    char str1[50];
    int c = 0, len = 0, i, v = 0, oc;
    printf("Enter the string :\t");
    scanf(" %[^\n]", str1);
    //gets(str1);
    while (str1[len] != '\0')
        len++;
    for (i = 0; i < len; i++)
    {
        if (str1[i] == 'a' || str1[i] == 'A' || str1[i] == 'e' || str1[i] == 'E' || str1[i] == 'i' || str1[i] == 'I' || str1[i] == 'o' || str1[i] == 'O' || str1[i] == 'u' || str1[i] == 'U')
        {
            v++;
        }
        else if (str1[i] >= 'a' && str1[i] <= 'z' || str1[i] >= 'A' && str1[i] <= 'Z')
        {
            c++;
        }
    }
    oc = len - (v + c);
    printf("The No of vowels are :%d\t", v);

    printf("The No of consonants are :%d\t", c);
    printf("The no of other characters are %d", oc);
}