#include<bits/stdc++.h>
using namespace std;

int main()
{
    char exp[50];
    int i;
    while(gets(exp))
    {
        for(i=0;i<strlen(exp);i++)
        {
            if(exp[i]=='A'||exp[i]=='B'||exp[i]=='C')
                exp[i]='2';
            else if(exp[i]=='D'||exp[i]=='E'||exp[i]=='F')
                exp[i]='3';
            else if(exp[i]=='G'||exp[i]=='H'||exp[i]=='I')
                exp[i]='4';
            else if(exp[i]=='J'||exp[i]=='K'||exp[i]=='L')
                exp[i]='5';
            else if(exp[i]=='M'||exp[i]=='N'||exp[i]=='O')
                exp[i]='6';
            else if(exp[i]=='P'||exp[i]=='Q'||exp[i]=='R'||exp[i]=='S')
                exp[i]='7';
            else if(exp[i]=='T'||exp[i]=='U'||exp[i]=='V')
                exp[i]='8';
            else if(exp[i]=='W'||exp[i]=='X'||exp[i]=='Y'||exp[i]=='Z')
                exp[i]='9';

            cout<<exp[i];
        }
        cout<<endl;
    }
}
