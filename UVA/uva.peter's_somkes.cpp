#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("output.txt","w",stdout);
    int n,k,sum=0,extra;
    while(cin>>n>>k)
    {
        sum+=n;
        while(n>=k)
        {
            extra=n%k;
            n=n/k;
            sum+=n;
            n+=extra;
        }
        cout<<sum<<endl;
        sum=0;
    }
}
