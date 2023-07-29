/*
//row major filling

 #include <stdio.h>
 int main()
 {
      int n,i,j,c=0;
      scanf("%d",&n);
      int a[n][n];
      for(i=0;i<n;i++)
   {
      for(j=0;j<n;j++)
   {
      c=c+1;
      a[i][j]=c;
      printf("%2d ",a[i][j]);
   }
      printf("\n");
   }
      return 0;
 } 
*/
 
 
 /*
 // columb major filling
 
 #include <stdio.h>
 int main()
 {
      int m;
      scanf("%d",&m);
      int a[m][m],i,j;
      int n=1;
      for(i=0;i<m;i++)
     {
      for(j=0;j<m; j++)
     {
         a[j][i]=n;
         n++;
     }
     }
      for (int i=0; i<m; i++)
     {
      for (int j=0; j<m; j++)
     {  
         printf("%2d ",a[i][j]);
     }
       printf("\n");
     }
        return 0;
 }
 */   
    
  
    
    
 /*  
//spiral filling

 #include<stdio.h>
 int main()
 {
	long n,count=1,i,j;
	printf("Enter the value for N\n");
	scanf("%ld",&n);
	long arr[n][n];
	for(i=0;i<n;i++)
     {
            for(j=i;j<n-i;j++)
                arr[i][j]=count++;
                       
            for(j=i+1; j<n-i;j++)
                arr[j][n-i-1]=count++;
                      
            for (j=n-i-2; j>=i; j--)
                 arr[n-i-1][j]=count++;
                      
            for(j=n-2-i; j>=i+1; j--)
                arr[j][i]= count++;
      }
            for(i=0; i<n; i++)
      {
            for(j=0; j<n; j++)
      {
            if(arr[i][j] < 10)
               printf("%2ld ",arr[i][j]); 
            else 
            printf("%2ld ",arr[i][j]);
      }       
            printf("\n");
      } 
          return 0;
 }  
 */
 

/*
//magic square filling
 
 #include<stdio.h>
 #include<stdlib.h>
 int main()
 {
     int n, i, j, k, p, q, mid, magic[20][20];
     scanf("%d", &n);
     mid = n/2;

        for(i=0;i< n; i++)
    {
        for(j=0; j< n; j++)
        {
            magic[i][j]=0;
        }
    }

        k=mid;
        j=0;
        for(i=1; i<= n*n; i++)
    {
        magic[j][k] = i;
        p = j--;
        q = k++;

        if(j< 0)
        {
            j = n-1;
        }

        if(k>n-1)
        {
            k=0;
        }

        if(magic[j][k] != 0)
        {
            k = q;
            j = p+1;
        }
    }
      for(j=0;j< n;j++)
    {
        for(k=0; k< n; k++)
        {
            printf("%4d ", magic[j][k]);
        }
        printf("\n");
    }
    return 0;
 }
 */
 
 
 
 #include<stdio.h>
 int main()
 {
     int n, c=1;
     scanf("%d",&n);
     int a[n][n];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
       {
        a[i][j]=0;
       }
    }
        int count=1, i=0, j=n/2;
        a[i][j] = count;
        while (count<n*n)
    {
        count++;
        if((i==0) && (j==n-1)) 
       {
         i++;
       }
        else if(i==0)
       {
         i=n-1;
         j++;
       }
        else if(j==n-1)
        {  
          i--;
          j=0;
        }
       else if (a[i-1][j+1]!=0)
        
         {
           i++;
         }
       else
        {
        i-- ; j++;
        }
        
        
         (a[i][j]=count);
    }
       for (int i=0; i<n; i++)
        {
        for 
        (int j=0;j<n;j++)
        {
          printf("%5d",a[i][j]);
        }
           printf("\n");
    }
       return 0;
 }
       
       
       

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
     
 
