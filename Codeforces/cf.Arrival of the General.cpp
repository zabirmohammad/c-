#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,max_height,min_height,arr[101],count=0,max=-99999,min=99999;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max){
            max_height=i;
            max=arr[i];
        }
        if(arr[i]<=min){
            min_height=i;
            min=arr[i];
        }
    }
    count+=max_height;
    j=(n-1)-min_height;
    count+=j;
    if(max_height<min_height)
        cout<<count<<endl;
    else
        cout<<count-1<<endl;

}
