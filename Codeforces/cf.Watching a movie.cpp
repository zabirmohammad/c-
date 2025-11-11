#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,t=1,i,j,l,r,count=0;
    cin>>n>>x;
    for(i=0;i<n;i++)
    {
        cin>>l>>r;
        count+=((l-t)%x);
        count+=(r-l+1);
        t=r+1;
    }
    cout<<count<<endl;
}
