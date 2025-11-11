#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("output.txt","w",stdout);
    int t,i,j,k,n,f,a;
    cin>>t;
    while(t--)
    {
        cin>>a>>f;
        for(i=1;i<=f;i++)
        {
            for(j=1;j<=a;j++)
            {
                for(k=1;k<=j;k++)
                    cout<<j;
                cout<<endl;
            }
            for(j=a-1;j>=1;j--){
                for(k=1;k<=j;k++)
                    cout<<j;
            cout<<endl;
            }
            if(t==0&&i==f)
                continue;
            else
                cout<<endl;

        }

    }
}
