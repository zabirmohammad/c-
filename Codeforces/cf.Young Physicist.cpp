#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,sum=0;
    bool ans=true;
    cin>>n;
    int arr[n][3];
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(j=0;j<3;j++)
    {
        for(i=0;i<n;i++)
        {
            sum+=arr[i][j];
        }
        if(sum!=0)
        {
            ans=false;
            break;
        }

    }
    if(ans==true)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
