#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,k,n,j;
    cin>>y>>k>>n;
    x=k-(y%k);
    j=n-y;
    if(x<=j)
    {
        cout<<x<<" ";
        x+=k;
        while(x<=j)
        {
            cout<<x<<" ";
            x+=k;
        }
        cout<<endl;
    }
    else
        cout<<"-1"<<endl;
}
