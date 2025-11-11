#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100],n,i,j,x,beg=0,e,mid;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    cin>>x;
    e = n;
    mid =(beg+e)/2;
    while(beg<=e && arr[mid]!=x)
    {
        if(x>arr[mid])
            beg=mid+1;
        else
            e=mid-1;

        mid=(beg+e)/2;
    }
    if(arr[mid]==x)
        cout<<"found at "<<mid+1<<"th position"<<endl;
}
