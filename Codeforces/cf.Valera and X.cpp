#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,m;
    bool flag=true;
    char cross,zero,arr[320][320];
    cin>>n;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin>>arr[i][j];
    cross=arr[0][0];
    zero=arr[0][1];
    if(cross==zero)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j||j==n-1-i)
            {
                if(arr[i][j]!=cross){
                flag=false;
                break;
                }
            }

            else if(arr[i][j]!=zero)
            {
                flag=false;
                break;
            }
        }
    }
    if(flag==true)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
