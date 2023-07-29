#include <stdio.h>
int main()
{
  int a;
  scanf("%d",&a); 
  if(a>0)
      {
      printf("the number%d is positive",a);
      }
  if(a%2 ==0)
      {
      printf("the number%d is even",a);
      }
  else
      {
      printf("the number%d is zero",a);
      }
   return 0;
}   
