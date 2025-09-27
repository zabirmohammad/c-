#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("output.txt","w",stdout);
    int n,i;
    bool ans=true;
    while(cin>>n)
    {
        if(n==0)break;
        int arr[n];
        for(i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        ans=true;
        for(i=0;i<n-1;i++)
        {
            if(arr[i+1]-arr[i]>200)
            {
                ans=false;
                break;
            }
            else
                continue;

        }
        int m=1422-arr[n-1];
        m*=2;
        if(m>200)
            ans=false;

        if(ans==true)
            cout<<"POSSIBLE"<<endl;
        else
            cout<<"IMPOSSIBLE"<<endl;
    }
}
