#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,i,j,t,f,max_joy=-999999999;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>f>>t;
        if(t<=k)
            max_joy=max(max_joy,f);
        else
        {
            f-=(t-k);
            max_joy=max(max_joy,f);
        }
    }
    cout<<max_joy<<endl;
}
