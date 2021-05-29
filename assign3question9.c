/* Program to print the fibonacci number upto n number of terms*/
/*Name:- Nirmal Kumar Roll No:- C2_07*/
#include <stdio.h>
int main()
{
    int f0=0,f1=1,n,f;
    int a;
    printf("Enter the number of terms");
    scanf("%d",&n);
    printf("%d ,%d ",f0,f1);
    for(a=2;a<=n-1;a++)
    {
        f=f0+f1;
        printf(", %d",f);
        f0=f1;
        f1=f;
    }
}
