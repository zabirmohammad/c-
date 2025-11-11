#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,flag=0,count=0;
    bool rn=false,ln=false,dn=false,un=false;
    cin>>n;
    int arr[n][2];
    for(i=0;i<n;i++)
        for(j=0;j<2;j++)
            cin>>arr[i][j];
    for(k=0;k<n;k++)
    {
        rn=ln=un=dn=false;
        for(i=0;i<n;i++)
        {
            if(arr[k][0]>arr[i][0]&&arr[k][1]==arr[i][1])
                rn=true;
            else if(arr[k][0]<arr[i][0]&&arr[k][1]==arr[i][1])
                ln=true;
            else if(arr[k][0]==arr[i][0]&&arr[k][1]<arr[i][1])
                dn=true;
            else if(arr[k][0]==arr[i][0]&&arr[k][1]>arr[i][1])
                un=true;
        }
        if(rn==true&&ln==true&&dn==true&&un==true)
            count++;
    }
    cout<<count<<endl;
}
