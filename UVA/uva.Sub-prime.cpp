#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("output.txt","w",stdout);
    int b,n,d,c,v,sum=0,i,m;
    while(cin>>b>>n)
    {
        if(b==0&&n==0)
            break;
        int arr[b];
        for(i=0;i<b;i++){
            cin>>arr[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>d>>c>>v;
           arr[d-1]-=v;
           arr[c-1]+=v;
        }
        sort(arr,arr+b);
        if(arr[0]>=0)
            cout<<"S"<<endl;
        else
            cout<<"N"<<endl;
    }
}
