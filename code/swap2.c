#include <stdio.h>
int main()
{
  int a,b;
  a=20;
  b=30;
  a,b = b,a;
  
  printf("%d\n%d",a,b);
}       
