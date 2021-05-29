#include <stdio.h>
#include <string.h>
struct student
{
    int sic;
    char name[50];
    int marks;
};
struct student shweta,nirmal;
int main()
{
    shweta.sic=2001;
    nirmal.sic=2016;
    strcpy(shweta.name,"Pilla Shweta Dash");
    strcpy(nirmal.name,"Nirmal");
    shweta.marks=48;
    nirmal.marks=68;
    printf("The name of Shweta is: %s \n",shweta.name);
    printf("The name of nirmal is: %s \n",nirmal.name);
    printf("The SIC of shweta is: %d \n",shweta.sic);
    printf("The SIC of nirmal is :%d \n",nirmal.sic);
    printf("The marks of shweta is: %d \n",shweta.marks);
    printf("The marks of nirmal is :%d \n",nirmal.marks);
}