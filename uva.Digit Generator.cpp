#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("output.txt","w",stdout);
    int n,i,j,t,m,sum;
    bool ans=false;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=false;
        for(i=n-100;i<n;i++)
        {
            m=i;
            sum=i;
            while(m>0)
            {
                j=m%10;
                m/=10;
                sum+=j;
            }
            if(sum==n)
            {
                ans=true;
                break;
            }
        }
        if(ans==true)
            cout<<i<<endl;
        else
            cout<<"0"<<endl;
    }
}
