

#include<stdio.h>
void main()
{
  int n,i,count=0;
  printf("enter the number \n");
  scanf("%d",&n);
  for(i=1;i<n;i++)
  {
      if(n%i==0)
      {
          printf("\n the factor is %d",i);
      }
  }
}
