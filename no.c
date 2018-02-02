
#include <stdio.h>

int main()
{
   int n;
   printf("enter the numbers:");
   scanf("%d",&n);
   if(n>=0)
   {
       n=n+2;
       ++n;
       printf("%d",n);
   }

    return 0;
}
