#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,m,j,sum=0,count;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    for(i=arr[n-1];i>0;i--)
    {
        count=0;
        for(j=0;j<n;j++)
            if(arr[j]%i==0)
                count++;
        if(count==n)
        {
            cout<<i*n<<endl;
            return 0;
        }
    }

}
