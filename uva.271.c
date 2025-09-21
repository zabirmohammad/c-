#include<stdio.h>
#include<string.h>
int main()
{
    int i,count=0,l;
    char text[1000];

    while(gets(text))
    {
        l=strlen(text);
        for(i=0;i<l;i++)
        {
            if(text[i]=='"')
            {
                count++;
                if(count%2==1)
                    printf("``");
                else
                    printf("''");
            }
            else
                printf("%c",text[i]);
        }
    }
}
