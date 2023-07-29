#include<stdio.h>
#include<string.h>
int main()
{
  int i,v,n,p;
  char s[100];
  int a[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
  char b[][3]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
  n=sizeof(a)/sizeof(a[0]);
  scanf("%d",&v);
  for(int i=0;i<n;i++)
    {
      if(v>=a[i])
        {
           p=v/a[i];
          for(int j=0;j<p;j++)
             {
              strcat(s,b[i]);
             }
        }
        v=v%a[i];
       }
        if(v==0)
          {
             i=i+n;
            }
     
     printf("%s",s);
     return 0;
}
