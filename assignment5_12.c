/*Program to input string and dsiplay in lexographical order*/
/*Name:K Nirmal Kumar Roll No.:C2_07*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[10][50], k[50];
    int i, j, n;
    printf("Enter how many strings u want to input ");
    scanf("%d", &n);
    printf("Enter the string :\t");

    for (int i = 0; i < n; i++)
    {
        scanf(" %[^\n]", str[i]);
    }
    for (i = 0; i < n; i++) // used the bubble sort technique so started with zero
    {
        for (j = 0; j < n - i - 1; j++) // used the bubble sort technique
        {
            if (strcmp(str[j], str[j + 1]) > 0) //str cmp returns the value by comparing the ascii wether its greater or smaller
            {
                strcpy(k, str[j]); // k is the temporary variable to store the string and swap
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], k);
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("\n%s", str[i]);
    }
}