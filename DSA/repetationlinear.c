#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,index,flag=0,elem;
    int *ptr,*rep;
    printf("Enter How many no.'s you want to input");
    scanf("%d",&n);
    ptr = (int *)calloc(n, sizeof(int));
    rep = (int *)calloc(n, sizeof(int));
    printf("Enter the No.'s  :\n ");
    for(index=0;index<n;index++)
    {
        scanf("%d",ptr+index);
    }
    printf("Enter the element you want to check");
    scanf("%d",&elem);
    for(index=0;index<n;index++)
    {
        if(ptr[index]==elem)
        {
            rep[flag]=index;
            flag++;
        }
    }
    printf("The no. of repetation of %d is :",flag);
    for(index=0;index<flag;index++)
    {
        printf("\nThe %d is found at %d index",elem,rep[index]);
    }

}