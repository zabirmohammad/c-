#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("output.txt","w",stdout);
    int t,n,i,j,k=0,mile_cost,juice_cost,minute;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
            cin>>arr[i];
        mile_cost=0;
        juice_cost=0;
        for(i=0;i<n;i++)
        {
            minute=arr[i]/30;
            if(arr[i]%30!=0||arr[i]%30==0)
                minute++;
            mile_cost+=minute*10;
        }
        for(i=0;i<n;i++)
        {
            minute=arr[i]/60;
            if(arr[i]%60!=0||arr[i]%60==0)
                minute++;
            juice_cost+=minute*15;
        }
        if(juice_cost<mile_cost)
            printf("Case %d: Juice %d\n",++k,juice_cost);
        else if(juice_cost>mile_cost)
            printf("Case %d: Mile %d\n",++k,mile_cost);
        else
            printf("Case %d: Mile Juice %d\n",++k,juice_cost);
    }
}
