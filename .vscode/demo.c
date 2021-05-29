#include<stdio.h>
#include<stdlib.h>
void min();
void max();
void display();
void insert();
void delete();
void search();
int *arr;
int size;
int main()
{
    int choice,i;
    printf("\n Enter the size : ");
    scanf("%d",&size);
    arr= (int *)malloc(size * sizeof(int));    

    if(arr==NULL)
    {
        printf("No memory allocated\n");
        exit(0);
    }

    printf("Enter the numbers : \n");
    for(i=0;i<size;i++)
        scanf(" %d",arr+i);

    printf("\n1 INSERT \n2 DELETE \n3 LINEAR SEARCH \n4 DISPLAY \n5 MINIMUM \n6 MAXIMUM \n7 EXIT\n");
    while(1)
    {
        printf("\nEnter choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: insert();
                break;
            case 2: delete();
                break;
            case 3: search();
                break;
            case 4: display();
                break;
            case 5: min();
                break;
            case 6: max();
                break;
            case 7: exit(0);
            default: printf("Wrong choice");
        }
    }

}
void min()
{
    int i,j;
    int min=arr[0];

    for(i=1;i<size;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    printf("The minimum element is %d\n",min);
}

void max()
{
    int i,j;
    int max=arr[0];

    for(i=1;i<size;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("The maximum element is %d\n",max);
}

void display()
{
    if(size==0)
    {
        printf("Empty array !");
    }
    else
    {
        printf("the elements are : ");
        for(int i=0;i<size;i++)
        {
            printf("%d  ",arr[i]);
        }
    }
}

void insert()
{
    int i, n1, p;
    printf("Enter the number you want to add ");
    scanf("%d", &n1);
    printf("Enter in which position you want to add\t:");
    scanf("%d", &p);
    for (i = size; i >= p; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[i] = n1;
    size++;
}

void delete()
{
     int i, j, n1, p;
    printf("Enter the number you want to delete\t:");
    scanf("%d", &n1);
    for (i = 0; i < size; i++)
    {
        if (n1 == arr[i])
            p = i;
    }
    for (j = p; j <= size; j++)
    {
        arr[j] = arr[j + 1];
    }
    size--;
}

void search()
{    
    int index,key,ei;
    printf("Enter the element you want to find\t:");
    scanf("%d",&key);
    for(index=0;index<size;index++)
    {
        if(arr[index]==key)
        {
        ei=index;
        break;
        }
    }
    if(index==size)
    printf("No element exist");
    else
    printf("The element is found with %d index and is present in %d position",ei,ei+1);
}