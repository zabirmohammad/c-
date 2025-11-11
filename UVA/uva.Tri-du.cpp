#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("output.txt","w",stdout);
    int a[2],b,r;
    while(cin>>a[0]>>a[1])
    {
        if(a[0]==a[1])
            cout<<a[0]<<endl;
        else
        {
            sort(a,a+2);
            cout<<a[1]<<endl;
        }
    }
}
