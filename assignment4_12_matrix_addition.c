/* Program to enter two matrix and print the sum of the matrix*/
/*Name:- Priyanka Mohakuds Roll No:- C2_24*/
#include <stdio.h>
int main()
{
    int r1,c1,r2,c2,i,j;
    int arr[50][50],arr1[50][50],arr3[50][50];
    printf("Enter how many rows u want to input for matrix 1\t:");
    scanf("%d",&r1);
    printf("Enter how many columns u want to inpu for matrix 1\t:");
    scanf("%d",&c1);
    printf("Enter the first matrix\t:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
             //printf("\nEnter value for disp[%d][%d]:",a,b);
             scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter how many rows u want to input for matrix 2 :\t");
    scanf("%d",&r2);
    printf("Enter how many columns u want to input for matrix 2 :\t");
    scanf("%d",&c2);
    if(r2==r1&&c2==c1)
    {
        printf("Enter the second matrix\t:\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                 //printf("\nEnter value for disp[%d][%d]:",a,b);
                scanf("%d",&arr1[i][j]);
            }
        }
        printf("The sum of the matrix is \t:\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
            arr3[i][j]=arr[i][j]+arr1[i][j];
            }
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
            printf("%d\t",arr3[i][j]);
            }
        printf("\n");
        }
    }
    else
    {
        printf("The sum Can't the calculated");
    }
    return 0;
}