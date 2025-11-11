#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n;
    string s;
    while(cin>>s)
    {
        for(i=0;i<s.size();i++)
        {
            if(s[i]!='A'&&s[i]!='a'&&s[i]!='E'&&s[i]!='e'&&s[i]!='I'&&s[i]!='i'&&s[i]!='O'&&s[i]!='o'&&s[i]!='U'&&s[i]!='u')
            {
                cout<<".";
                if(s[i]>=65&&s[i]<=90)
                {
                    s[i]=s[i]+32;
                    cout<<s[i];
                }
                else
                    cout<<s[i];
            }
        }
        cout<<endl;
    }
}
