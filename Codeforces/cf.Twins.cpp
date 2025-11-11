#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j=0,sum1=0,sum2=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        sum1+=arr[i];
    }
    sum1/=2;
    sort(arr,arr+n);
    for(i=n-1;i>=0;i--)
    {
        sum2+=arr[i];
        j++;
        if(sum2>sum1)
            break;
    }
    cout<<j<<endl;
}
