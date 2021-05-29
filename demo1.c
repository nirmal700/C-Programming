#include <stdio.h>
int main()
{
  int a[]={10,20,30,40,50};
  int *p;
  p=a;
  p++;
  printf("%d",*p);
}
