//Write a program by using pointer and function, for linear search. int * linearSearch(int *ptr, int size, int element);
#include <stdio.h>
int *linearSearch(int *ptr, int size, int element);
int p = -1;
int main()
{
    int arr[100], key, res;
    int n;
    printf("Enter how many numbers u want to input ");
    scanf("%d", &n);
    printf("Enter the number's:\t");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to find:\t");
    scanf(" %d", &key);
    res = *linearSearch(arr, n, key);
    if (res == -1)
        printf("The element is not found");
    else
        printf("The %d is found at %d index", key, res);
}
int *linearSearch(int *ptr, int size, int element)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (*(ptr + i) == element)
        {
            p = i;
            break;
        }
    }
    return &p;
}