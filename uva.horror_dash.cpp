#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("output.txt","w",stdout);
    int t,n,i,j=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        printf("Case %d: %d\n",++j,arr[n-1]);
    }
}
