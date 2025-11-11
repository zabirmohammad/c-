#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("output.txt","w",stdout);
    char s[21];
    int i;
    while(gets(s))
    {
        for(i=0; i<strlen(s); i++)
        {
            if(s[i]=='B'||s[i]=='F'||s[i]=='P'||s[i]=='V')
            {
                if(s[i-1]!='B'&&s[i-1]!='F'&&s[i-1]!='P'&&s[i-1]!='V')
                cout<<"1";
            }
            else if(s[i]=='C'||s[i]=='G'||s[i]=='J'||s[i]=='K'||s[i]=='Q'||s[i]=='S'||s[i]=='X'||s[i]=='Z')
            {
                if(s[i-1]!='C'&&s[i-1]!='G'&&s[i-1]!='J'&&s[i-1]!='K'&&s[i-1]!='Q'&&s[i-1]!='S'&&s[i-1]!='X'&&s[i-1]!='Z')
                cout<<"2";
            }
            else if(s[i]=='D'||s[i]=='T')
            {
                if(s[i-1]!='D'&&s[i-1]!='T')
                    cout<<"3";
            }
            else if(s[i]=='L')
            {
               if(s[i-1]!='L')
                cout<<"4";
            }
            else if(s[i]=='N'||s[i]=='M')
            {
                if(s[i-1]!='N'&&s[i-1]!='M')
                    cout<<"5";
            }
            else if(s[i]=='R')
            {
                if(s[i-1]!='R')
                    cout<<"6";
            }

        }
        cout<<endl;
    }
}

