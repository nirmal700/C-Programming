#include <stdio.h>
void input_matrix(int arr1[100][100], int r1, int c1);
void multiply_matrix(int arr1[100][100], int arr2[100][100], int mul[100][100], int r1, int r2, int c1, int c2);
void display_matrix(int mul[100][100], int r1, int c2);
int main()
{
    int r2, c2, r1, c1, arr1[100][100], arr2[100][100], mul[100][100];
    printf("Enter how many rows you want to input for 1st matrix");
    scanf("%d", &r1);
    printf("Enter how many columns you want to input for 1st matrix");
    scanf("%d", &c1);
    printf("Enter how many rows you want to input for 2nd matrix");
    scanf("%d", &r2);
    printf("Enter how many columns you want to input for 2nd matrix");
    scanf("%d", &c2);
    if (c1 == r2)
    {
        printf("Enter the first matrix");
        input_matrix(arr1, r1, c1);
        printf("Enter the second matrix");
        input_matrix(arr2, r2, c2);
        multiply_matrix(arr1, arr2, mul, r1, r2, c1, c2);
        printf("The matrix after multiplication is :\n");
        display_matrix(mul, r1, c2);
    }
    else
    {
        printf("The matrix cant be multiplied");
    }
}
void input_matrix(int arr1[100][100], int r1, int c1)
{
    int i, j;
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
}
void multiply_matrix(int arr1[100][100], int arr2[100][100], int mul[100][100], int r1, int r2, int c1, int c2)
{
    int i, j, k;
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            for (k = 0; k < r2; k++)
            {
                mul[i][j] = mul[i][j] + arr1[i][k] * arr2[k][j];
            }
        }
    }
}
void display_matrix(int mul[100][100], int r1, int c2)
{
    int i, j;
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
}