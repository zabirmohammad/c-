#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c,i,j,count=0,max_distance=-9999;
    cin>>n>>c;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<n-1;i++)
    {
        max_distance=max(max_distance,arr[i]-arr[i+1]);

    }
    if(max_distance-c>0)
        cout<<max_distance-c<<endl;
    else
    cout<<"0"<<endl;
}
