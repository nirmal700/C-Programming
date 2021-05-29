#include <stdio.h>
int main()
{
    int r, c, i, j, arr[100][100], arr1[100][100];
    printf("Enter the no. of rows\t:");
    scanf("%d", &r);
    printf("Enter the no of columns\t:");
    scanf("%d", &c);
    printf("Enter the matrix to do transpose\t:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            arr1[i][j] = arr[j][i];
        }
    }
    printf("The transpose of a matrix is\t:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }
    return 0;
}
