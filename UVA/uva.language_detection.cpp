#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;

int main()
{
    string s;
    int i=1;
    cin>>s;
    while(s!="#")
    {
        if(s=="HELLO")
             printf("CASE %d: ENGLISH\n",i);
        else if(s=="HOLA")
            printf("CASE %d: SPANISH\n",i);
        else if(s=="HALLO")
             printf("CASE %d: GERMAN\n",i);
        else if(s=="BONJOUR")
            printf("CASE %d: FRENCH\n",i);
        else if(s=="CIAO")
            printf("CASE %d: ITALIAN\n",i);
        else if(s=="ZDRAVSTVUJTE")
             printf("CASE %d: RUSSIAN\n",i);
        else
            printf("CASE %d: UNKNOWN\n",i);
        i++;
        cin>>s;

    }
}
