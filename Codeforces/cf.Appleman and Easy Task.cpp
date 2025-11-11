#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,count=0;
    bool flag=true;
    cin>>n;
    char arr[n+1][n+1];
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            cin>>arr[i][j];
    for(i=1;i<=n;i++)
    {
        count=0;
        for(j=1;j<=n;j++)
        {

            if(arr[i-1][j]=='o')
                count++;
            if(arr[i+1][j]=='o')
                count++;
            if(arr[i][j-1]=='o')
                count++;
            if(arr[i][j+1]=='o')
                count++;
        if(count%2!=0)
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
