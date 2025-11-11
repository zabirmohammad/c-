#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("output.txt","w",stdout);
    int t,n,d,i,j,count;
    cin>>t;
    while(t--)
    {
        cin>>d>>n;
        int dfrence[n],day[d+10];
        count=0;
        for(i=0;i<n;i++)
            cin>>dfrence[i];
        for(i=1;i<=d;i++)
            day[i]=0;
        for(i=0;i<n;i++)
        {
            for(j=1;j<=d;j++)
            {
                if(j%dfrence[i]==0)
                    day[j]=1;
            }
        }
        for(i=1;i<=d;i++)
        {
            if(day[i]==1)
            {
                if(i%7==6||i%7==0)
                    continue;
                else
                    count++;
            }
        }
        cout<<count<<endl;
    }
}
