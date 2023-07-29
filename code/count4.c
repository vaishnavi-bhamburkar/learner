#include <stdio.h>
int main()
{
   int marks;
   printf("enter marks");
   scanf("%d",& marks); 
   if(marks<=100)

   {
    
      if(marks>=90)
         {
         printf("grade x");
         } 
      else if(marks>=75)
         {
         printf("grage a");
         }
      else if(marks>=60)
         {
         printf("grade b");
         }
      else if(marks>=45)
         {
         printf("grade c");
         }
      else if(marks>=0)
         {
         printf("fail");
         }
      else
         {
         printf("you have enter negative num ");
         }
    
   }
 
    else
       {
       printf("enter approprate marks");  
       }
    return 0;
}   
