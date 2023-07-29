#include <stdio.h>
int main()
{
  char c; 
  int count;
  c = getchar();
  while(c!= EOF)
  {
   count = count + 1;
   c=getchar();
  }
   printf("\n%d\n",count);
   return 0;
}
