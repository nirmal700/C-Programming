#include <stdio.h>
main()
{
    int sparse[30][20], resultant[60][3], row, col, i, j, nzero, k = 1;
    printf("Enter the total no. of rows and columns");
    scanf("%d%d", &row, &col);
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &sparse[i][j]);
        }
    }
    printf("The values are ");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d", sparse[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (sparse[i][j] != 0)
            {
                nzero++;
            }
        }
    }
    resultant[0][0] = row;
    resultant[0][1] = col;
    resultant[0][2] = nzero;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (sparse[i][j] != 0)
            {
                resultant[k][0] = i;
                resultant[k][1] = j;
                resultant[k][2] = sparse[i][j];
                k++;
            }
        }
    }
    for (i = 0; i < k; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", resultant[i][j]);
        }
        printf("\n");
    }
}