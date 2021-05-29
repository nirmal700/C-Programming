#include <stdio.h>
int main()
{
    int r, c, a, b;
    printf("Enter the no. of rows");
    scanf("%d", &r);
    printf("Enter the no of columns");
    scanf("%d", &c);
    printf("Enter the matrix \t:\n");
    int arr[r][c];
    for (a = 0; a < r; a++)
    {
        for (b = 0; b < c; b++)
        {
            scanf("%d", &arr[a][b]);
        }
    }
    for (a = 0; a < r; a++)
    {
        for (b = 0; b < c; b++)
        {
            if (a > b)
            {
                printf("0");
                printf("\t");
            }
            else
            {
                printf("%d\t", arr[a][b]);
            }
        }
        printf("\n");
    }
}
