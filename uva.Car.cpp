#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("output.txt","w",stdout);
    double x,y,z,u,v,a,s,t,n;
    int c=0;
    while(cin>>n)
    {
        if(n==0)
            break;
        cin>>x>>y>>z;
        cout<<"Case "<<++c<<": ";
        if(n==1)
        {
            //u=x;v=y;t=z;
            a=(y-x)/z;
            s=(x+y)*.5*z;
            cout<<setprecision(3)<<fixed<<s<<" "<<a<<endl;
        }
        if(n==2)
        {
            t=(y-x)/z;
            s=(y+x)*.5*t;
            cout<<setprecision(3)<<fixed<<s<<" "<<t<<endl;
        }
        if(n==3)
        {
            v=sqrt((x*x)+(2*y*z));
            t=(v-x)/y;
            cout<<setprecision(3)<<fixed<<v<<" "<<t<<endl;
        }
        if(n==4)
        {
            u=sqrt((x*x)-(2*y*z));
            t=(x-u)/y;
            cout<<setprecision(3)<<fixed<<u<<" "<<t<<endl;
        }
    }
}
