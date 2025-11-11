#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,expend=0,count=0,i;
    cin>>n>>d;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];


    for(i=0;i<n;i++)
    {
        expend+=arr[i];
        if(expend>d){
            cout<<"-1"<<endl;
            return 0;
        }
        if(i!=n-1){
            expend+=10;
            count+=2;
        }



    }
    if(d>=expend)
    {
        count+=((d-expend)/5);

    }

        cout<<count<<endl;
}
