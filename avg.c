#include<stdio.h>
void main()
{
int n,i,a[5],avg,sum;
printf("enter the value:");
scanf("%d",&n);
for(i=0;i<=5;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<=5;i++)
{
    sum=sum+a[i];
}
avg=sum/5;
printf("%d",avg);
}
