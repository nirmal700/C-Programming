/* Program to print the numbers between m and n where the m and n will be inputted by the user*/
/*Name:- Nirmal Kumar Roll No:- C2_07*/
#include <stdio.h>
int main()
{
    int m,n,a;
    printf("Enter the value for m");
    scanf("%d",&m);
    printf("Enter the value for n");
    scanf("%d",&n);
    for(a=m;a<=n;a++)
    {
        printf("%d\n",a);
    }
}
