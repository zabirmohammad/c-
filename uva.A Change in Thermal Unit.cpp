#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("output.txt","w",stdout);
    double c,n,f,d;
    int t,cse=0;
    cin>>t;
    while(t--)
    {
        cin>>c>>d;
        f=9*c/5;
        f+=d;
        c=c+5.0/9.0*d;
        //cout<<"Case "<<++cse<<": "<<setprecision(2)<<fixed<<c<<endl;
        printf("Case %d: %0.2lf\n",++cse,c);
    }
}
