#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
    char s[100],s1[10]="Hajj";
    int i=0;
    while(scanf("%s",&s))
    {
        if(s=='*')
            break;

        i=strcmp(s,s1);
        if(i==0)
            printf("Hajj-e-Akbar\n");
        else
            printf("Hajj-e-Asghar\n");
    }
}
