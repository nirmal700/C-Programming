#include <stdio.h>
#include <string.h>
int main()
{
    char str[10][50],k[50];int i,j,n;
    printf("Enter how many strings u want to input ");
    scanf("%d",&n);
    printf("Enter the string :\t"); 

    for (int i = 0; i < n; i++)
    {
        scanf(" %[^\n]", str[i]);
    }
    for(i=0;i<n;i++)// used the selection sort technique so started with zero
    {
        for (j = 0; j < n; j++) // used the selection sort technique
        {
            if(strcmp(str[j],str[j+1])>0) //str cmp returns the value by comparing the ascii wether its greater or smaller
            {
                strcpy(k, str[i]); // k is the temporary variable to store the string and swap
                strcpy(str[i], str[j]);
                strcpy(str[j], k);
            }

        }
        
    }
    for (i = 0; i < n; i++)
    {
        printf("\n%s",str[i]);
    }
}