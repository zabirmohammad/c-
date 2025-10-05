#include<bits/stdc++.h>
using namespace std;
int mod(long long b,long long p,long long m)
{
    if(p==0)
        return 1;
    if(p%2==0)
        return (mod(b,p/2,m)*mod(b,p/2,m))%m;
    if(p%2==1)
        return (mod(b,(p-1),m)*(b%m))%m;
}

int main()
{
    long long b,p,m,n,i;
    while(cin>>b>>p>>m)
    {
        n=mod(b,p,m);
        cout<<n<<endl;
    }
}


