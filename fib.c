
#include<stdio.h>
int main()
{
int n,i,a=0,b=1,c;
printf("enter the number:\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{

c=a+b;
a=b;
b=c;

printf("%d",c);
}
return 0;
}
