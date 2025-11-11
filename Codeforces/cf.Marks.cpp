#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,k,count=0,previous,maximum;
    cin>>n>>m;
    char arr[n][m];
    int ans[m][n];
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            cin>>arr[i][j];
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            ans[i][j]=0;
    for(i=0;i<m;i++)
    {
        maximum=-99999;
        previous=-1;
        for(j=0;j<n;j++)
        {
            if(arr[j][i]-'0'>maximum)
            {
                maximum=arr[j][i]-'0';
                ans[i][j]=1;
                for(int k=0;k<j;k++)
                {
                    if(ans[i][k]==1)
                        ans[i][k]=0;
                }

            }
            else if(arr[j][i]-'0'==maximum)
            {
                ans[i][j]=1;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(ans[j][i]==1)
            {
                count++;
                break;
            }
        }
    }
    cout<<count<<endl;
}
