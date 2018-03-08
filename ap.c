
#include <stdio.h>

int main()
{
    int a,d,n,sum=0,i=0;
    printf("Enter the a,d,n values");
    scanf("%d%d%d",&a,&d,&n);
   i=((2*a)+((n-1)*d));
   sum=((n/2)*i);
    printf("sum of given AP %d",sum);
    return 0;
}
