#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k;
    cin>>n;
    if(n%2==1)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    int arr[n+1];
    for(i=1;i<=n;i++)
        arr[i]=i;
    for(k=1;2*k<=n;k++){
        swap(arr[2*k-1],arr[2*k]);
    }
    for(i=1;i<=n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
