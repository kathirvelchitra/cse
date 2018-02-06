
#include<stdio.h>
void main()
{
    int a, b,temp;
    printf("enter a value");
    scanf("%d",&a);
    printf("enter b value");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("the swapping values are %d %d",a,b);  
}
