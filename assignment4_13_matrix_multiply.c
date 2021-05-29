#include <stdio.h>
int main()
{
    int r, c, r2, c2;
    printf("Enter how many rows you want to input");
    scanf("%d", &r);
    printf("Enter how many columns you want to input");
    scanf("%d", &c);
    int arr[r][c], sum = 0;
    printf("Enter the first matrix");
    for (int a = 0; a < r; a++)
    {
        for (int b = 0; b < c; b++)
        {
            printf("\nEnter value for disp[%d][%d]:", a, b);
            scanf("%d", &arr[a][b]);
        }
    }
    printf("Enter the second matrix\n");
    printf("Enter how many rows you want to input");
    scanf("%d", &r2);
    printf("Enter how many columns you want to input");
    scanf("%d", &c2);
    int arr1[r2][c2];
    for (int a = 0; a < r2; a++)
    {
        for (int b = 0; b < c2; b++)
        {
            printf("\nEnter value for disp[%d][%d]:", a, b);
            scanf("%d", &arr1[a][b]);
        }
    }
    if (c == r2)
    {
        printf("\nThe multiplication of the matrix is \n");
        int mul[r][c2];
        for (int a = 0; a < r; a++)
        {
            for (int b = 0; b < c2; b++)
            {
                for (int c = 0; c < r2; c++)
                {
                    mul[a][b] = mul[a][b] + arr[a][c] * arr1[c][b];
                }
            }
        }
        for (int a = 0; a < r; a++)
        {
            for (int b = 0; b < c2; b++)
            {
                printf("%d\t", mul[a][b]);
            }
            printf("\n");
        }
    }
    else
        printf("The matrix can't be multiplied");
}
