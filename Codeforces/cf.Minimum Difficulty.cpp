#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k=0,minimum=9999999,d,maximum=-9999999;
    cin>>n;
    int arr[n],ans[n];
    for(i=0; i<n; i++)
        cin>>arr[i];
    for(i=1; i<n-1; i++)
    {
        maximum=-999999;
        for(j=0; j<n-1; j++)
        {
            if(j+1==i)
            {
                maximum=max(maximum,arr[j+2]-arr[j]);
                j++;
            }
            else
                maximum=max(maximum,arr[j+1]-arr[j]);
        }
        minimum=min(maximum,minimum);

    }
cout<<minimum<<endl;


}
