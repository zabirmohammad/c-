#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("output.txt","w",stdout);
    int n,i,sum,total;
    while(cin>>n)
    {
        if(n==0)
            break;
        int arr[n];
        total=0;
        for(i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        sum=arr[0];
        for(i=1;i<n;i++)
        {
            sum+=arr[i];
            total+=sum;
        }
        cout<<total<<endl;
    }
}
