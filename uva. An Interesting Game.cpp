#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("output.txt","w",stdout);
    int n,k,x,t,cas=0,i;
    long long  sum=0,sub=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>x;
        sum=(n*(n+1))/2;
        for(i=x;i<x+k;i++)
            sub+=i;
        sum-=sub;
        printf("Case %d: %d\n",++cas,sum);
        sub=0;
    }
}
