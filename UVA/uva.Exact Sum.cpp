#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("output.txt","w",stdout);
    int n,m,i,j,k,l,sum=0,temp,mini=99999;
    while(cin>>n)
    {
        int arr[n];
        for(i=0;i<n;i++)
            cin>>arr[i];
        cin>>m;
        sort(arr,arr+n);
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n;j++)
            {
                sum=arr[i]+arr[j];
                if(sum==m&&i!=j)
                {
                    if(arr[i]>arr[j])
                    {
                        if(arr[i]-arr[j]<mini)
                        {
                            k=arr[i];
                            l=arr[j];
                            mini=k=l;
                        }
                    }
                    else
                    {
                        if(arr[j]>=arr[i])
                        {
                            k=arr[j];
                            l=arr[i];
                            mini=arr[j]-arr[i];
                        }
                    }
                }
            }
        }
        if(k>l)
            swap(k,l);
       printf("Peter should buy books whose prices are %d and %d.\n",k,l);
        cout<<endl;
        mini=99999;
    }
}
