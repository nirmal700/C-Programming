#include <stdio.h>
void read(int arr[100], int n);
void print(int arr[100], int n);
void insert(int arr[100], int n);
void delete (int arr[100], int n);
int main()
{
    int n;
    int arr[100], n1, p, s;
    printf("-----------------------------------------------------------------------------------\n");
    printf("Enter 1 to add an element into the array\n");
    printf("Enter 2 to delete an element in an array\n ");
    scanf("%d", &s);
    printf("Enter how many numbers u want to input");
    scanf("%d", &n);
    read(arr, n);
    if (s == 1)
    {
        insert(arr, n);
        print(arr, n + 1);
    }
    else
    {
        delete (arr, n);
        print(arr, n - 1);
    }
}
void read(int arr[100], int n)
{
    printf("Enter the elemets");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}
void print(int arr[100], int n)
{
    printf("The new array is:");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}
void insert(int arr[100], int n)
{
    int i, n1, p;
    printf("Enter the number you want to add ");
    scanf("%d", &n1);
    printf("Enter in which position you want to add\t:");
    scanf("%d", &p);
    for (i = n; i >= p; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[i] = n1;
}
void delete (int arr[100], int n)
{
    int i, j, n1, p;
    printf("Enter the number you want to delete\t:");
    scanf("%d", &n1);
    for (i = 0; i < n; i++)
    {
        if (n1 == arr[i])
            p = i;
    }
    for (j = p; j <= n; j++)
    {
        arr[j] = arr[j + 1];
    }
}
