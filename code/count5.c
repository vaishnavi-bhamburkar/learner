#include <stdio.h>
int main()
{
   int marks;
   printf("enter marks");
   scanf("%d",& marks); 
    
      if(marks<=100 && marks>=90)
         {
         printf("grade x");
         } 
      else if(marks<=89 && marks>=75)
         {
         printf("grage a");
         }
      else if(marks<=74 && marks>=65)
         {
         printf("grade b");
         }
      else if(marks<=64 && marks>=45) 
         {
         printf("grade c");
         }
      else if(marks<=44 && marks>=0)
         {
         printf("fail");
         }
      else
         {
         printf("you have enter negative num ");
         }
    
}   
