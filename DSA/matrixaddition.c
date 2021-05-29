#include <stdio.h>
void input_matrix(int arr1[100][100],int r1, int c1);
void addition_matrix(int arr1[100][100], int arr2[100][100], int sum[100][100], int r1, int r2, int c1, int c2);
void display_matrix(int add[100][100], int r1, int c2);
int main()
{
    int r2, c2, r1, c1, arr1[100][100], arr2[100][100], sum[100][100];
    printf("Enter how many rows u want to input for 1st matrix");
    scanf("%d", &r1);
    printf("Enter how many columns u want to input for 1st matrix");
    scanf("%d", &c1);
    printf("Enter how many rows u want to input for 2nd matrix");
    scanf("%d", &r2);
    printf("Enter how many columns u want to input for 2nd matrix");
    scanf("%d", &c2);
    if (c1 == c2 && r1==r2)
    {
        input_matrix(arr1, r1, c1);
        input_matrix(arr2, r1, c1);
        addition_matrix(arr1, arr2, sum, r1, r2, c1, c2);
        printf("The matrix after addition is :\n");
        display_matrix(sum, r1, c2);
    }
    else
    {
        printf("The matrix cant be added");
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
void addition_matrix(int arr1[100][100], int arr2[100][100], int sum[100][100], int r1, int r2, int c1, int c2)
{
    int i, j, k;
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            
                sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}
void display_matrix(int add[100][100], int r1, int c2)
{
    int i, j;
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d\t", add[i][j]);
        }
        printf("\n");
    }
}
