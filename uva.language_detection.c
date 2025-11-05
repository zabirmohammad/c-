#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    int i=1,j;
    while(1)
    {
        scanf("%s",&s);
        if(strcmp(s,"#")==0)
            break;
        if(strcmp(s,"HELLO")==0)
            printf("CASE %d: ENGLISH\n",i);
        else if(strcmp(s,"HOLA")==0)
            printf("CASE %d: SPANISH\n",i);
        else if(strcmp(s,"HALLO")==0)
            printf("CASE %d: GERMAN\n",i);
        else if(strcmp(s,"BONJOUR")==0)
            printf("CASE %d: FRENCH\n",i);
        else if(strcmp(s,"CIAO")==0)
            printf("CASE %d: ITALIAN\n",i);
        else if(strcmp(s,"ZDRAVSTVUJTE")==0)
            printf("CASE %d: RUSSIAN\n",i);
        else
            printf("CASE %d: UNKNOWN\n",i);

        i++;
    }
}
