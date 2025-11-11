#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,j=0,k,n,m;
    string s,t;
    cin>>s>>t;
    n=s.size();
    m=t.size();
    while(j!=m)
    {
        if(s[i]==t[j])
            i++;
        j++;
    }
    cout<<i+1<<endl;
}
