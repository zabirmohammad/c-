#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,count=0,i,j;
    bool ans=true;
    while(cin>>n>>m)
    {
        int arr[n][m];
        count=0;
        for(i=0;i<n;i++)
        {
            ans=true;
            for(j=0;j<m;j++)
            {
                cin>>arr[i][j];
                if(arr[i][j]==0)
                    ans=false;
            }
            if(ans==true)
                count++;
        }
        cout<<count<<endl;
    }
}
