#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100],t,n,i,j,sum=0,sub;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        for(j=0;j<n;j++)
            cin>>arr[j];
        sum=0;
        sort(arr,arr+n);
        for(j=0;j<n-1;j++)
        {
            sub=arr[j+1]-arr[j];
            sum=sum+sub;
        }
        cout<<2*sum<<endl;
    }
    return 0;
}
