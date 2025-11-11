#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j;
    cin>>n>>m;
    char arr[n][m];
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            cin>>arr[i][j];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(arr[i][j]=='-')
                cout<<"-";
            else
            {
                if(i%2==0&&j%2==0)
                    cout<<"B";
                else if(i%2==0&&j%2==1)
                    cout<<"W";
                else if(i%2==1&&j%2==0)
                    cout<<"W";
                else
                    cout<<"B";
            }
        }
        cout<<endl;
    }
}
