#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("output.txt","w",stdout);
    int arr[10],t,n,i,c=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>arr[i];
        //sort(arr,arr+n);
        i=ceil(n/2);
        printf("Case %d: ",++c);
        cout<<arr[i]<<endl;
    }
}
