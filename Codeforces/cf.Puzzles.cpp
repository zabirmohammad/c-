#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,minimum=99999;
    cin>>n>>m;
    int arr[m];
    for(i=0;i<m;i++)
        cin>>arr[i];
    sort(arr,arr+m);
    for(i=0;i<=m-n;i++)
    {
        if(arr[i+n-1]-arr[i]<=minimum){
            minimum=arr[i+n-1]-arr[i];
        }
    }
    cout<<minimum<<endl;
}
