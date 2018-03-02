
#include <stdio.h>
int main()
{
  int r,n,num=1;
  printf("enter the number");
  scanf("%d",&n);
  while(n!=0)
  {
      r=n%10;
      num=num*r;
      n=n/10;
  }
   printf("%d",num);
    return 0;
    
}
