#include <stdio.h>
int array_sum(int arr[100], int n);
void read(int arr[100], int n);
int main()
{
    int n, arr[100], s = 0;
    printf("Enter how many elemets u want to input in an array");
    scanf("%d", &n);
    read(arr, n);
    s = array_sum(arr, n);
    printf("The sum of the array is :   %d ", s);
}
void read(int arr[100], int n)
{
    printf("Enter the elemets");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}
int array_sum(int arr[100], int n)
{
    if (n <= 0)
        return 0;
    else
        return array_sum(arr, n - 1) + arr[n - 1];
}
