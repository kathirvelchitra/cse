
#include <stdio.h>
int main()
{
    
   int a,b[100],c=0,i;
   printf("enter the values \n");
   scanf("%d",&a);
   for(i=0;i<a;i++)
   {
       scanf("%d",&b[i]);
   }
   for(i=0;i<a;i++)
   {
       c=c+b[i];
   }
   printf("%d",c);
    return 0;
    
}



