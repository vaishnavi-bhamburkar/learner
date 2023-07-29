#include <stdio.h>
int main()
{
   int age;
   printf("enter age");
   scanf("%d",& age); 
   if(age<=65 && age>=18)

   {
    
      if(age>=18 && age<=65)
         {
         printf("eligible for voting it is senior citizen");
         } 
      else if(age<18)
         {
         printf("not eligible for votinf");
         }
      
    
   }
 
    else
       {
       printf("not eligible for voting it is not senior citizen");  
       }
    return 0;
}   
