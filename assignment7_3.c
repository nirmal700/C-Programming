#include <stdio.h>
void swap(int *, int *);
int main()
{
    int a, b;
    printf("Enter the numbers u want to swap");
    scanf("%d", &a);
    scanf("%d", &b);
    swap(&a, &b);
    printf("\n a= %d, b= %d", a, b);
}
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("\n *x= %d, *y= %d", *x, *y);
}