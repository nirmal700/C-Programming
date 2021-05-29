#include <stdio.h>
int main()
{
    int arr[50], n, index, flag = 0, rep[50], elem;
    printf("Enter How many no.'s you want to input");
    scanf("%d", &n);
    printf("Enter the No.'s");
    for (index = 0; index < n; index++)
    {
        scanf("%d", &arr[index]);
    }
    printf("Enter the element you want to check");
    scanf("%d", &elem);
    for (index = 0; index < n; index++)
    {
        if (arr[index] == elem)
        {
            rep[flag] = index;
            flag++;
        }
    }
    printf("The no. of repetation of %d is : %d", elem, flag);
    for (index = 0; index < flag; index++)
    {
        printf("\nThe %d is found at %d index", elem, rep[index]);
    }
}