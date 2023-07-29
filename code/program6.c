#include<stdio.h>
int main()
{
  int lower,higher,step;
  float c;
  lower=0; 
  higher=300; 
  step=20;
  while(lower<=higher)
  {
    c=5.0/9.0*(lower-32.0)/9;
    printf("%3d\t%0.1f\n",lower,c);
    lower=(lower+step);
  }
    return 0;
}
    
    
