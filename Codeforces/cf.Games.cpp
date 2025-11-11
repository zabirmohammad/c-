#include<bits/stdc++.h>
using namespace std;
int main()
{
    int home[50],away[50],n,i,j,count=0;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>home[i]>>away[i];
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i!=j&&home[i]==away[j])
                count++;
        }
    }
    cout<<count<<endl;
}
