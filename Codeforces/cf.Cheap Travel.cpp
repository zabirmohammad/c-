#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,remain,cost,sum;
    cin>>n>>m>>a>>b;
    if(m*a>b)
    {
        remain=(n%m)*a;
        if(remain<b)
            cout<<((n/m)*b)+remain<<endl;
        else
            cout<<((n/m)*b)+b<<endl;
    }
    else
        cout<<n*a<<endl;

}
