
#include <stdio.h>
#include<string.h>

int main()
{
    char str[20];
    int i;
    printf("enter the string");
    scanf("%s",&str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a'&&str[i]<='z')
        {
            printf("%c",str[i]-32);
        }
        else
    {
            printf("%c",str[i]);

    }
    }
   
    return 0;
}



