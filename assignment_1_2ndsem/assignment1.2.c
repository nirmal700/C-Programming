#include <stdio.h>
int main()
{
    int arr[50], n, key, index, a;
    printf("Enter how many elements you want to input");
    scanf("%d", &n);
    printf("Enter the elements \t:");
    for (a = 0; a < n; a++)
    {
        scanf("%d", &arr[a]);
    }
    printf("Enter the element you want to find\t:");
    scanf("%d", &key);
    for (a = 0; a < n; a++)
    {
        if (arr[a] == key)
        {
            index = a;
            break;
        }
    }
    if (a == n)
        printf("no element exist");
    else
        printf("The element is found with %d index and is present in %d", index, index + 1);
    return 0;
}