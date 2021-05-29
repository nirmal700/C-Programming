/* Program to enter the number in an 2darray and print in ascending order*/
/*Name:- Nirmal Kumar Roll No:- C2_07*/
#include <stdio.h>
int main()
{
    int r,c,a,b;
    printf("Enter the no. of rows");
    scanf("%d",&r);
    printf("Enter the no of columns");
    scanf("%d",&c);
    printf("Enter the matrix \t:\n");
    int arr[r][c];
    for(a=0;a<r;a++)
    {
        for(b=0;b<c;b++)
        {
             //printf("Enter value for disp[%d][%d]:",a,b);
             scanf("%d",&arr[a][b]);
        }
    }
    for(a=0;a<r;a++)
    {
        for(b=0;b<c;b++)
        {
             printf("%d\t",arr[a][b]);
        }
        printf("\n");
    }
    return 0;
}