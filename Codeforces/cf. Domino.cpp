#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,x_sum=0,y_sum=0;
    bool possible=false;
    cin>>n;
    int x[n],y[n];
    for(i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
        x_sum+=x[i];
        y_sum+=y[i];
        if(x[i]%2==0&&y[i]%2==1||x[i]%2==1&&y[i]%2==0)
                possible=true;
    }
    if(x_sum%2==0&&y_sum%2==0)
        cout<<"0"<<endl;
    else if(x_sum%2==1&&y_sum%2==1)
    {
        if(possible==true)
            cout<<"1"<<endl;
        else
            cout<<"-1"<<endl;
    }
    else
        cout<<"-1"<<endl;
}
