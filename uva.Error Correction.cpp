#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,t,sum=0,count1=0,count2=0;
    while(cin>>n)
    {
        int arr[n][n];
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                cin>>arr[i][j];
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                sum+=arr[i][j];
                if(sum%2==1)
                    count1++;
            }
            sum=0;
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                sum+=arr[j][i];
                if(sum%2==1)
                    count2++;
            }
            sum=0;
        }
        if(count1==0&count2==0)
            cout<<"OK"<<endl;

        count1=0;count2=0;
    }
}
