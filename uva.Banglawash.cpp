#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("output.txt","w",stdout);
    int test,n,i,j,b=0,w=0,t=0,c=0,a=0;
    string s;
    cin>>test;
    while(test--)
    {
        cin>>n;
        cin>>s;

        for(i=0;i<n;i++)
        {
            if(s[i]=='A')
                a++;
            else if(s[i]=='B')
                b++;
            else if(s[i]=='W')
                w++;
            else if(s[i]=='T')
                t++;
        }
        cout<<"Case "<<++c<<": ";

        if(n==a)
            cout<<"ABANDONED"<<endl;
        else if(a+b==n)
            cout<<"BANGLAWASH"<<endl;
        else if(a+w==n)
            cout<<"WHITEWASH"<<endl;
        else if(b>w)
            cout<<"BANGLADESH "<<b<<" - "<<w<<endl;
        else if(w>b)
            cout<<"WWW "<<w<<" - "<<b<<endl;
        else
            cout<<"DRAW "<<b<<" "<<t<<endl;
        w=0;b=0;t=0;a=0;

    }
}
