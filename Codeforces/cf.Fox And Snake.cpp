#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j;
    bool start=false;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i%2==0)
                cout<<"#";
            else
            {
                if(start==false)
                {
                    if(j==m-1)
                        cout<<"#";
                    else
                        cout<<".";
                }
                else
                {
                    if(j==0)
                        cout<<"#";
                    else
                        cout<<".";
                }

            }
        }
        if(start==false&&i%2!=0)
            start=true;
        else if(start==true&&i%2!=0)
            start=false;
        cout<<endl;
    }
}
