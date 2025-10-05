#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("output.txt","w",stdout);
    string s;
    int i,j,n,lastd=0,lastr=0,mini;
    while(cin>>n)
    {
        if(n==0)
            break;
        cin>>s;
        lastr=lastd=-1;
        mini=99999999;
        for(i=0;i<n;i++)
        {
            if(s[i]=='.')
                continue;
            else if(s[i]=='Z'){
                mini=0;
                break;
            }
            else if(s[i]=='R')
            {
                lastr=i;
                if(i-lastd<mini&&lastd!=-1)
                    mini=i-lastd;
            }
            else if(s[i]=='D')
            {
                lastd=i;
                if(i-lastr<mini&&lastr!=-1)
                    mini=i-lastr;
            }
        }
        cout<<mini<<endl;
    }
}


