#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("output.txt","w",stdout);
    int n,i;
    long long sum=0;
    while(cin>>n)
    {
        if(n==0)break;
        for(i=1;i<=n;i++)
        {
            sum+=(i*i);
        }
        cout<<sum<<endl;
        sum=0;
    }
}
