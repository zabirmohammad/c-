#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("output.txt","w",stdout);
    long long t,sum,i,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=(n*(n+1))/2;
        if(sum%3==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }
}
