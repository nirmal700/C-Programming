//Define a function (pointer as a parameter) that reverses (in place) the elements of a given array. Call it in main().
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
  int t = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        printf("The value at %d of this array is %d\n", t, *(ptr + i));
        t = t + 1;
    }
}