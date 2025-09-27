#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        n=(((((n*567)/9)+7492)*235)/47)-498;
        n%=100;
        n/=10;
        cout<<abs(n)<<endl;
    }
    return 0;
}
