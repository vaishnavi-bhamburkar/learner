#include<stdio.h>
int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  if(a>b)
  {
    printf("a is greater");
  }
  if(b>a)
  {  
     printf("b is greater");
  }
  else
  {
      printf("Both are equal");
  }  
  
  return 0;
}
