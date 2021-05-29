#include<stdio.h>
#include<stdlib.h>

struct circularQueue
{
    int size;
    int f;
    int r;
    int* arr;
};
int isEmpty(struct circularQueue *q);
int isFull(struct circularQueue *q);
void enqueue(struct circularQueue *q, int val);
void dequeue(struct circularQueue *q);
void display(struct circularQueue *q);
int main(){
    struct circularQueue *q;
    int ele, choice;
    printf("Enter size of circular queue : ");
    scanf("%d",&q->size);
    q->f = q->r = -1;
    q->arr = (int*) malloc(q->size*sizeof(int));

    while (1)
        {
            printf("\n-----------Select an operation to be performed------------\n");
            printf("1. Insert an element\n2. Delete an element\n3. Display the circular queue\n4. Exit\n\nEnter your choice : ");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1:
                    printf("Enter Element : ");
                    scanf("%d",&ele);
                    enqueue(q, ele);
                    break;
                case 2:
                    dequeue(q);
                    break;
                case 3: display(q);
                break;
                case 4: exit(1);
                default:
                printf("\nInvalid Input. Try Again:(\n");

            }
        }


    return 0;
}
int isEmpty(struct circularQueue *q){
    if(q->f==-1){
        return 1;
    }
    return 0;
}

int isFull(struct circularQueue *q){
    if(q->r==q->size-1 && q->f==0 || q->f==q->r+1){
        return 1;
    }
    return 0;
}

void enqueue(struct circularQueue *q, int val){
    if(isFull(q)){
        printf("This Queue is full\n");
    }
    else
    {
    if(q->r==-1)
    {
      q->f = 0;
      q->r = 0;
    }
   else if(q->r== q->size-1)
   {
       q->r=0;
   }
   else
    q->r=q->r+1;
    q->arr[q->r]=val;
    }
}

void dequeue(struct circularQueue *q){
    int item;
    if(isEmpty(q)){
        printf("This Queue is empty\n");
    }
    else{
        item = q->arr[q->f];
        printf("The deleted value is : %d", item);
        if (q->f == q->r)
        {
            q->r = -1;
            q->f = -1;
        }
        else
        {
            if (q->f == q->size - 1)
            {
                q->f = 0;
            }
            else
                q->f++;
        }
    }

}

void display(struct circularQueue *q)
{
    if(q->f==-1)
    {
        printf("\nQueue is empty\n");
        return ;
    }
    printf("\nElements in circular queue are");
    if (q->r >= q->f)
    {
        for(int i=q->f; i<=q->r; i++)
            printf("%d ",(q->arr)[i]);
    }
    else
    {
        for (int i= q->f; i<q->size ; i++)
            printf("%d ",(q->arr)[i]);
        for(int i=0; i<= q->r; i++)
            printf("%d ", (q->arr)[i]);
    }
}