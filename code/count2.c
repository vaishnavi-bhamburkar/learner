#include <stdio.h>
int main()
{
  char c;
  int count; 
  count = 0;
  while((c = getchar())!=EOF)
  {
   if(c == '\n');
   count=count+1;
  }
   printf("%d\n",count); 
   return 0;
}   
