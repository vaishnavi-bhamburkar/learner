/*
 #include <stdio.h>
 int main()
 {
    int a;
    int *p;
    char *q;
    p=&a;
    
    
    printf("%lu\n",sizeof(p));
    printf("%lu\n",sizeof(q));
    //printf("%d\n",*p);
    return 0;
 }
 */
 
 /*
 #include <stdio.h>
 int main()
 {
    int a=10;
    int *p;
    char *q;
    p=&a;
    
    
    printf("%p\n",p);
    printf("%d\n",*p);
    
    //printf("%p\n",*p+1);
    return 0;
 }
 */
 
 /*
#include <stdio.h>
 int main()
 {
    int a;
    int *p;
     p=&a;
     a=1024 + 131072;
     printf("address of pointer %p\n",p);
    char *p0;
    p0 = (char*)p;
    p1 = (short int *)p;
    printf("%d\n",a);
    printf("address of pointer %p\n element which is store in  pointer %d\n",*p+1);
    return 0;
 }
*/


  

 #include <stdio.h>
int main() {
    int numbers[20];
    int* ptr=numbers;
    int i;
    
    // Create a list of natural numbers till 20
    for (i = 0; i <= 20; i++) {
        *(ptr+i) = i+i;
    }
    
    // Print the list of numbers
    for (i = 0; i < 20; i++) {
        printf("%d ", *(ptr+i));
    }
    
    return 0;
  }

 
 /*

#include <stdio.h>
int main() 
{
    char names[5][20];
    int ptr* = names;
    int i;
    // Input 5 names from the user
    printf("Enter 5 names:\n");
    for (i = 0; i < 5; i++) 
    {
        *(ptr+i) = i+i;
    }
    // Print the list of names
    printf("The names you entered are:\n");
    for (i = 0; i < 5; i++) 
    {
        printf("%s\n", name [i]);
    }
    
    return 0;
  
}
 
 */
  


 
 
 
 
 
 
 
 
