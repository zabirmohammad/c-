#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("output.txt","w",stdout);
    int t,n,i,j,k,count=0,ptr;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
            cin>>arr[i];
        ptr=n-1;
        for(i=0;i<n;i++)
        {

            for(j=0;j<ptr;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    swap(arr[j],arr[j+1]);
                    count++;
                }
            }
            ptr--;
        }
        cout<<"Optimal train swapping takes "<<count<<" swaps."<<endl;
        count=0;
    }
}
