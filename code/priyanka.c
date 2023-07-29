 /*
 #include <stdio.h>
  int main()
  {
      int n , j;
      scanf("%d",&n);
      int array[100];
      int c=0;
      for (int i=1; i<=n; i++)
    {
      array[c]=i;
      c++;
    }
      for(int j=0; j<=n; j++)
    {
      printf("%d",array[j]);
    }
  }



 #include <stdio.h>
  int main()
  {
      int n;
      scanf("%d",&n);
      int array[100];
      for (int i=1; j=0; i<n && j<n; i++,j++)
     {
        array[j]=i;
     }
        for(int j=0; j<n; j++)
     {
        printf("%d",array[j]);
     }
  }



 #include <stdio.h>
 int main()
 {
      int n;
      int array[n];
      scanf("%d",&n);
      for (int i=0; i<n; i++)
    {
      scanf("%d",&array[1]);
    }
      for(int i=0; i<n; i++)
    {
      printf("%d",array[i]);
    }
      return 0;
 }



//odd and even no distribution

 #include <stdio.h>
 int  main()
 {
      int n;
      printf("enter the value of n:");
      scanf("%d",&n);
      int l[100];
      int e[50];
      int o[50];
      int i,p=0,N=0;
      printf("enter the value:");
      for (i=0; i<n; i++)
   {
      scanf("%d",&l[i]);
      if(l[i]%2==0)
     {
       e[p]=l[i];
       p++;
     }
       else
     {
       o[N]=l[i];
       N++;
     }
   }
      printf("even elements are:");
      for(i=0;i<p;i++)
    {
      printf("%d",e[i]);
    }
      printf("\n");
      printf("odd elements are;");
      for(i=0;i<N;i++)
    {
      printf("%d",o[i]);
    }
      printf("\n");
      return 0;
 }
 
 
 
//even & odd

 #include<stdio.h>
 int main()
 {
      int n;
      scanf("%d",&n);
      int even[100];
      int odd[100];
      int c=0, c1=0;
      for(int i=1; i<=(n*2); i++)
   {     
        if (i%2==0)
      {
        even[c]=i;
        c++;
      } 
        else 
      { 
        odd[c1]=i;
        c1++;
      }
   }
       printf("even = ");
       for(int i=0; i<n; i++)
     {
       printf("%d ",even[i]);
     }
       printf("\n");
       printf("odd = ");
       for ( int j=0; j<c; j++) 
     {
       printf("%d ",odd[j]);
     }
       return 0;
 }
   
   
   
 //positive negative
 
 #include<stdio.h>
 int main()
 {
      int n;
      scanf("%d",&n);
      int array[n];
      int positive [50];
      int negative[50];
      int c=0,c1=0;
      printf("Elemnts : ");
      for(int i=0; i<n; i++)
    {
	scanf("%d",&array[i]);
	if(array[i]>=0)
	{ 
          positive[c]=array[i];
          c++;
	}
	  else 
	{
         negative[c1]=array[i];
         c1++;
	}
    }  
	 printf("positive = ");
	 for(int i=0; i<c; i++)
       {
         printf("%d ", positive[i]);
       }
	 printf("\n");
	 printf("negative =");
	 for(int i=0; i<c1; i++)
       {
	 printf("%d",negative[i]);
       }
	 printf("\n");
         return 0;
 }
 
 

 #include<stdio.h>
 int main()
 {
      int array1[]={1,2,3,4,5};
      int array2[]={6,7,8,9,10};
      int c=0;
      int len1=sizeof(array1)/sizeof(array1[0]);
      int len2=sizeof(array2)/sizeof(array2[0]);
      int array3[len1+len2];
      for (int i=0; i<len1; i++)
	{
	array3[c]=array1[i];
	c++;
	}
	for(int i=0; i<len2; i++)
	{
	array3[c]=array2[i];
	c++;
	}
	for(int i=0; i<(len1+len2); i++)
	{
	 printf("%d ",array3[i]);
	 }
	 return 0;
 }
 
 
 
//merge list

#include <stdio.h>  
int main()
{
int array1[]={1,2,3,4,5};
int array1[]={6,7,8,9,10};
int c;
int len1=sizeof(array1)/sizeof(array1[0]);
int len2=sizeof(array2)/sizeof(array2[0]);
 int array3[len+len2];
 for (int i=0; i<len1; i++)
 {
 array3[c]=array1[i];
 c++;
 }
 for (int i=0; i<len2; i++)
 {
 array3[c]=array2[i];
 c++;
 } 
 
 
//merge duplicate

# include <stdio.h>
int main()
{
  int ary[]={2,5,7,8,3,9};
  int ary1[]={1,6,4,10,11,5};
  int c=0;
  int n = sizeof(ary)/ sizeof(ary[0]);
  int n1 = sizeof(ary1) / sizeof(ary1[0]);
  int ary2[n+n1];
  for (int i=0; i<n; i++)
    {
    ary2[c]=ary[i];
    c++;
    }
    for (int i=0; i<n1; i++)
     {
     ary2[c]=ary1[i];
     c++;
     }
     printf("Merge Array : ");
     for (int i=0; i<n+n1; i++)
     { 
      printf("%d ", ary2[i]);
      }
      int n2=sizeof(ary2) / sizeof(ary2[0]);
      for (int i=0; i<n2; i++)
      {
       c=1;
       for (int j=0; j<i; j++)
       { 
         if (ary2[i]==ary2[j])
         {
         c++;
         }
         }
         if(c>1)
         {
          printf("Duplicate = %d", ary2[i]);
          }
      }
      return 0;
} 
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
