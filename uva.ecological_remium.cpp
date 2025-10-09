#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n,j,k;
    long long sum=0,x,arr[3];
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        sum=0;
        for(j=0;j<n;j++)
        {
            cin>>arr[0]>>arr[1]>>arr[2];
            x=((arr[0]*arr[1]*arr[2])/arr[1]);

            sum=sum+x;
        }
        cout<<sum<<endl;
    }
    return 0;
}
