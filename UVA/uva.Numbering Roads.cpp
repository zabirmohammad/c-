#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("output.txt","w",stdout);
    int t=0,r,n;
    double d;
    while(cin>>r>>n)
    {
        if(r==0&&n==0)
            break;
        cout<<"Case "<<++t<<": ";
        if(r>n+n*26)
            cout<<"impossible"<<endl;
        else if(r<n)
            cout<<0<<endl;
        else
        {
            d=double(r-n)/n;
            cout<<ceil(d)<<endl;
        }
    }
}
