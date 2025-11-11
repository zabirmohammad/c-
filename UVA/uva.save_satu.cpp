#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,k,sum=0;
    string s;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>s;
        if(s=="donate")
        {
            cin>>k;
            sum+=k;
        }
        else if(s=="report")
            cout<<sum<<endl;
    }
    return 0;
}
