#include <stdio.h>
#include <math.h>
int main()
{
    int n,f,a,c;
    float x,temp,sum;
    sum=0;
    printf("Enter the x");
    scanf("%f",&x);
    printf("Enter the value of n");
    scanf("%d",&n);
    temp=x;
    x = x*(3.141/180);
    for(a=1,c=1;a<=n;a++,c=c+2)
    {
        f=1;
        for(int b=1;b<=c;b++)
        {
            f=f*b;
        }
        if(a%2==0)
        {
            sum=sum+pow(x,c)/f;
        }
        else
        sum=sum-pow(x,c)/f;
    }
    printf("Sin(%0.1f): %f",temp,sum);
}