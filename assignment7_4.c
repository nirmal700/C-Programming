//Define a function (pointer as a parameter) that will display all elements of the array. Call it in main().
#include <stdio.h>
void input(int *ptr, int n);
void display(int *ptr, int n);
int main()
{
    int n, arr[100];
    printf("Enter the size of the array you want to create\n");
    scanf("%d", &n);
    input(arr, n);
    display(arr, n);
    return 0;
}
void input(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n", i);
        scanf("%d", ptr + i);
    }
}
void display(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array is %d\n", i, *(ptr + i));
    }
}