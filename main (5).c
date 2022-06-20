#include <stdio.h>
#include<string.h>
int main()
{
    char str[30]={'E','m','b','e','d','d','e','d',' ',' ','S','y','s','t','e','m','s'};
    int i,j,k;
    for(i=0;i<strlen(str);i++)
    {
        for(j=i+1;str[j]!='\0';j++)
        {
            if(str[j]==str[i])
            {
                for(k=j;str[k]!='\0';k++)
                {
                   str[k]=str[k+2]; 
                }
            }
        }
    }
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]>=65&&str[i]<=90)
        str[i]=str[i]+32;
    }
    for(i=0;i<strlen(str);i++)
    {
        for(j=i+1;str[j]!='\0';j++)
        {
            if(str[j]==str[i])
            {
                for(k=j;str[k]!='\0';k++)
                {
                    str[k]=str[k+1];
                }
            }
        }
    }
    printf("%s",str);

    return 0;
}