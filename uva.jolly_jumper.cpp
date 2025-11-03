#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("output.txt","w",stdout);
    int arr[3000],t,i,n,ans[3000],j=0;

    while(cin>>t)
    {
        for(i=0; i<t; i++)
            cin>>arr[i];
        for(i=0; i<t-1; i++)
        {
            ans[i]=abs(arr[i]-arr[i+1]);
        }
        sort(ans,ans+i);

        j=0;
        for(i=0; i<t-1; i++)
        {
            if(ans[i]==i+1)
            {
                j++;
            }
            else
                break;
        }
    if(j==t-1)
        printf("Jolly\n");
    else
        printf("Not jolly\n");
    }
    return 0;
}
