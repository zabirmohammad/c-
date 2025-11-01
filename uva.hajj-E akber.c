#include<stdio.h>
#include<string.h>


int main()
{
    char s[100],s1[10]="Hajj";
    int i=0;
    while(scanf("%s",&s)==1)
    {
        if(strcmp(s,"*")==0)
            return 0;
        if(strcmp(s,"Hajj")==0)
            printf("Hajj-e-Akbar\n");
        else if(strcmp(s,"Umrah")==0)
            printf("Hajj-e-Asghar\n");
    }
}
