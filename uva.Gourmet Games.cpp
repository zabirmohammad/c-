#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,i,j,count=0;
    string s="cannot do this";
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        while(n>m)
        {
            n-=m;
            n++;
            count++;
        }
        if(n==m)
            cout<<++count<<endl;
        else
            cout<<s<<endl;
        count=0;
    }
}
