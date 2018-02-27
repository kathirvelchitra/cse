
#include<stdio.h>
int main()
{
    int i,n,count=0;
    printf("enter n values");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
       if(n%i==0)
        count++;
       }
        if(count==0)
        {
            printf("it is not composite");
      }
      else
      {
            printf("it is composite ");
            
        }
    }

    
