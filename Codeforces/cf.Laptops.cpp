#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    bool flag=false;
    cin>>n;
    int arr[n][2];
    for(i=0;i<n;i++)
        cin>>arr[i][0]>>arr[i][1];
    for(i=0;i<n;i++)
    {
        if(arr[i][0]!=arr[i][1])
        {
            flag=true;
            break;
        }
    }
    if(flag==true)
        cout<<"Happy Alex"<<endl;
    else
        cout<<"Poor Alex"<<endl;
}
