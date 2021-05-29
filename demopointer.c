#include <stdio.h>
int main()
{
    int shweta=73;
    int *isha = &shweta;
    printf("The adress of pointer to shweta is %p \n",&isha);
    printf("The adress of shweta is %p \n",&shweta);
    printf("The adress of shweta is %p\n",isha);
    printf("The value of shweta is %d\n",shweta);
    printf("The value of shweta is %d\n",*isha);
}